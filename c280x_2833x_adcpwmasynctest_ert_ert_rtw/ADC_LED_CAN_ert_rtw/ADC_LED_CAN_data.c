/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ADC_LED_CAN_data.c
 *
 * Code generated for Simulink model 'ADC_LED_CAN'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Sep 23 15:46:02 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ADC_LED_CAN.h"
#include "ADC_LED_CAN_private.h"

/* Block parameters (auto storage) */
P_ADC_LED_CAN_T ADC_LED_CAN_P = {
  2048U,                               /* Mask Parameter: Samplelessthanmidvalue_const
                                        * Referenced by: '<S2>/Constant'
                                        */
  2048U,                               /* Mask Parameter: Samplegreaterthanmidvalue_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  234U,                                /* Computed Parameter: CAN_MSGBLUELED_Value
                                        * Referenced by: '<Root>/CAN_MSG  BLUE LED'
                                        */
  468U                                 /* Computed Parameter: CAN_MSGREDLED_Value
                                        * Referenced by: '<Root>/CAN_MSG  RED LED'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
