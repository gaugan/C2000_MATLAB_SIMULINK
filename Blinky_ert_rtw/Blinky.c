/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Blinky.c
 *
 * Code generated for Simulink model 'Blinky'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Feb 02 11:55:10 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Blinky.h"
#include "Blinky_private.h"

/* Real-time model */
RT_MODEL_Blinky_T Blinky_M_;
RT_MODEL_Blinky_T *const Blinky_M = &Blinky_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Blinky_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Blinky_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(Blinky_M, 2));
  eventFlags[3] = ((boolean_T)rtmStepTask(Blinky_M, 3));
  eventFlags[4] = ((boolean_T)rtmStepTask(Blinky_M, 4));
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
  (Blinky_M->Timing.TaskCounters.TID[1])++;
  if ((Blinky_M->Timing.TaskCounters.TID[1]) > 4) {/* Sample time: [0.5s, 0.0s] */
    Blinky_M->Timing.TaskCounters.TID[1] = 0;
  }

  (Blinky_M->Timing.TaskCounters.TID[2])++;
  if ((Blinky_M->Timing.TaskCounters.TID[2]) > 5) {/* Sample time: [0.6s, 0.0s] */
    Blinky_M->Timing.TaskCounters.TID[2] = 0;
  }

  (Blinky_M->Timing.TaskCounters.TID[3])++;
  if ((Blinky_M->Timing.TaskCounters.TID[3]) > 6) {/* Sample time: [0.7s, 0.0s] */
    Blinky_M->Timing.TaskCounters.TID[3] = 0;
  }

  (Blinky_M->Timing.TaskCounters.TID[4])++;
  if ((Blinky_M->Timing.TaskCounters.TID[4]) > 7) {/* Sample time: [0.8s, 0.0s] */
    Blinky_M->Timing.TaskCounters.TID[4] = 0;
  }
}

/* Model step function for TID0 */
void Blinky_step0(void)                /* Sample time: [0.1s, 0.0s] */
{
  {                                    /* Sample time: [0.1s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void Blinky_step1(void)                /* Sample time: [0.5s, 0.0s] */
{
  /* S-Function (c280xgpio_do): '<Root>/LED1' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO0 = (Blinky_P.Constant_Value != 0);
  }
}

/* Model step function for TID2 */
void Blinky_step2(void)                /* Sample time: [0.6s, 0.0s] */
{
  /* S-Function (c280xgpio_do): '<Root>/LED2' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO1 = (Blinky_P.Constant1_Value != 0);
  }
}

/* Model step function for TID3 */
void Blinky_step3(void)                /* Sample time: [0.7s, 0.0s] */
{
  /* S-Function (c280xgpio_do): '<Root>/LED3' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO2 = (Blinky_P.Constant2_Value != 0);
  }
}

/* Model step function for TID4 */
void Blinky_step4(void)                /* Sample time: [0.8s, 0.0s] */
{
  /* S-Function (c280xgpio_do): '<Root>/LED4' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO3 = (Blinky_P.Constant3_Value != 0);
  }
}

/* Model initialize function */
void Blinky_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Blinky_M, 0,
                sizeof(RT_MODEL_Blinky_T));

  /* Start for S-Function (c280xgpio_do): '<Root>/LED1' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFFC;
  GpioCtrlRegs.GPADIR.all |= 0x1;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED2' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFF3;
  GpioCtrlRegs.GPADIR.all |= 0x2;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED3' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPADIR.all |= 0x4;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED4' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFF3F;
  GpioCtrlRegs.GPADIR.all |= 0x8;
  EDIS;
}

/* Model terminate function */
void Blinky_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
