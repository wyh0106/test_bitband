#ifndef __WAIBIBABU_H
#define __WAIBIBABU_H

// 设置APB2总线的基地址
#define APB2_BASE ((uint32)0x40010000)

// 通过APB2总线基地址偏移量设置GPIOA~E的基地址
#define GPIOA_BASE (APB2_BASE+0x0800)
#define GPIOB_BASE (APB2_BASE+0x0C00)
#define GPIOC_BASE (APB2_BASE+0x1000)
#define GPIOD_BASE (APB2_BASE+0x1400)
#define GPIOE_BASE (APB2_BASE+0x1800)

typedef unsigned int uint32;
typedef unsigned short uint16;
typedef unsigned char uchar;


/*---------------------GPIO-----------------------*/
// @brief 将每个GPIO的寄存器用一个结构体统一起来
typedef struct{
    uint32 CRL;
    uint32 CRH;
    uint32 IDR;
    uint32 ODR;
    uint32 BSRR;
    uint32 BRR;
    uint32 LCKR;
}GpioType;

/*--------------GPIOA----------------*/
#define GPIOA ((GpioType*)GPIOA_BASE)
// 把每个GPIO的基地址转换为一个GPIO结构体指针，并给每个成员寄存器取别名
#define GPIOA_CRL GPIOA->CRL
#define GPIOA_CRH GPIOA->CRH
#define GPIOA_IDR GPIOA->IDR
#define GPIOA_ODR GPIOA->ODR
#define GPIOA_BSRR GPIOA->BSRR
#define GPIOA_BRR GPIOA->BRR
#define GPIOA_LCKR GPIOA->LCKR
/*--------------GPIOAEND----------------*/

/*--------------GPIOB----------------*/
#define GPIOB ((GpioType*)GPIOB_BASE)

#define GPIOB_CRL GPIOB->CRL
#define GPIOB_CRH GPIOB->CRH
#define GPIOB_IDR GPIOB->IDR
#define GPIOB_ODR GPIOB->ODR
#define GPIOB_BSRR GPIOB->BSRR
#define GPIOB_BRR GPIOB->BRR
#define GPIOB_LCKR GPIOB->LCKR
/*--------------GPIOBEND----------------*/

/*--------------GPIOC----------------*/
#define GPIOC ((GpioType*)GPIOC_BASE)

#define GPIOC_CRL GPIOC->CRL
#define GPIOC_CRH GPIOC->CRH
#define GPIOC_IDR GPIOC->IDR
#define GPIOC_ODR GPIOC->ODR
#define GPIOC_BSRR GPIOC->BSRR
#define GPIOC_BRR GPIOC->BRR
#define GPIOC_LCKR GPIOC->LCKR
/*--------------GPIOCEND----------------*/

/*--------------GPIOD----------------*/
#define GPIOD ((GpioType*)GPIOD_BASE)

#define GPIOD_CRL GPIOD->CRL
#define GPIOD_CRH GPIOD->CRH
#define GPIOD_IDR GPIOD->IDR
#define GPIOD_ODR GPIOD->ODR
#define GPIOD_BSRR GPIOD->BSRR
#define GPIOD_BRR GPIOD->BRR
#define GPIOD_LCKR GPIOD->LCKR
/*--------------GPIODEND----------------*/

/*--------------GPIOE----------------*/
#define GPIOE ((GpioType*)GPIOE_BASE)

#define GPIOE_CRL GPIOE->CRL
#define GPIOE_CRH GPIOE->CRH
#define GPIOE_IDR GPIOE->IDR
#define GPIOE_ODR GPIOE->ODR
#define GPIOE_BSRR GPIOE->BSRR
#define GPIOE_BRR GPIOE->BRR
#define GPIOE_LCKR GPIOE->LCKR
//--------------GPIOEEND----------------

#define PA1OUT GPIOA_ODR=

/* Glitch!!!!
typedef struct{
	uchar odr0:1;
	uchar odr1:1;
	uchar odr2:1;
	uchar odr3:1;
	uchar odr4:1;
	uchar odr5:1;
	uchar odr6:1;
	uchar odr7:1;
	uchar odr8:1;
	uchar odr9:1;
	uchar odr10:1;
	uchar odr11:1;
	uchar odr12:1;
	uchar odr13:1;
	uchar odr14:1;
	uchar odr15:1;
	uint16 size_a_seat;
}GpioOut;

#define GPIOA_OUT ((GpioOut*)GPIOA_BASE+0x0C)
#define GPIOB_OUT ((GpioOut*)GPIOB_BASE+0x0C)
#define GPIOC_OUT ((GpioOut*)GPIOC_BASE+0x0C)
#define GPIOD_OUT ((GpioOut*)GPIOD_BASE+0x0C)
#define GPIOE_OUT ((GpioOut*)GPIOE_BASE+0x0C)
// Glitch!!!!
//---------------------GPIOEND---------------------*/

#endif


