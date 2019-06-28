#include "stm32f7xx.h"

#define COUNTER 1000000


int main()
{
  RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
  GPIOB ->MODER = 1 << 14;
  
  
  while(1) 
  {
    
    GPIOB->BSRR = 1 << 23;
    for (uint32_t i=0; i < COUNTER; i++){}
    
    GPIOB->BSRR = 1 << 7;
    for (uint32_t i=0; i < COUNTER; i++){}
  }

  return 0;
}
