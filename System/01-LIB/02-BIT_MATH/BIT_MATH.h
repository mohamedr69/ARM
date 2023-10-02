/***
	Author: Mohamed Ramadan
	Data  : 2 October 2023
	Version: V01
***/

#ifndef BIT_MATH_H
#define BIT_MATH_H
	
	#define SET_BIT(REG,PIN) REG |=  (1<<PIN)
	#define CLR_BIT(REG,PIN) REG &= ~(1<<PIN)
	#define TOG_BIT(REG,PIN) REG ^=  (1<<PIN)
	#define GET_BIT(REG,PIN)	((REG&(1<<PIN))>>PIN) 

#endif 