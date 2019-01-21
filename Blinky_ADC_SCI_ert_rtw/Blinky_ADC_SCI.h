/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Blinky_ADC_SCI.h
 *
 * Code generated for Simulink model 'Blinky_ADC_SCI'.
 *
 * Model version                  : 1.22
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Feb 06 22:59:39 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Blinky_ADC_SCI_h_
#define RTW_HEADER_Blinky_ADC_SCI_h_
#include <stddef.h>
#include <string.h>
#ifndef Blinky_ADC_SCI_COMMON_INCLUDES_
# define Blinky_ADC_SCI_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "F2802x_Device.h"
#include "f2802x_examples.h"
#include "F2802x_Gpio.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* Blinky_ADC_SCI_COMMON_INCLUDES_ */

#include "Blinky_ADC_SCI_types.h"
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
  uint32_T TmpSignalConversionAtSCITransmi[2];
  uint16_T ADC;                        /* '<Root>/ADC' */
  uint16_T Compare;                    /* '<S2>/Compare' */
  uint16_T Compare_i;                  /* '<S1>/Compare' */
} B_Blinky_ADC_SCI_T;

/* Parameters (auto storage) */
struct P_Blinky_ADC_SCI_T_ {
  uint16_T Samplelessthanmidvalue_const;/* Mask Parameter: Samplelessthanmidvalue_const
                                         * Referenced by: '<S2>/Constant'
                                         */
  uint16_T Samplegreaterthanmidvalue_const;/* Mask Parameter: Samplegreaterthanmidvalue_const
                                            * Referenced by: '<S1>/Constant'
                                            */
  uint32_T DisplayL_Value;             /* Computed Parameter: DisplayL_Value
                                        * Referenced by: '<Root>/Display  'L''
                                        */
  uint32_T DisplayM_Value;             /* Computed Parameter: DisplayM_Value
                                        * Referenced by: '<Root>/Display  'M''
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Blinky_ADC_SCI_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Blinky_ADC_SCI_T Blinky_ADC_SCI_P;

/* Block signals (auto storage) */
extern B_Blinky_ADC_SCI_T Blinky_ADC_SCI_B;

/* Model entry point functions */
extern void Blinky_ADC_SCI_initialize(void);
extern void Blinky_ADC_SCI_step(void);
extern void Blinky_ADC_SCI_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Blinky_ADC_SCI_T *const Blinky_ADC_SCI_M;

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
 * '<Root>' : 'Blinky_ADC_SCI'
 * '<S1>'   : 'Blinky_ADC_SCI/Sample greater than mid-value'
 * '<S2>'   : 'Blinky_ADC_SCI/Sample less than mid-value'
 */
#endif                                 /* RTW_HEADER_Blinky_ADC_SCI_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
