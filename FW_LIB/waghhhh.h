#ifndef __WAGHHHH_H
#define __WAGHHHH_H

#define AHB_BASE ((uint32)0x40018000)
#define RCC_BASE (AHB_BASE+0x9000)

typedef unsigned int uint32;
typedef unsigned short uint16;
typedef unsigned char uchar;

/*---------------------RCC-----------------------*/
typedef struct{
    uint32 CR;
    uint32 CFGR;
    uint32 CIR;
    uint32 APB2RSTR;
    uint32 APB1RSTR;
    uint32 AHBENR;
    uint32 APB2ENR;
}RccType;

#define RCC ((RccType*)RCC_BASE)

#define RCC_CR RCC->CR
#define RCC_CFGR RCC->CFGR
#define RCC_CIR RCC->CIR
#define RCC_APB2RSTR RCC->APB2RSTR
#define RCC_APB1RSTR RCC->APB1RSTR
#define RCC_AHBENR RCC->AHBENR
#define RCC_APB2ENR RCC->APB2ENR

//----------------RccCr-----------------
typedef struct{
    uchar HSION:1;
    uchar HSIRDY:1;
    uchar :1;
    uchar HSITRM:4;
    uchar HSICA:8;
    uchar HSEON:1;
    uchar HSERDY:1;
    uchar HSEBYP:1;
    uchar CSSON:1;
    uchar :4;
	uchar PLLON:1;
    uchar PLLRDY:1;
    uchar :6;
}RccCrType;

#define RccCr ((RccCrType*)RCC_BASE)
//---------------RCC_CREND---------------

//----------------RCC_CFGR---------------
typedef struct{
    uchar SW:1;
    uchar SWS:1;
    uchar HPRE:4;
    uchar PPRE1:3;
    uchar PPRE2:3;
    uchar ADCPRE:2;
    uchar PLLSRC:1;
    uchar PLLXTPRE:1;
    uchar PLLMUL:4;
    uchar USBPRE:1;
	uchar :1;
	uchar MCO:3;
	uchar :5;
}RccCfgrType;

#define RccCfgr ((RccCfgrType*)RCC_BASE+0x04)
//-----------------CFGR-------------------
/*---------------------RCCEND------------------------*/

#endif