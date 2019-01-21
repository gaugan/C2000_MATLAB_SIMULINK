#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#include "c2000SchedulerTimer.h"
#include "c2000BoardSupport.h"
#include "F2802x_Device.h"
#include "f2802x_examples.h"
#include "f2802x_globalprototypes.h"
#include "F2802x_CpuTimers.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE TI Piccolo F2802x
#define MW_CONNECTIONINFO_SERIAL_IPADDRESS codertarget.registry.getLoopbackIP;
#define MW_CONNECTIONINFO_SERIAL_PORT 17725
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 0
#define MW_EXTMODE_CONFIGURATION serial
#define MW_RTOS Baremetal
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_RUNTIME_DEVICEID 0
#define MW_RUNTIME_FLASHLOAD 0
#define MW_RUNTIME_LOADCOMMANDARG $(TARGET_ROOT)/CCS_Config/f28027.ccxml
#define MW_TARGETLINKOBJ_USECUSTOMLINKER 1
#define MW_TARGETLINKOBJ_NAME $(TARGET_ROOT)/src/c28027.cmd
#define MW_CLOCKING_CPUCLOCKRATEMHZ 60
#define MW_CLOCKING_USEINTERNALOSC 1
#define MW_CLOCKING_OSCCLK 10
#define MW_CLOCKING_AUTOSETPLLSETTINGS 1
#define MW_CLOCKING_PLLCR 0
#define MW_CLOCKING_DIVSEL 1
#define MW_CLOCKING_CLOSESTCPUCLOCK 60
#define MW_CLOCKING_LSPCLKDIV 0
#define MW_CLOCKING_LSPCLK 60
#define MW_ADC_CLOCKDIV 0
#define MW_ADC_CLOCKFREQUENCY 60.000000
#define MW_ADC_NONOVERLAP 0
#define MW_ADC_OFFSETCORRECTIONVALUE AdcRegs.ADCOFFTRIM.bit.OFFTRIM
#define MW_ADC_EXTERNALREFERENCESELECTOR 0
#define MW_ADC_EXTERNALREFERENCEVREFHI 3.3
#define MW_ADC_EXTERNALREFERENCEVREFLO 0
#define MW_ADC_INTPULSEGENERATION 0
#define MW_ADC_SOCPRIORITY 0
#define MW_ADC_XINT2GPIO 0
#define MW_COMP_PINASSIGNMENT_COMP1 1
#define MW_COMP_PINASSIGNMENT_COMP2 1
#define MW_ECAP_PINASSIGNMENT_ECAP1 1
#define MW_EPWM_PINASSIGNMENT_TZ2 0
#define MW_EPWM_PINASSIGNMENT_TZ3 0
#define MW_EPWM_PINASSIGNMENT_SYNCI 0
#define MW_EPWM_PINASSIGNMENT_SYNCO 0
#define MW_I2C_MODE 0
#define MW_I2C_ADDRDATAFORMAT 0
#define MW_I2C_OWNADDRESS 1
#define MW_I2C_BITCOUNT 0
#define MW_I2C_MODULECLOCKPRESCALER 9
#define MW_I2C_MODULECLOCKFREQUENCY 6000000.000000
#define MW_I2C_MASTERCLKLOWTIME 5
#define MW_I2C_MASTERCLKHIGHTIME 5
#define MW_I2C_MASTERCLOCKFREQUENCY 300000.000000
#define MW_I2C_MASTERCLOCKFREQUENCY_1 300000.000000
#define MW_I2C_MASTERCLOCKFREQUENCY_2 300000.000000
#define MW_I2C_ENABLELOOPBACK 0
#define MW_I2C_PINASSIGNMENT_SDAA 0
#define MW_I2C_PINASSIGNMENT_SCLA 0
#define MW_I2C_ENABLETXINT 0
#define MW_I2C_TXFIFOLEVEL 4
#define MW_I2C_ENABLERXINT 0
#define MW_I2C_RXFIFOLEVEL 4
#define MW_I2C_ENABLESYSINT 0
#define MW_I2C_AAS 0
#define MW_I2C_SCD 0
#define MW_I2C_ARDY 0
#define MW_I2C_NACK 0
#define MW_I2C_AL 0
#define MW_SCI_A_ENABLELOOPBACK 0
#define MW_SCI_A_SUSPENSIONMODE 2
#define MW_SCI_A_NUMBEROFSTOPBITS 0
#define MW_SCI_A_PARITYMODE 0
#define MW_SCI_A_CHARACTERLENGTHBITS 0
#define MW_SCI_A_USERBAUDRATE 115200
#define MW_SCI_A_BAUDRATEPRESCALER 64.000000
#define MW_SCI_A_BAUDRATE 115385.000000
#define MW_SCI_A_COMMUNICATIONMODE 0
#define MW_SCI_A_BLOCKINGMODE 0
#define MW_SCI_A_DATABYTEORDER 0
#define MW_SCI_A_DATASWAPWIDTH 0
#define MW_SCI_A_PINASSIGNMENT_TX 3
#define MW_SCI_A_PINASSIGNMENT_RX 3
#define MW_SPI_A_MODE 0
#define MW_SPI_A_USERBAUDRATE 921600
#define MW_SPI_A_BAUDRATEFACTOR 64.000000
#define MW_SPI_A_BAUDRATE 923077.000000
#define MW_SPI_A_DATABITS 15
#define MW_SPI_A_CLOCKPOLARITY 0
#define MW_SPI_A_CLOCKPHASE 0
#define MW_SPI_A_SUSPENSIONMODE 2
#define MW_SPI_A_ENABLELOOPBACK 0
#define MW_SPI_A_ENABLETHREEWIRE 0
#define MW_SPI_A_FIFOENABLE 1
#define MW_SPI_A_FIFOINTERRUPTLEVEL_RX 4
#define MW_SPI_A_FIFOINTERRUPTLEVEL_TX 0
#define MW_SPI_A_FIFOTRANSMITDELAY 0
#define MW_SPI_A_PINASSIGNMENT_SIMO 1
#define MW_SPI_A_PINASSIGNMENT_SOMI 1
#define MW_SPI_A_PINASSIGNMENT_CLK 1
#define MW_SPI_A_PINASSIGNMENT_STE 1
#define MW_WATCHDOG_ENABLE_WATCHDOG 0
#define MW_WATCHDOG_WATCHDOGCLOCK 0
#define MW_WATCHDOG_TIME_PERIOD 0.013107
#define MW_WATCHDOG_WATCHDOGEVENT 0
#define MW_GPIO0_7_GPIOQUALSEL0 0
#define MW_GPIO0_7_GPIOQUALSEL1 0
#define MW_GPIO0_7_GPIOQUALSEL2 0
#define MW_GPIO0_7_GPIOQUALSEL3 0
#define MW_GPIO0_7_GPIOQUALSEL4 0
#define MW_GPIO0_7_GPIOQUALSEL5 0
#define MW_GPIO0_7_GPIOQUALSEL6 0
#define MW_GPIO0_7_GPIOQUALSEL7 0
#define MW_GPIO0_7_QUALPRD 0
#define MW_GPIO8_15_GPIOQUALSEL8 0
#define MW_GPIO8_15_GPIOQUALSEL9 0
#define MW_GPIO8_15_GPIOQUALSEL10 0
#define MW_GPIO8_15_GPIOQUALSEL11 0
#define MW_GPIO8_15_GPIOQUALSEL12 2
#define MW_GPIO8_15_GPIOQUALSEL13 0
#define MW_GPIO8_15_GPIOQUALSEL14 0
#define MW_GPIO8_15_GPIOQUALSEL15 0
#define MW_GPIO8_15_QUALPRD 0
#define MW_GPIO16_23_GPIOQUALSEL16 0
#define MW_GPIO16_23_GPIOQUALSEL17 0
#define MW_GPIO16_23_GPIOQUALSEL18 0
#define MW_GPIO16_23_GPIOQUALSEL19 0
#define MW_GPIO16_23_GPIOQUALSEL20 0
#define MW_GPIO16_23_GPIOQUALSEL21 0
#define MW_GPIO16_23_GPIOQUALSEL22 0
#define MW_GPIO16_23_GPIOQUALSEL23 0
#define MW_GPIO16_23_QUALPRD 0
#define MW_GPIO24_31_GPIOQUALSEL24 0
#define MW_GPIO24_31_GPIOQUALSEL25 0
#define MW_GPIO24_31_GPIOQUALSEL26 0
#define MW_GPIO24_31_GPIOQUALSEL27 0
#define MW_GPIO24_31_GPIOQUALSEL28 0
#define MW_GPIO24_31_GPIOQUALSEL29 0
#define MW_GPIO24_31_GPIOQUALSEL30 0
#define MW_GPIO24_31_GPIOQUALSEL31 0
#define MW_GPIO24_31_QUALPRD 0
#define MW_GPIO32_34_GPIOQUALSEL32 0
#define MW_GPIO32_34_GPIOQUALSEL33 0
#define MW_GPIO32_34_GPIOQUALSEL34 0
#define MW_GPIO32_34_QUALPRD 0
#define MW_FLASH_LOADER_ENABLE_FLASH 0
#define MW_FLASH_LOADER_AUTOMATIC 1
#define MW_FLASH_LOADER_SECTORA 1
#define MW_FLASH_LOADER_SECTORB 1
#define MW_FLASH_LOADER_SECTORC 1
#define MW_FLASH_LOADER_SECTORD 1
#define MW_FLASH_LOADER_API_DIR C:/tidcs/c28/Flash28_API/Flash2802x_API_V100/lib/Flash2802x_API_V100a.lib
#define MW_FLASH_LOADER_APIBROWSE 0
#define MW_FLASH_LOADER_APIEXECUTE 0
#define MW_EXTMODECOMPORT COM2
#define MW_DATAVERSION 2016.02
#define MW_MULTI_TASKING_MODE 1

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif
