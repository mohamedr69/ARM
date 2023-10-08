/*
	Name:		Mohamed Ramadan
	Date:   	2 OCT 2023
	Version:	V01
*/
#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H
/*PRE PUILD CONFIGRATION*/	

/*RCC CLOCK TYPE: 
		0 RCC_HSI     		(8MHZ)
		1 RCC_HSE_CRYSTAL	(4MHZ-16MHZ)
		2 RCC_HSE_RC		(UP TO 25MHZ)
		3 RCC_PLL			(UP TO 72MHZ)
	*/
	#define RCC_CLOCK_TYPE RCC_HSI
	
#if RCC_CLOCK_TYPE == RCC_PLL
	/*RCC PLL CLOCK TYPE
		RCC_PLL_HSI
		RCC_PLL_HSE_CRTSTAL
		RCC_PLL_HSE_RC
	*/
	
	#define RCC_PLL_CLOCK_TYPE RCC_PLL_HSI
	/* RCC CLOCK TYPE PLL
		PLL MULTIPLIER: 
			RCC_PLLX2 PLL input clock x 2
			RCC_PLLX3 PLL input clock x 3
			RCC_PLLX4 PLL input clock x 4
			RCC_PLLX5 PLL input clock x 5
			RCC_PLLX6 PLL input clock x 6
			RCC_PLLX7 PLL input clock x 7
			RCC_PLLX8 PLL input clock x 8
			RCC_PLLX9 PLL input clock x 9
			RCC_PLLX10 PLL input clock x 10
			RCC_PLLX11 PLL input clock x 11
			RCC_PLLX12 PLL input clock x 12
			RCC_PLLX13 PLL input clock x 13
			RCC_PLLX14 PLL input clock x 14
			RCC_PLLX15 PLL input clock x 15
			RCC_PLLX16 PLL input clock x 16
		*/
	#define RCC_PLL_MUL RCC_PLLX2
	
#endif 
	

#endif 