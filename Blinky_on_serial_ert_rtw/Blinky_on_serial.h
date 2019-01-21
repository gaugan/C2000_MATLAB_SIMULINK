/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Blinky_on_serial.h
 *
 * Code generated for Simulink model 'Blinky_on_serial'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Feb 02 15:23:36 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Blinky_on_serial_h_
#define RTW_HEADER_Blinky_on_serial_h_
#include <stddef.h>
#include <string.h>
#ifndef Blinky_on_serial_COMMON_INCLUDES_
# define Blinky_on_serial_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "F2802x_Device.h"
#include "DSP28xx_SciUtil.h"
#include "F2802x_Gpio.h"
#endif                                 /* Blinky_on_serial_COMMON_INCLUDES_ */

#include "Blinky_on_serial_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void enable_interrupts(void);
extern void init_SCI(void);
extern void init_SCI_GPIO(void);

/* Block signals (auto storage) */
typedef struct {
  uint16_T SCIReceive;                 /* '<Root>/SCI Receive' */
  boolean_T In1;                       /* '<S5>/In1' */
  boolean_T In1_p;                     /* '<S4>/In1' */
  boolean_T In1_m;                     /* '<S3>/In1' */
  boolean_T In1_g;                     /* '<S2>/In1' */
  boolean_T In1_c;                     /* '<S1>/In1' */
} B_Blinky_on_serial_T;

/* Parameters (auto storage) */
struct P_Blinky_on_serial_T_ {
  boolean_T Out1_Y0;                   /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S1>/Out1'
                                        */
  boolean_T Out1_Y0_a;                 /* Computed Parameter: Out1_Y0_a
                                        * Referenced by: '<S2>/Out1'
                                        */
  boolean_T Out1_Y0_d;                 /* Computed Parameter: Out1_Y0_d
                                        * Referenced by: '<S3>/Out1'
                                        */
  boolean_T Out1_Y0_g;                 /* Computed Parameter: Out1_Y0_g
                                        * Referenced by: '<S4>/Out1'
                                        */
  boolean_T Out1_Y0_j;                 /* Computed Parameter: Out1_Y0_j
                                        * Referenced by: '<S5>/Out1'
                                        */
  boolean_T Constant4_Value;           /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<Root>/Constant4'
                                        */
  boolean_T Constant3_Value;           /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<Root>/Constant3'
                                        */
  boolean_T Constant2_Value;           /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Blinky_on_serial_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Blinky_on_serial_T Blinky_on_serial_P;

/* Block signals (auto storage) */
extern B_Blinky_on_serial_T Blinky_on_serial_B;

/* Model entry point functions */
extern void Blinky_on_serial_initialize(void);
extern void Blinky_on_serial_step(void);
extern void Blinky_on_serial_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Blinky_on_serial_T *const Blinky_on_serial_M;

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
 * '<Root>' : 'Blinky_on_serial'
 * '<S1>'   : 'Blinky_on_serial/If Action Subsystem'
 * '<S2>'   : 'Blinky_on_serial/If Action Subsystem1'
 * '<S3>'   : 'Blinky_on_serial/If Action Subsystem2'
 * '<S4>'   : 'Blinky_on_serial/If Action Subsystem3'
 * '<S5>'   : 'Blinky_on_serial/If Action Subsystem4'
 * '<S6>'   : 'Blinky_on_serial/If Action Subsystem5'
 * '<S7>'   : 'Blinky_on_serial/If Action Subsystem6'
 * '<S8>'   : 'Blinky_on_serial/Subsystem'
 * '<S9>'   : 'Blinky_on_serial/Subsystem1'
 */
#endif                                 /* RTW_HEADER_Blinky_on_serial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
