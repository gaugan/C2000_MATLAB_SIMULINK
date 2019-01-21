/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Blinky_ePWM_eCAP.h
 *
 * Code generated for Simulink model 'Blinky_ePWM_eCAP'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Feb 08 21:45:17 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Blinky_ePWM_eCAP_h_
#define RTW_HEADER_Blinky_ePWM_eCAP_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef Blinky_ePWM_eCAP_COMMON_INCLUDES_
# define Blinky_ePWM_eCAP_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "F2806x_Device.h"
#include "F2806x_Gpio.h"
#include "can_message.h"
#include "F2806x_Examples.h"
#include "IQmathLib.h"
#endif                                 /* Blinky_ePWM_eCAP_COMMON_INCLUDES_ */

#include "Blinky_ePWM_eCAP_types.h"
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
extern void init_CAP_GPIO();
extern void init_CAP1();
extern void config_ePWM_GPIO (void);

/* user code (top of export header file) */
#include "can_message.h"
#include "can_message.h"

/* Block signals (auto storage) */
typedef struct {
  uint32_T eCAP;                       /* '<Root>/eCAP' */
  uint32_T Gain;                       /* '<S1>/Gain' */
} B_Blinky_ePWM_eCAP_T;

/* Parameters (auto storage) */
struct P_Blinky_ePWM_eCAP_T_ {
  real_T Gain_Gain;                    /* Expression: 90000000
                                        * Referenced by: '<S1>/Gain'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Blinky_ePWM_eCAP_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Blinky_ePWM_eCAP_T Blinky_ePWM_eCAP_P;

/* Block signals (auto storage) */
extern B_Blinky_ePWM_eCAP_T Blinky_ePWM_eCAP_B;

/* Model entry point functions */
extern void Blinky_ePWM_eCAP_initialize(void);
extern void Blinky_ePWM_eCAP_step(void);
extern void Blinky_ePWM_eCAP_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Blinky_ePWM_eCAP_T *const Blinky_ePWM_eCAP_M;

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
 * '<Root>' : 'Blinky_ePWM_eCAP'
 * '<S1>'   : 'Blinky_ePWM_eCAP/Converter'
 */
#endif                                 /* RTW_HEADER_Blinky_ePWM_eCAP_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
