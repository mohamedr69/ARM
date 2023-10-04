/*
	Name:		Mohamed Ramadan
	Date:   	2 OCT 2023
	Version:	V01
*/
/*Libraries*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
/*RCC files*/
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void RCC_voidInit(void){
	#if RCC_CLOCK_TYPE == RCC_HSI
		RCC_CR = 0x00000081;  /*Enable HSI + 0 TRIMMING*/
		RCC_CFGR = 0x00000000;
	#elif RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
		RCC_CR = 0x00010000; /*Enable HSE CRYSTAL*/
		RCC_CFGR = 0x00000001;
	#elif RCC_CLOCK_TYPE == RCC_HSE_RC
		RCC_CR = 0x00050001; /*Enable HSE RC*/
		RCC_CFGR = 0x00000001;
	#elif RCC_CLOCK_TYPE == RCC_PLL
		RCC_CR = 0x02000000; /*Enable PLL*/
		/*Multiplier*/
		RCC_CR =(((RCC_CR<<18)&RCC_PLL_MUL)>>18);
		RCC_CFGR = 0x00000003; /*Enable PLL*/
	#else 
		/*ERROR:*/
	#endif 
}
void RCC_voidEnableClock(u8 COPY_u8BusId,u8 COPY_u8PerId){
	#if COPY_u8BusId == RCC_AHB 
		SET_BIT(RCC_AHBENR,COPY_u8PerId);
	#elif COPY_u8BusId == RCC_APB1
		SET_BIT(RCC_APB1ENR,COPY_u8PerId);
	#elif COPY_u8BusId == RCC_APBS
		SET_BIT(RCC_APB2ENR,COPY_u8PerId);
	#else
		/*Error:*/
	#endif
}
void RCC_voidEnableClock(u8 COPY_u8BusId,u8 COPY_u8PerId){
	#if COPY_u8BusId == RCC_AHB 
		CLR_BIT(RCC_AHBENR,COPY_u8PerId);
	#elif COPY_u8BusId == RCC_APB1
		CLR_BIT(RCC_APB1ENR,COPY_u8PerId);
	#elif COPY_u8BusId == RCC_APBS
		CLR_BIT(RCC_APB2ENR,COPY_u8PerId);
	#else
		/*Error:*/
	#endif
}