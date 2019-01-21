/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ADC_LED_CAN.h
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

#ifndef RTW_HEADER_ADC_LED_CAN_h_
#define RTW_HEADER_ADC_LED_CAN_h_
#include <stddef.h>
#include <string.h>
#ifndef ADC_LED_CAN_COMMON_INCLUDES_
# define ADC_LED_CAN_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "F2837xD_device.h"
#include "F2837xD_Examples.h"
#include "F2837xD_gpio.h"
#include "can_message.h"
#endif                                 /* ADC_LED_CAN_COMMON_INCLUDES_ */

#include "ADC_LED_CAN_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void enable_interrupts(void);
extern void init_eCAN_B ( uint16_T bitRatePrescaler, uint16_T timeSeg1, uint16_T
  timeSeg2, uint16_T sbg, uint16_T sjw, uint16_T sam);

/* user code (top of export header file) */
#include "can_message.h"
#include "can_message.h"

/* Block signals (auto storage) */
typedef struct {
  uint32_T Product2;                   /* '<Root>/Product2' */
  uint16_T ADCINA0;                    /* '<Root>/ADCINA0' */
  uint16_T Compare;                    /* '<S2>/Compare' */
  uint16_T Compare_d;                  /* '<S1>/Compare' */
} B_ADC_LED_CAN_T;

/* Parameters (auto storage) */
struct P_ADC_LED_CAN_T_ {
  uint16_T Samplelessthanmidvalue_const;/* Mask Parameter: Samplelessthanmidvalue_const
                                         * Referenced by: '<S2>/Constant'
                                         */
  uint16_T Samplegreaterthanmidvalue_const;/* Mask Parameter: Samplegreaterthanmidvalue_const
                                            * Referenced by: '<S1>/Constant'
                                            */
  uint32_T CAN_MSGBLUELED_Value;       /* Computed Parameter: CAN_MSGBLUELED_Value
                                        * Referenced by: '<Root>/CAN_MSG  BLUE LED'
                                        */
  uint32_T CAN_MSGREDLED_Value;        /* Computed Parameter: CAN_MSGREDLED_Value
                                        * Referenced by: '<Root>/CAN_MSG  RED LED'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ADC_LED_CAN_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_ADC_LED_CAN_T ADC_LED_CAN_P;

/* Block signals (auto storage) */
extern B_ADC_LED_CAN_T ADC_LED_CAN_B;

/* Model entry point functions */
extern void ADC_LED_CAN_initialize(void);
extern void ADC_LED_CAN_step(void);
extern void ADC_LED_CAN_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ADC_LED_CAN_T *const ADC_LED_CAN_M;

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
 * '<Root>' : 'ADC_LED_CAN'
 * '<S1>'   : 'ADC_LED_CAN/Sample greater than mid-value'
 * '<S2>'   : 'ADC_LED_CAN/Sample less than mid-value'
 */
#endif                                 /* RTW_HEADER_ADC_LED_CAN_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
