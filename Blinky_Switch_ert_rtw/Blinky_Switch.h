/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Blinky_Switch.h
 *
 * Code generated for Simulink model 'Blinky_Switch'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Feb 02 15:59:29 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Blinky_Switch_h_
#define RTW_HEADER_Blinky_Switch_h_
#include <stddef.h>
#include <string.h>
#ifndef Blinky_Switch_COMMON_INCLUDES_
# define Blinky_Switch_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "F2802x_Device.h"
#include "F2802x_Gpio.h"
#endif                                 /* Blinky_Switch_COMMON_INCLUDES_ */

#include "Blinky_Switch_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void enable_interrupts(void);

/* Block signals (auto storage) */
typedef struct {
  boolean_T DigitalInput;              /* '<Root>/Digital Input' */
} B_Blinky_Switch_T;

/* Parameters (auto storage) */
struct P_Blinky_Switch_T_ {
  boolean_T CompareToConstant_const;   /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  boolean_T CompareToConstant1_const;  /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S2>/Constant'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S3>/Constant'
                                        */
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S3>/Constant1'
                                        */
  boolean_T Constant2_Value;           /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S3>/Constant2'
                                        */
  boolean_T Constant3_Value;           /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S3>/Constant3'
                                        */
  boolean_T Constant4_Value;           /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S4>/Constant4'
                                        */
  boolean_T Constant5_Value;           /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S4>/Constant5'
                                        */
  boolean_T Constant6_Value;           /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S4>/Constant6'
                                        */
  boolean_T Constant7_Value;           /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S4>/Constant7'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Blinky_Switch_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Blinky_Switch_T Blinky_Switch_P;

/* Block signals (auto storage) */
extern B_Blinky_Switch_T Blinky_Switch_B;

/* Model entry point functions */
extern void Blinky_Switch_initialize(void);
extern void Blinky_Switch_step(void);
extern void Blinky_Switch_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Blinky_Switch_T *const Blinky_Switch_M;

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
 * '<Root>' : 'Blinky_Switch'
 * '<S1>'   : 'Blinky_Switch/Compare To Constant'
 * '<S2>'   : 'Blinky_Switch/Compare To Constant1'
 * '<S3>'   : 'Blinky_Switch/LED OFF'
 * '<S4>'   : 'Blinky_Switch/LED ON'
 */
#endif                                 /* RTW_HEADER_Blinky_Switch_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
