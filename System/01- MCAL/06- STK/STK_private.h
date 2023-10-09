/*
	Name: 		Mohamed Ramadan Rashad
	Date:		9 OCT 2023
	DRIVER:		SYSTICK
	Version:	V01
*/


#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H
/*	Memory mapped
	Base Address:	0xE000E010
*/
	#define STK_CTRL	*((volatile u32 *)(0xE000E010+0x00))  	//Address offset: 0x00 
			#define STK_COUNTFLAG	3
			#define STK_CLKSOURCE	2
			#define STK_TICKINT		1
			#define STK_ENABLE		0
	#define STK_LOAD	*((volatile u32 *)(0xE000E010+0x04))	//Address offset: 0x04
	#define STK_VAL		*((volatile u32 *)(0xE000E010+0x08))	//Address offset: 0x08
	#define STK_CALIB	*((volatile u32 *)(0xE000E010+0x0C))	//Address offset: 0x0C
	
#endif