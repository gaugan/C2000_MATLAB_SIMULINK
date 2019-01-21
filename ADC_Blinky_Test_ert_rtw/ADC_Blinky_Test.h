/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ADC_Blinky_Test.h
 *
 * Code generated for Simulink model 'ADC_Blinky_Test'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Feb 22 17:05:00 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ADC_Blinky_Test_h_
#define RTW_HEADER_ADC_Blinky_Test_h_
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef ADC_Blinky_Test_COMMON_INCLUDES_
# define ADC_Blinky_Test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_analogInput_lct.h"
#include "MW_led_lct.h"
#include "armcortexa_v4l2_capture.h"
#include "armcortexa_sdl_video_display.h"
#endif                                 /* ADC_Blinky_Test_COMMON_INCLUDES_ */

#include "ADC_Blinky_Test_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals for system '<Root>/Subsystem' */
typedef struct {
  boolean_T DataTypeConversion;        /* '<S3>/Data Type Conversion' */
} B_Subsystem_ADC_Blinky_Test_T;

/* Block states (auto storage) for system '<Root>/Subsystem' */
typedef struct {
  int32_T clockTickCounter;            /* '<S3>/Pulse Generator' */
  int8_T Subsystem_SubsysRanBC;        /* '<Root>/Subsystem' */
} DW_Subsystem_ADC_Blinky_Test_T;

/* Block signals (auto storage) */
typedef struct {
  uint8_T V4L2VideoCapture_o1[76800];  /* '<Root>/V4L2 Video Capture' */
  uint8_T V4L2VideoCapture_o2[76800];  /* '<Root>/V4L2 Video Capture' */
  uint8_T V4L2VideoCapture_o3[76800];  /* '<Root>/V4L2 Video Capture' */
  uint8_T uv0[76800];
  uint8_T uv1[76800];
  uint8_T uv2[76800];
  B_Subsystem_ADC_Blinky_Test_T Subsystem1;/* '<Root>/Subsystem1' */
  B_Subsystem_ADC_Blinky_Test_T Subsystem;/* '<Root>/Subsystem' */
} B_ADC_Blinky_Test_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  DW_Subsystem_ADC_Blinky_Test_T Subsystem1;/* '<Root>/Subsystem1' */
  DW_Subsystem_ADC_Blinky_Test_T Subsystem;/* '<Root>/Subsystem' */
} DW_ADC_Blinky_Test_T;

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: devName
   * Referenced by: '<Root>/V4L2 Video Capture'
   */
  uint8_T V4L2VideoCapture_p1[12];
} ConstP_ADC_Blinky_Test_T;

/* Parameters for system: '<Root>/Subsystem' */
struct P_Subsystem_ADC_Blinky_Test_T_ {
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
  boolean_T Out1_Y0;                   /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S3>/Out1'
                                        */
};

/* Parameters (auto storage) */
struct P_ADC_Blinky_Test_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S2>/Constant'
                                        */
  uint32_T AnalogInput_p1;             /* Computed Parameter: AnalogInput_p1
                                        * Referenced by: '<Root>/Analog Input'
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
  P_Subsystem_ADC_Blinky_Test_T Subsystem1;/* '<Root>/Subsystem1' */
  P_Subsystem_ADC_Blinky_Test_T Subsystem;/* '<Root>/Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_ADC_Blinky_Test_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_ADC_Blinky_Test_T ADC_Blinky_Test_P;

/* Block signals (auto storage) */
extern B_ADC_Blinky_Test_T ADC_Blinky_Test_B;

/* Block states (auto storage) */
extern DW_ADC_Blinky_Test_T ADC_Blinky_Test_DW;

/* Constant parameters (auto storage) */
extern const ConstP_ADC_Blinky_Test_T ADC_Blinky_Test_ConstP;

/* External function called from main */
extern void ADC_Blinky_Test_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void ADC_Blinky_Test_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void ADC_Blinky_Test_initialize(void);
extern void ADC_Blinky_Test_step(int_T tid);
extern void ADC_Blinky_Test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ADC_Blinky_Test_T *const ADC_Blinky_Test_M;

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
 * '<Root>' : 'ADC_Blinky_Test'
 * '<S1>'   : 'ADC_Blinky_Test/Compare To Constant'
 * '<S2>'   : 'ADC_Blinky_Test/Compare To Constant1'
 * '<S3>'   : 'ADC_Blinky_Test/Subsystem'
 * '<S4>'   : 'ADC_Blinky_Test/Subsystem1'
 */
#endif                                 /* RTW_HEADER_ADC_Blinky_Test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
