/*
	Name:		Mohamed Ramadan
	Date:   	2 OCT 2023
	Version:	V01
*/
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

	/*AMBA PROTOCOLS DEFINITION:*/
		#define RCC_AHB 	0
		#define RCC_APB1 	1
		#define RCC_APB2	2
	
	/*CLOCK TYPE*/
		#define RCC_HSI 			0
		#define RCC_HSE_CRYSTAL		1
		#define RCC_HSE_RC			2
		#define RCC_PLL				3
	
	/*RCC PLL CLOCK TYPE*/
		#define RCC_PLL_HSI 		0
		#define RCC_PLL_HSE_CRTSTAL 1
		#define RCC_PLL_HSE_RC		2
	/*RCC PLL MULTIPLIER*/
	
		#define RCC_PLLX2 	2
		#define RCC_PLLX3	3
		#define RCC_PLLX4	4
		#define RCC_PLLX5 	5
		#define RCC_PLLX6 	6
		#define RCC_PLLX7	7
		#define RCC_PLLX8	8 
		#define RCC_PLLX9 	9
		#define RCC_PLLX10	10	
		#define RCC_PLLX11	11
		#define RCC_PLLX12	12
		#define RCC_PLLX13	13	
		#define RCC_PLLX14	14	
		#define RCC_PLLX15	15
		#define RCC_PLLX16	16
void RCC_voidInit(void);
void RCC_voidEnableClock(u8 COPY_u8BusId,u8 COPY_u8PerId);
void RCC_voidEnableClock(u8 COPY_u8BusId,u8 COPY_u8PerId);
#endif 