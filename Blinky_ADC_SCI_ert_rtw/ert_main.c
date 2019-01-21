/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ert_main.c
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

#include "Blinky_ADC_SCI.h"
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  enableTimer0Interrupt();
  Blinky_ADC_SCI_step();

  /* Get model outputs here */
  disableTimer0Interrupt();
  OverrunFlag--;
}

int main(void)
{
  volatile boolean_T runModel = 1;
  float modelBaseRate = 0.5;
  float systemClock = 60;
  c2000_flash_init();
  init_board();
  rtmSetErrorStatus(Blinky_ADC_SCI_M, 0);
  Blinky_ADC_SCI_initialize();
  configureTimer0(modelBaseRate, systemClock);
  runModel =
    rtmGetErrorStatus(Blinky_ADC_SCI_M) == (NULL);
  enableTimer0Interrupt();
  globalInterruptEnable();
  while (runModel) {
    runModel =
      rtmGetErrorStatus(Blinky_ADC_SCI_M) == (NULL);
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  Blinky_ADC_SCI_terminate();
  globalInterruptDisable();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
