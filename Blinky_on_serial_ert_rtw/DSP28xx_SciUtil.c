/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: DSP28xx_SciUtil.c
 *
 * Code generated for Simulink model 'Blinky_on_serial'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Feb 02 15:23:36 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DSP28xx_SciUtil.h"

/*
 * Receive character(s) from the SCIa
 * Received character(s) will be write to rcvBuff.
 * Return 0 if characters are received with no error.
 * Return 1 if waiting timeout.
 * Return 2 if data error.(receiving timout or checksum error)
 * Return 3 if a parity error occured.
 * Return 4 if a frame error occured.
 */
int scia_rcv(unsigned int *rcvBuff, int buffLen, int loopMode, int typeLen)
{
  int i;
  int errorVal = NOERROR;
  unsigned int byte_cnt = 0;
  unsigned int cnt = 0;
  unsigned int maxcnt;
  if (loopMode == LONGLOOP) {
    maxcnt = RCVMAXCNTL;
  } else {
    maxcnt = RCVMAXCNTS;
  }

  for (i = 0; i<buffLen; i++) {
    cnt = 0;
    while (SciaRegs.SCIFFRX.bit.RXFFST == 0) {/* wait until data received */
      if (i == 0) {
        if (cnt++ > maxcnt)
          return TIMEOUT;
      } else {
        if (cnt++ > RCVMAXCNTL)
          return TIMEOUT;
      }
    }

    if (typeLen > 1) {
      if (byte_cnt == 0) {
        rcvBuff[i/2] = (SciaRegs.SCIRXBUF.all & 0x00FF);
        byte_cnt = 1;
      } else {
        rcvBuff[i/2] |= SciaRegs.SCIRXBUF.all << 8;
        byte_cnt = 0;
      }
    } else {
      rcvBuff[i] = SciaRegs.SCIRXBUF.all;
    }

    if (SciaRegs.SCIFFRX.bit.RXFFOVF == 1)/* detect FIFO overflow*/
    {
      SciaRegs.SCIFFRX.bit.RXFFOVRCLR = 1;

      /*SciaRegs.SCIFFRX.bit.RXFIFORESET = 0;    Reset the FIFO pointer to zero.
       * SciaRegs.SCIFFRX.bit.RXFIFORESET = 1;   Re-enable receive FIFO operation.
       */
    }

    if (SciaRegs.SCIRXST.bit.FE)
      errorVal = FRAMERR;
    if (SciaRegs.SCIRXST.bit.PE)
      errorVal = PRTYERR;
    if (SciaRegs.SCIRXST.bit.OE)
      errorVal = OVRNERR;
    if (SciaRegs.SCIRXST.bit.BRKDT)
      errorVal = BRKDTERR;
    if (SciaRegs.SCIRXST.bit.RXERROR == 1) {
      SciaRegs.SCICTL1.bit.SWRESET = 1;
      SciaRegs.SCICTL1.bit.SWRESET = 0;
      SciaRegs.SCICTL1.bit.SWRESET = 1;
    }
  }

  return errorVal;
}

int byteswap_L8cmp(unsigned int* outdata, char* recdata, int inportWidth, int
                   typeLen)
{
  int i, j;
  int numWrd = (inportWidth * typeLen)/2;/* number of words (16 bit length) to receive*/

  /* Little Endian, 8bit swap */
  for (i = 0; i < numWrd; i++) {
    outdata[i] = 0;
    for (j = 0; j<2; j++) {
      outdata[i] += recdata[i*2+j] <<(8*j);
    }
  }

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
