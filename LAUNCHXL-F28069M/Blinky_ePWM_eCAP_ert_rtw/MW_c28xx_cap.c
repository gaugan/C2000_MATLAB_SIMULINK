#include "F2806x_Device.h"
#include "F2806x_Examples.h"
#include "F2806x_GlobalPrototypes.h"
#include "rtwtypes.h"
#include "Blinky_ePWM_eCAP.h"
#include "Blinky_ePWM_eCAP_private.h"

void init_CAP_GPIO()
{
  EALLOW;
  GpioCtrlRegs.GPAPUD.bit.GPIO5 = 0;   /* Enable pull-up on GPIO5 (CAP1)*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 3;  /* Configure GPIO5 as (CAP1)*/
  EDIS;
}

void init_CAP1()
{
  ECap1Regs.ECEINT.all = 0x0000;       /* Disable all capture interrupts*/
  ECap1Regs.ECCLR.all = 0xFFFF;        /* Clear all CAP interrupt flags*/
  ECap1Regs.ECCTL1.bit.CAPLDEN = 0;    /* Disable CAP1-CAP4 register loads*/
  ECap1Regs.ECCTL2.bit.TSCTRSTOP = 0;  /* Make sure the counter is stopped*/
  ECap1Regs.CTRPHS = 0U;               /* Counter Phase Control*/
  ECap1Regs.ECCTL2.bit.SYNCI_EN = 1;   /* Enable sync in*/
  ECap1Regs.ECCTL2.bit.SYNCO_SEL = 0;  /* Pass through*/
  ECap1Regs.ECCTL2.bit.CAP_APWM = 0;   /* Capture mode*/
  ECap1Regs.ECCTL2.bit.CONT_ONESHT = 1;/* One-shot*/
  ECap1Regs.ECCTL1.bit.PRESCALE = 0U;  /*Event prescaler*/
  ECap1Regs.ECCTL2.bit.STOP_WRAP = 0;  /* Stop at 4 events*/
  ECap1Regs.ECCTL1.bit.CAP1POL = 0;    /* Select rising or falling edge*/
  ECap1Regs.ECCTL1.bit.CTRRST1 = 0;    /* Difference operation        */
  ECap1Regs.ECCLR.all = 0x0FF;         /* Clear pending interrupts*/
  ECap1Regs.ECCTL2.bit.REARM = 1;      /* arm one-shot*/
  ECap1Regs.ECCTL2.bit.TSCTRSTOP = 1;  /* Start Counter*/
  ECap1Regs.ECCTL1.bit.CAPLDEN = 1;    /* Enable CAP1-CAP4 register loads*/
}
