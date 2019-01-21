/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ADC_Blinky_Test_data.c
 *
 * Code generated for Simulink model 'ADC_Blinky_Test'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Feb 22 17:05:00 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ADC_Blinky_Test.h"
#include "ADC_Blinky_Test_private.h"

/* Block parameters (auto storage) */
P_ADC_Blinky_Test_T ADC_Blinky_Test_P = {
  1.0,                                 /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  1.0,                                 /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S2>/Constant'
                                        */
  0U,                                  /* Computed Parameter: AnalogInput_p1
                                        * Referenced by: '<Root>/Analog Input'
                                        */

  /*  Expression: deviceFile
   * Referenced by: '<Root>/LED'
   */
  { 98U, 101U, 97U, 103U, 108U, 101U, 98U, 111U, 110U, 101U, 58U, 103U, 114U,
    101U, 101U, 110U, 58U, 117U, 115U, 114U, 48U, 0U },

  /*  Expression: deviceFile
   * Referenced by: '<Root>/LED1'
   */
  { 98U, 101U, 97U, 103U, 108U, 101U, 98U, 111U, 110U, 101U, 58U, 103U, 114U,
    101U, 101U, 110U, 58U, 117U, 115U, 114U, 49U, 0U },

  /*  Expression: deviceFile
   * Referenced by: '<Root>/LED2'
   */
  { 98U, 101U, 97U, 103U, 108U, 101U, 98U, 111U, 110U, 101U, 58U, 103U, 114U,
    101U, 101U, 110U, 58U, 117U, 115U, 114U, 50U, 0U },

  /*  Expression: deviceFile
   * Referenced by: '<Root>/LED3'
   */
  { 98U, 101U, 97U, 103U, 108U, 101U, 98U, 111U, 110U, 101U, 58U, 103U, 114U,
    101U, 101U, 110U, 58U, 117U, 115U, 114U, 51U, 0U },

  /* Start of '<Root>/Subsystem1' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S4>/Pulse Generator'
                                        */
    2.0,                               /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S4>/Pulse Generator'
                                        */
    1.0,                               /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S4>/Pulse Generator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S4>/Pulse Generator'
                                        */
    0                                  /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S4>/Out1'
                                        */
  }
  /* End of '<Root>/Subsystem1' */
  ,

  /* Start of '<Root>/Subsystem' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
    2.0,                               /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
    1.0,                               /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
    0                                  /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S3>/Out1'
                                        */
  }
  /* End of '<Root>/Subsystem' */
};

/* Constant parameters (auto storage) */
const ConstP_ADC_Blinky_Test_T ADC_Blinky_Test_ConstP = {
  /* Expression: devName
   * Referenced by: '<Root>/V4L2 Video Capture'
   */
  { 47U, 100U, 101U, 118U, 47U, 118U, 105U, 100U, 101U, 111U, 48U, 0U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
