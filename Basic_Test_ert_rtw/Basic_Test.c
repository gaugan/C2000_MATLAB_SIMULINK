/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Basic_Test.c
 *
 * Code generated for Simulink model 'Basic_Test'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Feb 21 12:21:13 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Basic_Test.h"
#include "Basic_Test_private.h"

/* Block states (auto storage) */
DW_Basic_Test_T Basic_Test_DW;

/* Real-time model */
RT_MODEL_Basic_Test_T Basic_Test_M_;
RT_MODEL_Basic_Test_T *const Basic_Test_M = &Basic_Test_M_;

/* Model step function */
void Basic_Test_step(void)
{
  real_T rtb_PulseGenerator;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (Basic_Test_DW.clockTickCounter <
                        Basic_Test_P.PulseGenerator_Duty) &&
    (Basic_Test_DW.clockTickCounter >= 0) ? Basic_Test_P.PulseGenerator_Amp :
    0.0;
  if (Basic_Test_DW.clockTickCounter >= Basic_Test_P.PulseGenerator_Period - 1.0)
  {
    Basic_Test_DW.clockTickCounter = 0;
  } else {
    Basic_Test_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  MW_ledWrite(Basic_Test_P.LED_p1, rtb_PulseGenerator != 0.0);

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  MW_ledWrite(Basic_Test_P.LED1_p1, rtb_PulseGenerator != 0.0);

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  MW_ledWrite(Basic_Test_P.LED2_p1, rtb_PulseGenerator != 0.0);

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED3' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  MW_ledWrite(Basic_Test_P.LED3_p1, rtb_PulseGenerator != 0.0);
}

/* Model initialize function */
void Basic_Test_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Basic_Test_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Basic_Test_DW, 0,
                sizeof(DW_Basic_Test_T));

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  Basic_Test_DW.clockTickCounter = 0;

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED' */
  MW_ledInit(Basic_Test_P.LED_p1);

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED1' */
  MW_ledInit(Basic_Test_P.LED1_p1);

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED2' */
  MW_ledInit(Basic_Test_P.LED2_p1);

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED3' */
  MW_ledInit(Basic_Test_P.LED3_p1);
}

/* Model terminate function */
void Basic_Test_terminate(void)
{
  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED' */
  MW_ledTerminate(Basic_Test_P.LED_p1);

  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED1' */
  MW_ledTerminate(Basic_Test_P.LED1_p1);

  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED2' */
  MW_ledTerminate(Basic_Test_P.LED2_p1);

  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED3' */
  MW_ledTerminate(Basic_Test_P.LED3_p1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
