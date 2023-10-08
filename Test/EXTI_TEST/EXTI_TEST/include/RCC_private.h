/*
	Name:		Mohamed Ramadan
	Date:   	2 OCT 2023
	Version:	V01
*/
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H
/*
	Address = Base_Address + Reg_offset 
	RCC Base_Address = 0x40021000
*/
	/*Medium Density*/
	#define RCC_CR 				*((u32 *)0x40021000) /*Offset:	0*/ /*Control*/
	#define RCC_CFGR 			*((u32 *)0x40021004) /*Offset:	0*/	/*Control*/
	#define RCC_CIR 			*((u32 *)0x40021008) /*Offset:	0*/
	#define RCC_APB1RSTR 		*((u32 *)0x40021010) /*Offset:	0*/
	#define RCC_AHBENR 			*((u32 *)0x40021014) /*Offset:	0*/	/*Control*/
	#define RCC_APB2ENR 		*((u32 *)0x40021018) /*Offset:	0*/	/*Control*/
	#define RCC_APB1ENR 		*((u32 *)0x4002101C) /*Offset:	0*/	/*Control*/
	#define RCC_BDCR 			*((u32 *)0x40021020) /*Offset:	0*/
	#define RCC_CSR 			*((u32 *)0x40021024) /*Offset:	0*/


#endif