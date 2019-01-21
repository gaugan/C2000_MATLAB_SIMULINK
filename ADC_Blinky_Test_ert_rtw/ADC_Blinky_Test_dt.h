/*
 * ADC_Blinky_Test_dt.h
 *
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * Code generation for model "ADC_Blinky_Test".
 *
 * Model version              : 1.20
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed Feb 22 17:05:00 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&ADC_Blinky_Test_B.V4L2VideoCapture_o1[0]), 3, 0, 230400 },

  { (char_T *)(&ADC_Blinky_Test_B.Subsystem1.DataTypeConversion), 8, 0, 1 },

  { (char_T *)(&ADC_Blinky_Test_B.Subsystem.DataTypeConversion), 8, 0, 1 }
  ,

  { (char_T *)(&ADC_Blinky_Test_DW.Subsystem1.clockTickCounter), 6, 0, 1 },

  { (char_T *)(&ADC_Blinky_Test_DW.Subsystem1.Subsystem_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&ADC_Blinky_Test_DW.Subsystem.clockTickCounter), 6, 0, 1 },

  { (char_T *)(&ADC_Blinky_Test_DW.Subsystem.Subsystem_SubsysRanBC), 2, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&ADC_Blinky_Test_P.CompareToConstant_const), 0, 0, 2 },

  { (char_T *)(&ADC_Blinky_Test_P.AnalogInput_p1), 7, 0, 1 },

  { (char_T *)(&ADC_Blinky_Test_P.LED_p1[0]), 3, 0, 88 },

  { (char_T *)(&ADC_Blinky_Test_P.Subsystem1.PulseGenerator_Amp), 0, 0, 4 },

  { (char_T *)(&ADC_Blinky_Test_P.Subsystem1.Out1_Y0), 8, 0, 1 },

  { (char_T *)(&ADC_Blinky_Test_P.Subsystem.PulseGenerator_Amp), 0, 0, 4 },

  { (char_T *)(&ADC_Blinky_Test_P.Subsystem.Out1_Y0), 8, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  7U,
  rtPTransitions
};

/* [EOF] ADC_Blinky_Test_dt.h */
