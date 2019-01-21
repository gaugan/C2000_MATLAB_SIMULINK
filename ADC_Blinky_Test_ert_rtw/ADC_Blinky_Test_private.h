/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ADC_Blinky_Test_private.h
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

#ifndef RTW_HEADER_ADC_Blinky_Test_private_h_
#define RTW_HEADER_ADC_Blinky_Test_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "ADC_Blinky_Test.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

extern void ADC_Blinky_T_Subsystem_Init(B_Subsystem_ADC_Blinky_Test_T *localB,
  P_Subsystem_ADC_Blinky_Test_T *localP);
extern void ADC_Blinky__Subsystem_Start(DW_Subsystem_ADC_Blinky_Test_T *localDW);
extern void ADC_Blinky_Test_Subsystem(boolean_T rtu_Enable,
  B_Subsystem_ADC_Blinky_Test_T *localB, DW_Subsystem_ADC_Blinky_Test_T *localDW,
  P_Subsystem_ADC_Blinky_Test_T *localP);
extern void ADC_Blinky_Test_step0(void);
extern void ADC_Blinky_Test_step1(void);

#endif                                 /* RTW_HEADER_ADC_Blinky_Test_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
