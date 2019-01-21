/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Blinky.h
 *
 * Code generated for Simulink model 'Blinky'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Feb 02 11:55:10 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Blinky_h_
#define RTW_HEADER_Blinky_h_
#include <string.h>
#include <stddef.h>
#ifndef Blinky_COMMON_INCLUDES_
# define Blinky_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "F2802x_Device.h"
#include "F2802x_Gpio.h"
#endif                                 /* Blinky_COMMON_INCLUDES_ */

#include "Blinky_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

extern void enable_interrupts(void);

/* Parameters (auto storage) */
struct P_Blinky_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Blinky_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[5];
    } TaskCounters;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Blinky_T Blinky_P;

/* External function called from main */
extern void Blinky_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void Blinky_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void Blinky_initialize(void);
extern void Blinky_step0(void);
extern void Blinky_step1(void);
extern void Blinky_step2(void);
extern void Blinky_step3(void);
extern void Blinky_step4(void);
extern void Blinky_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Blinky_T *const Blinky_M;

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
 * '<Root>' : 'Blinky'
 */
#endif                                 /* RTW_HEADER_Blinky_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
