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
 * C/C++ source code generated on : Thu Feb 16 19:21:57 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED' incorporates:
   *  Constant: '<Root>/Constant'
   */
  MW_ledWrite(untitled_P.LED_p1, untitled_P.Constant_Value);

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  MW_ledWrite(untitled_P.LED1_p1, untitled_P.Constant_Value);

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED2' incorporates:
   *  Constant: '<Root>/Constant'
   */
  MW_ledWrite(untitled_P.LED2_p1, untitled_P.Constant_Value);

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED3' incorporates:
   *  Constant: '<Root>/Constant'
   */
  MW_ledWrite(untitled_P.LED3_p1, untitled_P.Constant_Value);
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED' */
  MW_ledInit(untitled_P.LED_p1);

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED1' */
  MW_ledInit(untitled_P.LED1_p1);

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED2' */
  MW_ledInit(untitled_P.LED2_p1);

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED3' */
  MW_ledInit(untitled_P.LED3_p1);
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED' */
  MW_ledTerminate(untitled_P.LED_p1);

  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED1' */
  MW_ledTerminate(untitled_P.LED1_p1);

  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED2' */
  MW_ledTerminate(untitled_P.LED2_p1);

  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED3' */
  MW_ledTerminate(untitled_P.LED3_p1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
