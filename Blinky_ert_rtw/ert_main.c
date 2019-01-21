/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ert_main.c
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
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
boolean_T isRateRunning[5] = { 0, 0, 0, 0, 0 };

boolean_T need2runFlags[5] = { 0, 0, 0, 0, 0 };

void rt_OneStep(void)
{
  boolean_T eventFlags[5];
  int_T i;

  /* Check base rate for overrun */
  if (isRateRunning[0]++) {
    IsrOverrun = 1;
    isRateRunning[0]--;                /* allow future iterations to succeed*/
    return;
  }

  /*
   * For a bare-board target (i.e., no operating system), the rates
   * that execute this base step are buffered locally to allow for
   * overlapping preemption.  The generated code includes function
   * writeCodeInfoFcn() which sets the rates
   * that need to run this time step.  The return values are 1 and 0
   * for true and false, respectively.
   */
  Blinky_SetEventsForThisBaseStep(eventFlags);
  enableTimer0Interrupt();
  Blinky_step0();

  /* Get model outputs here */
  disableTimer0Interrupt();
  isRateRunning[0]--;
  for (i = 1; i < 5; i++) {
    if (eventFlags[i]) {
      if (need2runFlags[i]++) {
        IsrOverrun = 1;
        need2runFlags[i]--;            /* allow future iterations to succeed*/
        break;
      }
    }
  }

  for (i = 1; i < 5; i++) {
    if (isRateRunning[i]) {
      /* Yield to higher priority*/
      return;
    }

    if (need2runFlags[i]) {
      isRateRunning[i]++;
      enableTimer0Interrupt();

      /* Step the model for subrate "i" */
      switch (i)
      {
       case 1 :
        Blinky_step1();

        /* Get model outputs here */
        break;

       case 2 :
        Blinky_step2();

        /* Get model outputs here */
        break;

       case 3 :
        Blinky_step3();

        /* Get model outputs here */
        break;

       case 4 :
        Blinky_step4();

        /* Get model outputs here */
        break;

       default :
        break;
      }

      disableTimer0Interrupt();
      need2runFlags[i]--;
      isRateRunning[i]--;
    }
  }
}

int main(void)
{
  volatile boolean_T runModel = 1;
  float modelBaseRate = 0.1;
  float systemClock = 60;
  c2000_flash_init();
  init_board();
  rtmSetErrorStatus(Blinky_M, 0);
  Blinky_initialize();
  configureTimer0(modelBaseRate, systemClock);
  runModel =
    rtmGetErrorStatus(Blinky_M) == (NULL);
  enableTimer0Interrupt();
  globalInterruptEnable();
  while (runModel) {
    runModel =
      rtmGetErrorStatus(Blinky_M) == (NULL);
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  Blinky_terminate();
  globalInterruptDisable();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
