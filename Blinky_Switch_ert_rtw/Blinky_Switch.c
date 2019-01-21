/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Blinky_Switch.c
 *
 * Code generated for Simulink model 'Blinky_Switch'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Feb 02 15:59:29 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Blinky_Switch.h"
#include "Blinky_Switch_private.h"

/* Block signals (auto storage) */
B_Blinky_Switch_T Blinky_Switch_B;

/* Real-time model */
RT_MODEL_Blinky_Switch_T Blinky_Switch_M_;
RT_MODEL_Blinky_Switch_T *const Blinky_Switch_M = &Blinky_Switch_M_;

/* Model step function */
void Blinky_Switch_step(void)
{
  /* S-Function (c280xgpio_di): '<Root>/Digital Input' */
  {
    Blinky_Switch_B.DigitalInput = GpioDataRegs.GPADAT.bit.GPIO12;
  }

  /* Outputs for Enabled SubSystem: '<Root>/LED OFF' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S3>/Constant3'
   */
  if (Blinky_Switch_B.DigitalInput == Blinky_Switch_P.CompareToConstant_const) {
    /* S-Function (c280xgpio_do): '<S3>/LED1' */
    {
      if (Blinky_Switch_P.Constant_Value)
        GpioDataRegs.GPASET.bit.GPIO0 = 1;
      else
        GpioDataRegs.GPACLEAR.bit.GPIO0 = 1;
    }

    /* S-Function (c280xgpio_do): '<S3>/LED2' */
    {
      if (Blinky_Switch_P.Constant1_Value)
        GpioDataRegs.GPASET.bit.GPIO1 = 1;
      else
        GpioDataRegs.GPACLEAR.bit.GPIO1 = 1;
    }

    /* S-Function (c280xgpio_do): '<S3>/LED3' */
    {
      if (Blinky_Switch_P.Constant2_Value)
        GpioDataRegs.GPASET.bit.GPIO2 = 1;
      else
        GpioDataRegs.GPACLEAR.bit.GPIO2 = 1;
    }

    /* S-Function (c280xgpio_do): '<S3>/LED4' */
    {
      if (Blinky_Switch_P.Constant3_Value)
        GpioDataRegs.GPASET.bit.GPIO3 = 1;
      else
        GpioDataRegs.GPACLEAR.bit.GPIO3 = 1;
    }
  }

  /* End of RelationalOperator: '<S1>/Compare' */
  /* End of Outputs for SubSystem: '<Root>/LED OFF' */

  /* Outputs for Enabled SubSystem: '<Root>/LED ON' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S4>/Constant4'
   *  Constant: '<S4>/Constant5'
   *  Constant: '<S4>/Constant6'
   *  Constant: '<S4>/Constant7'
   */
  if (Blinky_Switch_B.DigitalInput == Blinky_Switch_P.CompareToConstant1_const)
  {
    /* S-Function (c280xgpio_do): '<S4>/LED5' */
    {
      if (Blinky_Switch_P.Constant4_Value)
        GpioDataRegs.GPASET.bit.GPIO0 = 1;
      else
        GpioDataRegs.GPACLEAR.bit.GPIO0 = 1;
    }

    /* S-Function (c280xgpio_do): '<S4>/LED6' */
    {
      if (Blinky_Switch_P.Constant5_Value)
        GpioDataRegs.GPASET.bit.GPIO1 = 1;
      else
        GpioDataRegs.GPACLEAR.bit.GPIO1 = 1;
    }

    /* S-Function (c280xgpio_do): '<S4>/LED7' */
    {
      if (Blinky_Switch_P.Constant6_Value)
        GpioDataRegs.GPASET.bit.GPIO2 = 1;
      else
        GpioDataRegs.GPACLEAR.bit.GPIO2 = 1;
    }

    /* S-Function (c280xgpio_do): '<S4>/LED8' */
    {
      if (Blinky_Switch_P.Constant7_Value)
        GpioDataRegs.GPASET.bit.GPIO3 = 1;
      else
        GpioDataRegs.GPACLEAR.bit.GPIO3 = 1;
    }
  }

  /* End of RelationalOperator: '<S2>/Compare' */
  /* End of Outputs for SubSystem: '<Root>/LED ON' */
}

/* Model initialize function */
void Blinky_Switch_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Blinky_Switch_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Blinky_Switch_B), 0,
                sizeof(B_Blinky_Switch_T));

  /* Start for S-Function (c280xgpio_di): '<Root>/Digital Input' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFCFFFFFF;
  GpioCtrlRegs.GPADIR.all &= 0xFFFFEFFF;
  EDIS;

  /* Start for Enabled SubSystem: '<Root>/LED OFF' */

  /* Start for S-Function (c280xgpio_do): '<S3>/LED1' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFFC;
  GpioCtrlRegs.GPADIR.all |= 0x1;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<S3>/LED2' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFF3;
  GpioCtrlRegs.GPADIR.all |= 0x2;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<S3>/LED3' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPADIR.all |= 0x4;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<S3>/LED4' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFF3F;
  GpioCtrlRegs.GPADIR.all |= 0x8;
  EDIS;

  /* End of Start for SubSystem: '<Root>/LED OFF' */

  /* Start for Enabled SubSystem: '<Root>/LED ON' */

  /* Start for S-Function (c280xgpio_do): '<S4>/LED5' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFFC;
  GpioCtrlRegs.GPADIR.all |= 0x1;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<S4>/LED6' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFF3;
  GpioCtrlRegs.GPADIR.all |= 0x2;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<S4>/LED7' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPADIR.all |= 0x4;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<S4>/LED8' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFF3F;
  GpioCtrlRegs.GPADIR.all |= 0x8;
  EDIS;

  /* End of Start for SubSystem: '<Root>/LED ON' */
}

/* Model terminate function */
void Blinky_Switch_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
