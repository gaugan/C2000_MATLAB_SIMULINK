/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ADC_Blinky_Test.c
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

#include "ADC_Blinky_Test.h"
#include "ADC_Blinky_Test_private.h"
#include "ADC_Blinky_Test_dt.h"

/* Block signals (auto storage) */
B_ADC_Blinky_Test_T ADC_Blinky_Test_B;

/* Block states (auto storage) */
DW_ADC_Blinky_Test_T ADC_Blinky_Test_DW;

/* Real-time model */
RT_MODEL_ADC_Blinky_Test_T ADC_Blinky_Test_M_;
RT_MODEL_ADC_Blinky_Test_T *const ADC_Blinky_Test_M = &ADC_Blinky_Test_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void ADC_Blinky_Test_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(ADC_Blinky_Test_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (ADC_Blinky_Test_M->Timing.TaskCounters.TID[1])++;
  if ((ADC_Blinky_Test_M->Timing.TaskCounters.TID[1]) > 4) {/* Sample time: [0.5s, 0.0s] */
    ADC_Blinky_Test_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<Root>/Subsystem'
 *    '<Root>/Subsystem1'
 */
void ADC_Blinky_T_Subsystem_Init(B_Subsystem_ADC_Blinky_Test_T *localB,
  P_Subsystem_ADC_Blinky_Test_T *localP)
{
  /* SystemInitialize for Outport: '<S3>/Out1' */
  localB->DataTypeConversion = localP->Out1_Y0;
}

/*
 * Start for enable system:
 *    '<Root>/Subsystem'
 *    '<Root>/Subsystem1'
 */
void ADC_Blinky__Subsystem_Start(DW_Subsystem_ADC_Blinky_Test_T *localDW)
{
  /* Start for DiscretePulseGenerator: '<S3>/Pulse Generator' */
  localDW->clockTickCounter = 0;
}

/*
 * Output and update for enable system:
 *    '<Root>/Subsystem'
 *    '<Root>/Subsystem1'
 */
void ADC_Blinky_Test_Subsystem(boolean_T rtu_Enable,
  B_Subsystem_ADC_Blinky_Test_T *localB, DW_Subsystem_ADC_Blinky_Test_T *localDW,
  P_Subsystem_ADC_Blinky_Test_T *localP)
{
  real_T rtb_PulseGenerator;

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  if (rtu_Enable) {
    /* DiscretePulseGenerator: '<S3>/Pulse Generator' */
    rtb_PulseGenerator = (localDW->clockTickCounter <
                          localP->PulseGenerator_Duty) &&
      (localDW->clockTickCounter >= 0) ? localP->PulseGenerator_Amp : 0.0;
    if (localDW->clockTickCounter >= localP->PulseGenerator_Period - 1.0) {
      localDW->clockTickCounter = 0;
    } else {
      localDW->clockTickCounter++;
    }

    /* End of DiscretePulseGenerator: '<S3>/Pulse Generator' */

    /* DataTypeConversion: '<S3>/Data Type Conversion' */
    localB->DataTypeConversion = (rtb_PulseGenerator != 0.0);
    srUpdateBC(localDW->Subsystem_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
}

/* Model step function for TID0 */
void ADC_Blinky_Test_step0(void)       /* Sample time: [0.1s, 0.0s] */
{
  {                                    /* Sample time: [0.1s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (armcortexa_v4l2_video_capture_sfcn): '<Root>/V4L2 Video Capture' */
  MW_videoCaptureOutput(ADC_Blinky_Test_ConstP.V4L2VideoCapture_p1,
                        ADC_Blinky_Test_B.V4L2VideoCapture_o1,
                        ADC_Blinky_Test_B.V4L2VideoCapture_o2,
                        ADC_Blinky_Test_B.V4L2VideoCapture_o3);

  /* S-Function (armcortexa_sdl_video_display_sfcn): '<Root>/SDL Video Display' */
  memcpy(&ADC_Blinky_Test_B.uv0[0], &ADC_Blinky_Test_B.V4L2VideoCapture_o1[0],
         76800U * sizeof(uint8_T));
  memcpy(&ADC_Blinky_Test_B.uv1[0], &ADC_Blinky_Test_B.V4L2VideoCapture_o2[0],
         76800U * sizeof(uint8_T));
  memcpy(&ADC_Blinky_Test_B.uv2[0], &ADC_Blinky_Test_B.V4L2VideoCapture_o3[0],
         76800U * sizeof(uint8_T));
  MW_SDL_videoDisplayOutput(ADC_Blinky_Test_B.uv0, ADC_Blinky_Test_B.uv1,
    ADC_Blinky_Test_B.uv2);

  /* External mode */
  rtExtModeUploadCheckTrigger(2);
  rtExtModeUpload(0, ADC_Blinky_Test_M->Timing.taskTime0);

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(ADC_Blinky_Test_M)!=-1) &&
        !((rtmGetTFinal(ADC_Blinky_Test_M)-ADC_Blinky_Test_M->Timing.taskTime0) >
          ADC_Blinky_Test_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(ADC_Blinky_Test_M, "Simulation finished");
    }

    if (rtmGetStopRequested(ADC_Blinky_Test_M)) {
      rtmSetErrorStatus(ADC_Blinky_Test_M, "Simulation finished");
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  ADC_Blinky_Test_M->Timing.taskTime0 =
    (++ADC_Blinky_Test_M->Timing.clockTick0) *
    ADC_Blinky_Test_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void ADC_Blinky_Test_step1(void)       /* Sample time: [0.5s, 0.0s] */
{
  uint32_T tmp;
  real_T rtb_AnalogInput_0;

  /* Reset subsysRan breadcrumbs */
  srClearBC(ADC_Blinky_Test_DW.Subsystem.Subsystem_SubsysRanBC);

  /* S-Function (armcortexa_analogInput_sfcn): '<Root>/Analog Input' */
  tmp = ADC_Blinky_Test_P.AnalogInput_p1;
  rtb_AnalogInput_0 = MW_analogInputRead(&tmp);

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem' */

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   *  S-Function (armcortexa_analogInput_sfcn): '<Root>/Analog Input'
   */
  ADC_Blinky_Test_Subsystem(rtb_AnalogInput_0 <=
    ADC_Blinky_Test_P.CompareToConstant_const, &ADC_Blinky_Test_B.Subsystem,
    &ADC_Blinky_Test_DW.Subsystem, (P_Subsystem_ADC_Blinky_Test_T *)
    &ADC_Blinky_Test_P.Subsystem);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED' */
  MW_ledWrite(ADC_Blinky_Test_P.LED_p1,
              ADC_Blinky_Test_B.Subsystem.DataTypeConversion);

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED1' */
  MW_ledWrite(ADC_Blinky_Test_P.LED1_p1,
              ADC_Blinky_Test_B.Subsystem.DataTypeConversion);

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem1' */

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   *  S-Function (armcortexa_analogInput_sfcn): '<Root>/Analog Input'
   */
  ADC_Blinky_Test_Subsystem(rtb_AnalogInput_0 >
    ADC_Blinky_Test_P.CompareToConstant1_const, &ADC_Blinky_Test_B.Subsystem1,
    &ADC_Blinky_Test_DW.Subsystem1, (P_Subsystem_ADC_Blinky_Test_T *)
    &ADC_Blinky_Test_P.Subsystem1);

  /* End of Outputs for SubSystem: '<Root>/Subsystem1' */

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED2' */
  MW_ledWrite(ADC_Blinky_Test_P.LED2_p1,
              ADC_Blinky_Test_B.Subsystem1.DataTypeConversion);

  /* S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED3' */
  MW_ledWrite(ADC_Blinky_Test_P.LED3_p1,
              ADC_Blinky_Test_B.Subsystem1.DataTypeConversion);
  rtExtModeUpload(1, ((ADC_Blinky_Test_M->Timing.clockTick1) * 0.5));

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.5, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  ADC_Blinky_Test_M->Timing.clockTick1++;
}

/* Model step wrapper function for compatibility with a static main program */
void ADC_Blinky_Test_step(int_T tid)
{
  switch (tid) {
   case 0 :
    ADC_Blinky_Test_step0();
    break;

   case 1 :
    ADC_Blinky_Test_step1();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void ADC_Blinky_Test_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)ADC_Blinky_Test_M, 0,
                sizeof(RT_MODEL_ADC_Blinky_Test_T));
  rtmSetTFinal(ADC_Blinky_Test_M, 10.0);
  ADC_Blinky_Test_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  ADC_Blinky_Test_M->Sizes.checksums[0] = (1829233690U);
  ADC_Blinky_Test_M->Sizes.checksums[1] = (886637962U);
  ADC_Blinky_Test_M->Sizes.checksums[2] = (878798805U);
  ADC_Blinky_Test_M->Sizes.checksums[3] = (3553973354U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    ADC_Blinky_Test_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &ADC_Blinky_Test_DW.Subsystem.Subsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &ADC_Blinky_Test_DW.Subsystem1.Subsystem_SubsysRanBC;
    rteiSetModelMappingInfoPtr(ADC_Blinky_Test_M->extModeInfo,
      &ADC_Blinky_Test_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ADC_Blinky_Test_M->extModeInfo,
                        ADC_Blinky_Test_M->Sizes.checksums);
    rteiSetTPtr(ADC_Blinky_Test_M->extModeInfo, rtmGetTPtr(ADC_Blinky_Test_M));
  }

  /* block I/O */
  (void) memset(((void *) &ADC_Blinky_Test_B), 0,
                sizeof(B_ADC_Blinky_Test_T));

  /* states (dwork) */
  (void) memset((void *)&ADC_Blinky_Test_DW, 0,
                sizeof(DW_ADC_Blinky_Test_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ADC_Blinky_Test_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (armcortexa_analogInput_sfcn): '<Root>/Analog Input' */
  MW_analogInputInit();

  /* Start for Enabled SubSystem: '<Root>/Subsystem' */
  ADC_Blinky__Subsystem_Start(&ADC_Blinky_Test_DW.Subsystem);

  /* End of Start for SubSystem: '<Root>/Subsystem' */

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED' */
  MW_ledInit(ADC_Blinky_Test_P.LED_p1);

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED1' */
  MW_ledInit(ADC_Blinky_Test_P.LED1_p1);

  /* Start for Enabled SubSystem: '<Root>/Subsystem1' */
  ADC_Blinky__Subsystem_Start(&ADC_Blinky_Test_DW.Subsystem1);

  /* End of Start for SubSystem: '<Root>/Subsystem1' */

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED2' */
  MW_ledInit(ADC_Blinky_Test_P.LED2_p1);

  /* Start for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED3' */
  MW_ledInit(ADC_Blinky_Test_P.LED3_p1);

  /* Start for S-Function (armcortexa_v4l2_video_capture_sfcn): '<Root>/V4L2 Video Capture' */
  MW_videoCaptureInit(ADC_Blinky_Test_ConstP.V4L2VideoCapture_p1, 0, 0, 0, 0,
                      320U, 240U, 2U, 2U, 1U, 0.1);

  /* Start for S-Function (armcortexa_sdl_video_display_sfcn): '<Root>/SDL Video Display' */
  MW_SDL_videoDisplayInit(1, 1, 1, 320, 240);

  /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem' */
  ADC_Blinky_T_Subsystem_Init(&ADC_Blinky_Test_B.Subsystem,
    (P_Subsystem_ADC_Blinky_Test_T *)&ADC_Blinky_Test_P.Subsystem);

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem1' */
  ADC_Blinky_T_Subsystem_Init(&ADC_Blinky_Test_B.Subsystem1,
    (P_Subsystem_ADC_Blinky_Test_T *)&ADC_Blinky_Test_P.Subsystem1);

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem1' */
}

/* Model terminate function */
void ADC_Blinky_Test_terminate(void)
{
  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED' */
  MW_ledTerminate(ADC_Blinky_Test_P.LED_p1);

  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED1' */
  MW_ledTerminate(ADC_Blinky_Test_P.LED1_p1);

  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED2' */
  MW_ledTerminate(ADC_Blinky_Test_P.LED2_p1);

  /* Terminate for S-Function (armcortexa_LedWrite_sfcn): '<Root>/LED3' */
  MW_ledTerminate(ADC_Blinky_Test_P.LED3_p1);

  /* Terminate for S-Function (armcortexa_v4l2_video_capture_sfcn): '<Root>/V4L2 Video Capture' */
  MW_videoCaptureTerminate(ADC_Blinky_Test_ConstP.V4L2VideoCapture_p1);

  /* Terminate for S-Function (armcortexa_sdl_video_display_sfcn): '<Root>/SDL Video Display' */
  MW_SDL_videoDisplayTerminate(320, 240);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
