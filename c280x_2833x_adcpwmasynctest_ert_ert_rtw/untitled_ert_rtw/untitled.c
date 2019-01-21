/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Sep 23 15:39:08 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block signals (auto storage) */
B_untitled_T untitled_B;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* S-Function (c2802xadc): '<Root>/ADC' */
  {
    /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
    /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
    untitled_B.ADC = (AdcaResultRegs.ADCRESULT0);
  }

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  untitled_B.Compare = (uint16_T)(untitled_B.ADC <=
    untitled_P.CompareToConstant_const);

  /* S-Function (c280xgpio_do): '<Root>/Digital Output' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO31 = (untitled_B.Compare != 0);
  }

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  untitled_B.Compare_d = (uint16_T)(untitled_B.ADC >
    untitled_P.CompareToConstant1_const);

  /* S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  {
    GpioDataRegs.GPBTOGGLE.bit.GPIO34 = (untitled_B.Compare_d != 0);
  }

  /* Product: '<Root>/Product' incorporates:
   *  Constant: '<Root>/Constant'
   */
  untitled_B.Product1 = (uint32_T)((uint64_T)untitled_B.Compare *
    untitled_P.Constant_Value);

  /* S-Function (c280xcanxmt): '<Root>/eCAN Transmit' */
  {
    tCANMsgObject sTXCANMessage;
    sTXCANMessage.ui32MsgID = 12002345;// CAN message ID - use 1
    sTXCANMessage.ui32MsgIDMask = 0;   // no mask needed for TX
    unsigned char ucTXMsgData[4];
    ucTXMsgData[0] = (untitled_B.Product1 & 0xFF);
    ucTXMsgData[1] = (untitled_B.Product1 >> 8) & 0xFF;
    ucTXMsgData[2] = (untitled_B.Product1 >> 16) & 0xFF;
    ucTXMsgData[3] = (untitled_B.Product1 >> 24) & 0xFF;
    sTXCANMessage.ui32MsgLen = 4;      // size of message
    sTXCANMessage.pucMsgData = ucTXMsgData;
    sTXCANMessage.ui32Flags = MSG_OBJ_TX_INT_ENABLE;// enable interrupt on TX
    sTXCANMessage.ui32Flags |= MSG_OBJ_EXTENDED_ID;
    while ((HWREG(CANB_BASE + CAN_O_TXRQ_21) & (1)) != 0) {
    }                                  /* check eCAN Transmit Request pending*/

    CANMessageSet(CANB_BASE, 1, &sTXCANMessage, MSG_OBJ_TYPE_TX);
  }

  /* Product: '<Root>/Product1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  untitled_B.Product1 = (uint32_T)((uint64_T)untitled_B.Compare_d *
    untitled_P.Constant1_Value);

  /* S-Function (c280xcanxmt): '<Root>/eCAN Transmit1' */
  {
    tCANMsgObject sTXCANMessage;
    sTXCANMessage.ui32MsgID = 12002345;// CAN message ID - use 1
    sTXCANMessage.ui32MsgIDMask = 0;   // no mask needed for TX
    unsigned char ucTXMsgData[4];
    ucTXMsgData[0] = (untitled_B.Product1 & 0xFF);
    ucTXMsgData[1] = (untitled_B.Product1 >> 8) & 0xFF;
    ucTXMsgData[2] = (untitled_B.Product1 >> 16) & 0xFF;
    ucTXMsgData[3] = (untitled_B.Product1 >> 24) & 0xFF;
    sTXCANMessage.ui32MsgLen = 4;      // size of message
    sTXCANMessage.pucMsgData = ucTXMsgData;
    sTXCANMessage.ui32Flags = MSG_OBJ_TX_INT_ENABLE;// enable interrupt on TX
    sTXCANMessage.ui32Flags |= MSG_OBJ_EXTENDED_ID;
    while ((HWREG(CANB_BASE + CAN_O_TXRQ_21) & (2)) != 0) {
    }                                  /* check eCAN Transmit Request pending*/

    CANMessageSet(CANB_BASE, 2, &sTXCANMessage, MSG_OBJ_TYPE_TX);
  }
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &untitled_B), 0,
                sizeof(B_untitled_T));

  /* Start for S-Function (c2802xadc): '<Root>/ADC' */
  InitAdcA();
  config_ADCA_SOC0 ();
  AdcaRegs.ADCSOCFRC1.bit.SOC0 = 1;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0x3FFFFFFF;
  GpioCtrlRegs.GPADIR.all |= 0x80000000;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPBDIR.all |= 0x4;
  EDIS;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
