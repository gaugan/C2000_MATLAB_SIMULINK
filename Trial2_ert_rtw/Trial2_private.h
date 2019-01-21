/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Trial2_private.h
 *
 * Code generated for Simulink model 'Trial2'.
 *
 * Model version                  : 1.120
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 19 12:53:45 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Trial2_private_h_
#define RTW_HEADER_Trial2_private_h_
#include "rtwtypes.h"
#include "can_message.h"
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "inc/hw_can.h"
#include "driverlib/can.h"

void InitAdcA (void);
void config_ADCA_SOC0 (void);
void InitAdcB (void);
void config_ADCB_SOC1 (void);
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;

#endif                                 /* RTW_HEADER_Trial2_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
