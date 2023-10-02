/***
	Author: Mohamed Ramadan
	Data  : 2 October 2023
	Version: V01
***/
#ifndef RCC_PRIVATR_H
#define RCC_PRIVATR_H
	/*Register Definition: */
	/*using define */
	/*STM32F103xx Medium density*/
	/*Boundary address: 0x4002 1000 - 0x4002 13FF*/
	/*Base address: 0x4002 1000 */
	
	#define RCC_CR	  			*((volatile u8*)0x40021000) /*offset 0x00*/ /*clock control*/
	#define RCC_CFGR			*((volatile u8*)0x40021004)	/*offset 0x04*/ /*clock control*/
	#define RCC_CIR				*((volatile u8*)0x40021008)	/*offset 0x08*/
	#define RCC_APB2RSTR		*((volatile u8*)0x4002100C)	/*offset 0x0C*/
	#define RCC_APB1RSTR		*((volatile u8*)0x40021010)	/*offset 0x010*/
	#define RCC_AHBENR			*((volatile u8*)0x40021014)	/*offset 0x14*/ /*clock control*/
	#define RCC_APB2ENR			*((volatile u8*)0x40021018)	/*offset 0x18*/ /*clock control*/
	#define RCC_APB1ENR			*((volatile u8*)0x4002101C)	/*offset 0x1C*/	/*clock control*/
	#define RCC_BDCR			*((volatile u8*)0x40021020)	/*offset 0x20*/
	#define RCC_CSR				*((volatile u8*)0x40021024)	/*offset 0x24*/
	

#endif