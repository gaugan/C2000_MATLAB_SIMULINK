/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Basic_Test.h
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

#ifndef RTW_HEADER_Basic_Test_h_
#define RTW_HEADER_Basic_Test_h_
#include <stddef.h>
#include <string.h>
#ifndef Basic_Test_COMMON_INCLUDES_
# define Basic_Test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_led_lct.h"
#endif                                 /* Basic_Test_COMMON_INCLUDES_ */

#include "Basic_Test_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
} DW_Basic_Test_T;

/* Parameters (auto storage) */
struct P_Basic_Test_T_ {
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  uint8_T LED_p1[22];                  /* Expression: deviceFile
                                        * Referenced by: '<Root>/LED'
                                        */
  uint8_T LED1_p1[22];                 /* Expression: deviceFile
                                        * Referenced by: '<Root>/LED1'
                                        */
  uint8_T LED2_p1[22];                 /* Expression: deviceFile
                                        * Referenced by: '<Root>/LED2'
                                        */
  uint8_T LED3_p1[22];                 /* Expression: deviceFile
                                        * Referenced by: '<Root>/LED3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Basic_Test_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Basic_Test_T Basic_Test_P;

/* Block states (auto storage) */
extern DW_Basic_Test_T Basic_Test_DW;

/* Model entry point functions */
extern void Basic_Test_initialize(void);
extern void Basic_Test_step(void);
extern void Basic_Test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Basic_Test_T *const Basic_Test_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Basic_Test'
 */
#endif                                 /* RTW_HEADER_Basic_Test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
