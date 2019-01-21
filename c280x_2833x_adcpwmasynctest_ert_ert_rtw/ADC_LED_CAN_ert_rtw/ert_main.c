/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ert_main.c
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

#include "ADC_LED_CAN.h"
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
  ADC_LED_CAN_step();

  /* Get model outputs here */
  disableTimer0Interrupt();
  OverrunFlag--;
}

int main(void)
{
  volatile boolean_T runModel = 1;
  float modelBaseRate = 0.5;
  float systemClock = 200;
  c2000_flash_init();
  init_board();
  rtmSetErrorStatus(ADC_LED_CAN_M, 0);
  ADC_LED_CAN_initialize();
  configureTimer0(modelBaseRate, systemClock);
  runModel =
    rtmGetErrorStatus(ADC_LED_CAN_M) == (NULL);
  enableTimer0Interrupt();
  globalInterruptEnable();
  while (runModel) {
    runModel =
      rtmGetErrorStatus(ADC_LED_CAN_M) == (NULL);
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  ADC_LED_CAN_terminate();
  globalInterruptDisable();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
