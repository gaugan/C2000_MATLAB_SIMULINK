#include "F2806x_Device.h"
#include "F2806x_Examples.h"
#include "F2806x_GlobalPrototypes.h"
#include "rtwtypes.h"
#include "Blinky_ePWM_eCAP.h"
#include "Blinky_ePWM_eCAP_private.h"

void init_eCAN_A ( uint16_T bitRatePrescaler, uint16_T timeSeg1, uint16_T
                  timeSeg2, uint16_T sbg, uint16_T sjw, uint16_T sam)
{
  struct ECAN_REGS ECanaShadow;

  /* Configure CAN pins using GPIO regs */
  EALLOW;
  GpioCtrlRegs.GPAPUD.bit.GPIO30 = 0;  /* Enable pull-up for GPIO30 (CANRXA)*/
  GpioCtrlRegs.GPAMUX2.bit.GPIO30 = 1; /* Configure GPIO30 for CANRXA operation*/
  GpioCtrlRegs.GPAPUD.bit.GPIO31 = 0;  /* Enable pull-up for GPIO31 (CANTXA)*/
  GpioCtrlRegs.GPAMUX2.bit.GPIO31 = 1; /* Configure GPIO31 for CANTXA operation*/
  EDIS;

  /* Configure the RX and TX pins for transmission */
  EALLOW;
  ECanaShadow.CANRIOC.all = ECanaRegs.CANRIOC.all;
  ECanaShadow.CANRIOC.bit.RXFUNC = 1;
  ECanaRegs.CANRIOC.all = ECanaShadow.CANRIOC.all;
  ECanaShadow.CANTIOC.all = ECanaRegs.CANTIOC.all;
  ECanaShadow.CANTIOC.bit.TXFUNC = 1;
  ECanaRegs.CANTIOC.all = ECanaShadow.CANTIOC.all;
  EDIS;

  /* Disable all Mailboxes */
  ECanaRegs.CANME.all = 0;
  EALLOW;
  ECanaRegs.CANMIM.all = 0xFFFFFFFF;
  ECanaShadow.CANMC.all = ECanaRegs.CANMC.all;
  ECanaShadow.CANMC.bit.CCR = 1;
  ECanaRegs.CANMC.all = ECanaShadow.CANMC.all;
  EDIS;
  do {
    ECanaShadow.CANES.all = ECanaRegs.CANES.all;
  } while (ECanaShadow.CANES.bit.CCE != 1 );/* Wait for CCE bit to be set..*/

  /* Configure the eCAN timing parameters */
  EALLOW;
  ECanaShadow.CANBTC.all = ECanaRegs.CANBTC.all;
  ECanaShadow.CANBTC.bit.BRPREG = bitRatePrescaler-1;
  ECanaShadow.CANBTC.bit.TSEG2REG = timeSeg2-1;
  ECanaShadow.CANBTC.bit.TSEG1REG = timeSeg1-1;
  ECanaShadow.CANBTC.bit.SAM = sam-1;
  ECanaShadow.CANBTC.bit.SJWREG = sjw-1;

  /*ECanaShadow.CANBTC.bit.ERM = sbg-1; */
  ECanaRegs.CANBTC.all = ECanaShadow.CANBTC.all;
  ECanaShadow.CANMC.all = ECanaRegs.CANMC.all;
  ECanaShadow.CANMC.bit.CCR = 0 ;      /* Set CCR = 0*/
  ECanaRegs.CANMC.all = ECanaShadow.CANMC.all;
  EDIS;
  do {
    ECanaShadow.CANES.all = ECanaRegs.CANES.all;
  } while (ECanaShadow.CANES.bit.CCE != 0 );/* Wait for CCE bit to be cleared..*/

  EALLOW;
  ECanaShadow.CANMC.all = ECanaRegs.CANMC.all;
  ECanaShadow.CANMC.bit.STM = 0;       /* Configure CAN for normal mode    */
  ECanaShadow.CANMC.bit.SCB = 1;       /* User has selected eCAN mode*/
  ECanaShadow.CANMC.bit.DBO = 1;       /* Set byte order: least significant first*/
  ECanaRegs.CANMC.all = ECanaShadow.CANMC.all;
  EDIS;

  /* Configure CAN interrupts */
  EALLOW;
  ECanaShadow.CANMIM.all = ECanaRegs.CANMIM.all;
  ECanaShadow.CANMIM.all = (uint32_T) 2;
  ECanaRegs.CANMIM = ECanaShadow.CANMIM;
  EDIS;
  EALLOW;
  ECanaShadow.CANMIL.all = ECanaRegs.CANMIL.all;
  ECanaShadow.CANMIL.all = (uint32_T) 0;
  ECanaRegs.CANMIL = ECanaShadow.CANMIL;
  EDIS;
  EALLOW;
  ECanaShadow.CANGIM.all = ECanaRegs.CANGIM.all;
  ECanaShadow.CANGIM.bit.GIL = 0;      /* GIL value determines ECana(0/1)INT*/
  ECanaShadow.CANGIM.bit.I0EN = 1;
  ECanaShadow.CANGIM.bit.I1EN = 0;
  ECanaRegs.CANGIM.all = ECanaShadow.CANGIM.all;
  EDIS;
}

void config_eCAN_A_mbx (uint16_T mbxType, uint16_T mbxNo, uint32_T msgID,
  uint16_T msgType)
{
  uint32_T maskRx = 0x1;
  uint32_T maskTx;
  struct ECAN_REGS ECanaShadow;
  volatile struct MBOX *mbx = &ECanaMboxes.MBOX0 + mbxNo;
  maskRx = maskRx<<mbxNo;
  maskTx = ~maskRx;
  mbx->MSGCTRL.bit.RTR = 0;
  ECanaShadow.CANME.all = ECanaRegs.CANME.all;
  ECanaRegs.CANME.all = 0x00000000;
  if (msgType==1)
    mbx->MSGID.all = msgID;            /* For Extended ID use bits  0:28 */
  else
    mbx->MSGID.bit.STDMSGID = msgID;   /* For Standard ID use bits 18:28 */
  mbx->MSGID.bit.AME = 0;
  mbx->MSGID.bit.AAM = 0;
  mbx->MSGID.bit.IDE = msgType;
  ECanaShadow.CANMD.all = ECanaRegs.CANMD.all;
  if (mbxType==0) {
    ECanaShadow.CANMD.all |= maskRx;
  } else {
    ECanaShadow.CANMD.all &= maskTx;
  }

  ECanaRegs.CANMD.all = ECanaShadow.CANMD.all;
  ECanaShadow.CANME.all |= maskRx;
  ECanaRegs.CANME.all = ECanaShadow.CANME.all;
}
