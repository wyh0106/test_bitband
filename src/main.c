#include <waibiwaibi.h>
#include <waghhhh.h>

unsigned int i,j,n,m;

void ClkInit(void){
	RCC_CFGR = 0;
    RCC_CFGR |= 0x1D0402;
    RCC_CR = 0;
    RCC_CR |= 0x10500000;
    while(!(RccCr->HSERDY));
    while(!(RccCr->PLLRDY));
}
void GpioInit(void){
    RCC_APB2ENR |= ((1)<<3);
    GPIOB_CRL = 0;
    GPIOB_CRL |= 0x300000;
}

void delay(uint32 x){
    for(i=x;i>0;i--)
        for(j=5000;j>0;j--);
}

int main(void){
    ClkInit();
    GpioInit();

    while(1)
		GPIOB_ODR |= 1<<5;
}