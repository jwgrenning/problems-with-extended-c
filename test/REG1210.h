/*--------------------------------------------------------------------------
REG1210.H

Test-Double Header file for TI MSC1210 microcontroller.
For off target testing
--------------------------------------------------------------------------*/

#ifndef __REG1210_H__
#define __REG1210_H__

#include <stdint.h>

typedef uint8_t sfr;
typedef uint8_t sbit;
typedef uint16_t sfr16;

/*  BYTE Registers  */

extern sfr P0;
extern sfr SP;
extern sfr DPL;
extern sfr DPH;
extern sfr DPL0;
extern sfr DPH0;
extern sfr DPL1;
extern sfr DPH1;
extern sfr DPS;
extern sfr PCON;
extern sfr TCON;
  extern sbit  TF1;
  extern sbit  TR1;
  extern sbit  TF0;
  extern sbit  TR0;
  extern sbit  IE1;
  extern sbit  IT1;
  extern sbit  IE0;
  extern sbit  IT0;
extern sfr TMOD;
extern sfr TL0;
extern sfr TL1;
extern sfr TH0;
extern sfr TH1;
extern sfr CKCON;
extern sfr MWS;
extern sfr P1;
  extern sbit  T2EX ;
  extern sbit  T2;
extern sfr EXIF;
extern sfr MPAGE;
extern sfr CADDR;
extern sfr CDATA;
extern sfr MCON;
extern sfr SCON0;
  extern sbit  SM0_0;
  extern sbit  SM1_0;
  extern sbit  SM2_0;
  extern sbit  REN_0;
  extern sbit  TB8_0;
  extern sbit  RB8_0;
  extern sbit  TI_0;
  extern sbit  RI_0;
  extern sbit  TI;
  extern sbit  RI;
extern sfr SBUF0;
extern sfr SBUF;
extern sfr SPICON;
extern sfr SPIDATA;
extern sfr SPIRCON;
extern sfr SPITCON;
extern sfr SPISTART;
extern sfr SPIEND;
extern sfr P2;
extern sfr PWMCON;
extern sfr PWMLOW;
extern sfr PWMHI;
extern sfr PAI;
//extern sfr PIREG  // ???
extern sfr AIE;
extern sfr AISTAT;
extern sfr IE;
  extern sbit  EA;
  extern sbit  ET2;
  extern sbit  ES;
  extern sbit  ES0;
  extern sbit  ET1;
  extern sbit  EX1;
  extern sbit  ET0;
  extern sbit  EX0;
extern sfr BPCON;
extern sfr BPL;
extern sfr BPH;
extern sfr P0DDRL;
extern sfr P0DDRH;
extern sfr P1DDRL;
extern sfr P1DDRH;
extern sfr P3;
  extern sbit  RD;
  extern sbit  WR;
  extern sbit  T1;
  extern sbit  T0;
  extern sbit  INT1;
  extern sbit  INT0;
  extern sbit  TXD;
  extern sbit  RXD;
extern sfr P2DDRL;
extern sfr P2DDRH;
extern sfr P3DDRL;
extern sfr P3DDRH;
extern sfr IP;
  extern sbit  PT2;
  extern sbit  PS;
  extern sbit  PT1;
  extern sbit  PX1;
  extern sbit  PT0;
  extern sbit  PX0;
extern sfr SCON1;
  extern sbit  SM0_1;
  extern sbit  SM1_1;
  extern sbit  SM2_1;
  extern sbit  REN_1;
  extern sbit  TB8_1;
  extern sbit  RB8_1;
  extern sbit  TI_1;
  extern sbit  RI_1;
extern sfr SBUF1;
extern sfr EWU;
extern sfr T2CON;
  extern sbit  TF2;
  extern sbit  EXF2;
  extern sbit  RCLK;
  extern sbit  TCLK;
  extern sbit  EXEN2;
  extern sbit  TR2;
  extern sbit  C_T2;
  extern sbit  CP_RL2;
extern sfr RCAP2L;
extern sfr RCAP2H;
extern sfr TL2;
extern sfr TH2;
extern sfr PSW;
  extern sbit  CY;
  extern sbit  AC;
  extern sbit  F0;
  extern sbit  RS1;
  extern sbit  RS0;
  extern sbit  OV;
  extern sbit  P;
extern sfr OCL;
extern sfr OCM;
extern sfr OCH;
extern sfr GCL;
extern sfr GCM;
extern sfr GCH;
extern sfr ADMUX;
extern sfr EICON;
  extern sbit  SMOD1;
  extern sbit  EAI;
  extern sbit  AI;
  extern sbit  WDTI;
extern sfr16 ADC16;
extern sfr ADRESL;
extern sfr ADRESM;
extern sfr ADRESH;
extern sfr ADCON0;
extern sfr ADCON1;
extern sfr ADCON2;
extern sfr ADCON3;
extern sfr ACC;
extern sfr SSCON;
extern sfr SUMR0;
extern sfr SUMR1;
extern sfr SUMR2;
extern sfr SUMR3;
extern sfr ODAC;
extern sfr LVDCON;
extern sfr EIE;
  extern sbit  EWDI;
  extern sbit  EX5;
  extern sbit  EX4;
  extern sbit  EX3;
  extern sbit  EX2;
extern sfr HWPC0;
extern sfr HWPC1;
extern sfr HWID;
extern sfr FMCON;
extern sfr FTCON;
extern sfr B;
extern sfr PDCON;
extern sfr PASEL;
extern sfr ACLK;
extern sfr SRST;
extern sfr EIP;
extern sfr SECINT;
extern sfr MSINT;
extern sfr USEC;
extern sfr MSECL;
extern sfr MSECH;
extern sfr HMSEC;
extern sfr WDTCON;

/*-----------------*/
/*  Word Registers  */
/*-----------------*/
extern sfr16 PWM;
extern sfr16 P0DDR;
extern sfr16 P1DDR;
extern sfr16 P2DDR;
extern sfr16 P3DDR;
extern sfr16 RCAP2;
extern sfr16 THL2;
extern sfr16 DECIMATION;
extern sfr16 ONEMS;
extern sfr16 MSEC;
extern sfr16 BREAKPT;

#define xdata
#define code

#endif
