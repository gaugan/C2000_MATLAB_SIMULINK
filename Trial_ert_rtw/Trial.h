/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Trial.h
 *
 * Code generated for Simulink model 'Trial'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 12 13:07:16 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Trial_h_
#define RTW_HEADER_Trial_h_
#include <stddef.h>
#ifndef Trial_COMMON_INCLUDES_
# define Trial_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "F2837xS_device.h"
#include "F2837xS_Examples.h"
#include "IQmathLib.h"
#endif                                 /* Trial_COMMON_INCLUDES_ */

#include "Trial_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void enable_interrupts(void);
extern void config_ePWM_GPIO (void);

/* Parameters (auto storage) */
struct P_Trial_T_ {
  uint16_T Duty_Value;                 /* Computed Parameter: Duty_Value
                                        * Referenced by: '<Root>/Duty'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Trial_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Trial_T Trial_P;

/* Model entry point functions */
extern void Trial_initialize(void);
extern void Trial_step(void);
extern void Trial_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Trial_T *const Trial_M;

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
 * '<Root>' : 'Trial'
 */
#endif                                 /* RTW_HEADER_Trial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
