/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Trial2.h
 *
 * Code generated for Simulink model 'Trial2'.
 *
 * Model version                  : 1.120
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 19 12:53:45 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Trial2_h_
#define RTW_HEADER_Trial2_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef Trial2_COMMON_INCLUDES_
# define Trial2_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "F2837xS_device.h"
#include "F2837xS_Examples.h"
#include "IQmathLib.h"
#include "can_message.h"
#endif                                 /* Trial2_COMMON_INCLUDES_ */

#include "Trial2_types.h"
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
  uint16_T ADCINA3VoutFB;              /* '<S1>/ADCINA3 - Vout F//B' */
  uint16_T ADCINB3VinFB;               /* '<S1>/ADCINB3 - Vin F//B' */
  uint16_T y;                          /* '<S1>/Control Loop' */
  uint16_T Vin_Gain;                   /* '<S1>/Vin_Gain' */
} B_Trial2_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint16_T result;                     /* '<S1>/Control Loop' */
} DW_Trial2_T;

/* Parameters (auto storage) */
struct P_Trial2_T_ {
  real_T Vout_Ref_Value;               /* Expression: 2.0
                                        * Referenced by: '<S1>/Vout_Ref'
                                        */
  real_T AnalogGain_Gain;              /* Expression: 0.001
                                        * Referenced by: '<S1>/Analog Gain'
                                        */
  real_T Vin_Gain_Gain;                /* Expression: 2.31
                                        * Referenced by: '<S1>/Vin_Gain'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Trial2_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Trial2_T Trial2_P;

/* Block signals (auto storage) */
extern B_Trial2_T Trial2_B;

/* Block states (auto storage) */
extern DW_Trial2_T Trial2_DW;

/* Model entry point functions */
extern void Trial2_initialize(void);
extern void Trial2_step(void);
extern void Trial2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Trial2_T *const Trial2_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Vout_Gain' : Unused code path elimination
 */

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
 * '<Root>' : 'Trial2'
 * '<S1>'   : 'Trial2/Subsystem'
 * '<S2>'   : 'Trial2/Subsystem/Control Loop'
 */
#endif                                 /* RTW_HEADER_Trial2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
