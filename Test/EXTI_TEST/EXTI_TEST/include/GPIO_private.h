/*
	Name:		Mohamed Ramadan
	Date:		4 OCT 2023
	VERSION: 	V01
*/
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H
/*	PER ADD = BASE ADD + OFFSET
	PORTA BASE ADD = 0x40010800 
	PORTB BASE ADD = 0x40010C00
	PORTC BASE ADD = 0x40011000
*/
	#define GPIOA_CRL 		*((u32 *)0x40010800) 	/*Offset: 0x00*/
	#define GPIOA_CRH 		*((u32 *)0x40010804)	/*Offset: 0x04*/
	#define GPIOA_IDR 		*((u32 *)0x40010808)	/*Offset: 0x08*/
	#define GPIOA_ODR 		*((u32 *)0x4001080C)	/*Offset: 0x0C*/
	#define GPIOA_BSRR 		*((u32 *)0x400108010)	/*Offset: 0x10*/
	#define GPIOA_BRR 		*((u32 *)0x40010814)	/*Offset: 0x14*/
	#define GPIOA_LCKR 		*((u32 *)0x40010818)	/*Offset: 0x18*/
	
	#define GPIOB_CRL		*((u32 *)0x40010C00)	/*Offset: 0x00*/
	#define GPIOB_CRH		*((u32 *)0x40010C04)	/*Offset: 0x04*/
	#define GPIOB_IDR		*((u32 *)0x40010C08)	/*Offset: 0x08*/
	#define GPIOB_ODR		*((u32 *)0x40010C0C)	/*Offset: 0x0C*/
	#define GPIOB_BSRR		*((u32 *)0x40010C10)	/*Offset: 0x10*/
	#define GPIOB_BRR		*((u32 *)0x40010C14)	/*Offset: 0x14*/
	#define GPIOB_LCKR		*((u32 *)0x40010C18)	/*Offset: 0x18*/
	
	#define GPIOC_CRL		*((u32 *)0x40011000)	/*Offset: 0x00*/
	#define GPIOC_CRH		*((u32 *)0x40011004)	/*Offset: 0x04*/
	#define GPIOC_IDR		*((u32 *)0x40011008)	/*Offset: 0x08*/
	#define GPIOC_ODR		*((u32 *)0x4001100C)	/*Offset: 0x0C*/
	#define GPIOC_BSRR		*((u32 *)0x40011010)	/*Offset: 0x10*/
	#define GPIOC_BRR		*((u32 *)0x40011014)	/*Offset: 0x14*/
	#define GPIOC_LCKR		*((u32 *)0x40011018)	/*Offset: 0x18*/


#endif 