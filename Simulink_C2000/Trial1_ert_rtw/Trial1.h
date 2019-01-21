/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Trial1.h
 *
 * Code generated for Simulink model 'Trial1'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Jan 13 12:31:02 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Trial1_h_
#define RTW_HEADER_Trial1_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef Trial1_COMMON_INCLUDES_
# define Trial1_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "F2837xS_device.h"
#include "F2837xS_Examples.h"
#include "can_message.h"
#include "IQmathLib.h"
#endif                                 /* Trial1_COMMON_INCLUDES_ */

#include "Trial1_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void enable_interrupts(void);
extern void init_eCAN_A ( uint16_T bitRatePrescaler, uint16_T timeSeg1, uint16_T
  timeSeg2, uint16_T sbg, uint16_T sjw, uint16_T sam);
extern void config_ePWM_GPIO (void);

/* user code (top of export header file) */
#include "can_message.h"
#include "can_message.h"

/* Block signals (auto storage) */
typedef struct {
  uint16_T ADCINA3VoutFB;              /* '<Root>/ADCINA3 - Vout F//B' */
  uint16_T ADCINB3VinFB;               /* '<Root>/ADCINB3 - Vin F//B' */
  uint16_T Vin_Gain;                   /* '<Root>/Vin_Gain' */
} B_Trial1_T;

/* Parameters (auto storage) */
struct P_Trial1_T_ {
  real_T Vout_Gain_Gain;               /* Expression: 1
                                        * Referenced by: '<Root>/Vout_Gain'
                                        */
  real_T Vin_Gain_Gain;                /* Expression: 1
                                        * Referenced by: '<Root>/Vin_Gain'
                                        */
  real_T Vout_Set_Value;               /* Expression: 2.0
                                        * Referenced by: '<Root>/Vout_Set'
                                        */
  real_T Gain_Gain;                    /* Expression: -28.57
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 246.09
                                        * Referenced by: '<S1>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Trial1_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Trial1_T Trial1_P;

/* Block signals (auto storage) */
extern B_Trial1_T Trial1_B;

/* Model entry point functions */
extern void Trial1_initialize(void);
extern void Trial1_step(void);
extern void Trial1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Trial1_T *const Trial1_M;

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
 * '<Root>' : 'Trial1'
 * '<S1>'   : 'Trial1/Duty Value  Generation'
 */
#endif                                 /* RTW_HEADER_Trial1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
