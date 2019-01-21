/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Trial2_data.c
 *
 * Code generated for Simulink model 'Trial2'.
 *
 * Model version                  : 1.27
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Jan 13 17:26:47 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Trial2.h"
#include "Trial2_private.h"

/* Block parameters (auto storage) */
P_Trial2_T Trial2_P = {
  10.0,                                /* Mask Parameter: PIController_I
                                        * Referenced by: '<S1>/Integral Gain'
                                        */
  140.0,                               /* Mask Parameter: PIController_LowerSaturationLim
                                        * Referenced by: '<S1>/Saturate'
                                        */
  50.0,                                /* Mask Parameter: PIController_P
                                        * Referenced by: '<S1>/Proportional Gain'
                                        */
  200.0,                               /* Mask Parameter: PIController_UpperSaturationLim
                                        * Referenced by: '<S1>/Saturate'
                                        */
  2.0,                                 /* Expression: 2.0
                                        * Referenced by: '<Root>/Vout_Ref'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Vout_Gain'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<Root>/Analog Gain'
                                        */
  0.5,                                 /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S1>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S1>/Integrator'
                                        */
  2.31                                 /* Expression: 2.31
                                        * Referenced by: '<Root>/Vin_Gain'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
