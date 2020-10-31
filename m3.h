#ifndef _M3_H
#define _M3_H
#define _IO volatile 
#define uint32_t unsigned int
typedef struct 
{
    _IO uint32_t CRL;
    _IO uint32_t CRH;
    _IO uint32_t IDR;
    _IO uint32_t ODR;
    _IO uint32_t BSRR;
    _IO uint32_t BRR;
    _IO uint32_t LCKR;
}GPIO_TypeDef;


#define PERIPH_BASE ((uint32_t)0x40000000)
#define APB2PERIPH_BASE (PERIPH_BASE+0x10000)
#define GPIOA_BASE (APB2PERIPH_BASE + 0x0800)
#define GPIOB_BASE (APB2PERIPH_BASE + 0x0C00)
#define GPIOC_BASE (APB2PERIPH_BASE + 0x1000)
#define GPIOD_BASE (APB2PERIPH_BASE + 0x1400)
#define GPIOE_BASE (APB2PERIPH_BASE + 0x1800)
// peripher address point to struct ; 
#define GPIOA  ((GPIO_TypeDef*)GPIOA_BASE )

#define GPIOB  ((GPIO_TypeDef*)GPIOB_BASE )

#define GPIOC  ((GPIO_TypeDef*)GPIOC_BASE )

#define GPIOD  ((GPIO_TypeDef*)GPIOD_BASE )

#define GPIOE  ((GPIO_TypeDef*)GPIOE_BASE )


void GPIO_RESET(GPIO_TypeDef* GPIOX);

#endif
