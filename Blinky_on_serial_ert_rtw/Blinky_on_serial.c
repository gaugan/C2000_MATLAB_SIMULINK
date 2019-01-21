/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Blinky_on_serial.c
 *
 * Code generated for Simulink model 'Blinky_on_serial'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Feb 02 15:23:36 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Blinky_on_serial.h"
#include "Blinky_on_serial_private.h"

/* Block signals (auto storage) */
B_Blinky_on_serial_T Blinky_on_serial_B;

/* Real-time model */
RT_MODEL_Blinky_on_serial_T Blinky_on_serial_M_;
RT_MODEL_Blinky_on_serial_T *const Blinky_on_serial_M = &Blinky_on_serial_M_;

/* Model step function */
void Blinky_on_serial_step(void)
{
  /* S-Function (c28xsci_rx): '<Root>/SCI Receive' */
  {
    int i;
    int errFlg = NOERROR;
    unsigned int recbuff[1];
    for (i = 0; i < 1; i++)
      recbuff[i] = 0;

    /* Receiving data */
    errFlg = scia_rcv(recbuff, 1, LONGLOOP, 1);
    if (errFlg != NOERROR)
      goto RXERRA;
    memcpy( &Blinky_on_serial_B.SCIReceive, recbuff, 1);
   RXERRA:
    asm(" NOP");
  }

  /* If: '<Root>/If' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   *  Inport: '<S1>/In1'
   *  Inport: '<S2>/In1'
   *  Inport: '<S3>/In1'
   *  Inport: '<S4>/In1'
   *  Inport: '<S5>/In1'
   */
  if (Blinky_on_serial_B.SCIReceive == 49U) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    Blinky_on_serial_B.In1_c = Blinky_on_serial_P.Constant_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if (Blinky_on_serial_B.SCIReceive == 50U) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    Blinky_on_serial_B.In1_g = Blinky_on_serial_P.Constant1_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  } else if (Blinky_on_serial_B.SCIReceive == 51U) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    Blinky_on_serial_B.In1_m = Blinky_on_serial_P.Constant2_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  } else if (Blinky_on_serial_B.SCIReceive == 52U) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    Blinky_on_serial_B.In1_p = Blinky_on_serial_P.Constant3_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    Blinky_on_serial_B.In1 = Blinky_on_serial_P.Constant4_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  }

  /* End of If: '<Root>/If' */

  /* S-Function (c280xgpio_do): '<Root>/LED1' */
  {
    if (Blinky_on_serial_B.In1_c)
      GpioDataRegs.GPASET.bit.GPIO0 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO0 = 1;
  }

  /* S-Function (c280xgpio_do): '<Root>/LED2' */
  {
    if (Blinky_on_serial_B.In1_g)
      GpioDataRegs.GPASET.bit.GPIO1 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO1 = 1;
  }

  /* S-Function (c280xgpio_do): '<Root>/LED3' */
  {
    if (Blinky_on_serial_B.In1_m)
      GpioDataRegs.GPASET.bit.GPIO2 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO2 = 1;
  }

  /* S-Function (c280xgpio_do): '<Root>/LED4' */
  {
    if (Blinky_on_serial_B.In1_p)
      GpioDataRegs.GPASET.bit.GPIO3 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO3 = 1;
  }

  /* S-Function (c280xgpio_do): '<Root>/LED5' */
  {
    if (Blinky_on_serial_B.In1)
      GpioDataRegs.GPASET.bit.GPIO0 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO0 = 1;
  }

  /* S-Function (c280xgpio_do): '<Root>/LED6' */
  {
    if (Blinky_on_serial_B.In1)
      GpioDataRegs.GPASET.bit.GPIO1 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO1 = 1;
  }

  /* S-Function (c280xgpio_do): '<Root>/LED7' */
  {
    if (Blinky_on_serial_B.In1)
      GpioDataRegs.GPASET.bit.GPIO2 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO2 = 1;
  }

  /* S-Function (c280xgpio_do): '<Root>/LED8' */
  {
    if (Blinky_on_serial_B.In1)
      GpioDataRegs.GPASET.bit.GPIO3 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO3 = 1;
  }
}

/* Model initialize function */
void Blinky_on_serial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Blinky_on_serial_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Blinky_on_serial_B), 0,
                sizeof(B_Blinky_on_serial_T));

  /* Start for S-Function (c28xsci_rx): '<Root>/SCI Receive' */

  /* Initialize Blinky_on_serial_B.SCIReceive */
  {
    Blinky_on_serial_B.SCIReceive = (uint8_T)0.0;
  }

  /* Start for S-Function (c280xgpio_do): '<Root>/LED1' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFFC;
  GpioCtrlRegs.GPADIR.all |= 0x1;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED2' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFF3;
  GpioCtrlRegs.GPADIR.all |= 0x2;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED3' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPADIR.all |= 0x4;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED4' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFF3F;
  GpioCtrlRegs.GPADIR.all |= 0x8;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED5' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFFC;
  GpioCtrlRegs.GPADIR.all |= 0x1;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED6' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFF3;
  GpioCtrlRegs.GPADIR.all |= 0x2;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED7' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPADIR.all |= 0x4;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED8' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFF3F;
  GpioCtrlRegs.GPADIR.all |= 0x8;
  EDIS;

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem' */
  /* SystemInitialize for Outport: '<S1>/Out1' */
  Blinky_on_serial_B.In1_c = Blinky_on_serial_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem1' */
  /* SystemInitialize for Outport: '<S2>/Out1' */
  Blinky_on_serial_B.In1_g = Blinky_on_serial_P.Out1_Y0_a;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem2' */
  /* SystemInitialize for Outport: '<S3>/Out1' */
  Blinky_on_serial_B.In1_m = Blinky_on_serial_P.Out1_Y0_d;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem3' */
  /* SystemInitialize for Outport: '<S4>/Out1' */
  Blinky_on_serial_B.In1_p = Blinky_on_serial_P.Out1_Y0_g;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem3' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem4' */
  /* SystemInitialize for Outport: '<S5>/Out1' */
  Blinky_on_serial_B.In1 = Blinky_on_serial_P.Out1_Y0_j;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem4' */
}

/* Model terminate function */
void Blinky_on_serial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
