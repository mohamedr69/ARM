/*
	Name: 		Mohamed Ramadan Rashad
	Date:		5 OCT 2023
	Version:	V01
*/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"

void NVIC_voidEnableInterrupt(u8 COPY_u8IntNum){
	/*DATA VALIDATION*/
	if(COPY_u8IntNum < 32){
		//SET_BIT(NVIC_ISER0,COPY_u8IntNum); more ASM instructions 
		NVIC_ISER0 = (1 << COPY_u8IntNum); // 0-> has no effect
	}else if(COPY_u8IntNum<=59){
		COPY_u8IntNum = COPY_u8IntNum - 32;
		//SET_BIT(NVIC_ISER1,COPY_u8IntNum); more ASM instructions 
		NVIC_ISER1 = (1 << COPY_u8IntNum); //0-> has no effect
	}else{
		
		/*ERROR:*/
		
	}
	
}
void NVIC_voidDisableInterrupt(u8 COPY_u8IntNum){
	/*DATA VALIDATION*/
	if(COPY_u8IntNum < 32){
		//SET_BIT(NVIC_ICER0,COPY_u8IntNum); more ASM instructions
		NVIC_ICER0 = (1 << COPY_u8IntNum);// 0-> has no effect
	}else if(COPY_u8IntNum<=59){
		COPY_u8IntNum = COPY_u8IntNum - 32;
		//SET_BIT(NVIC_ICER0,COPY_u8IntNum);more ASM instructions
		NVIC_ICER1 = (1 << COPY_u8IntNum);// 0-> has no effect
	}else{
		
		/*ERROR:*/
	}
	
}
void NVIC_voidSetPendingFlag(u8 COPY_u8IntNum){
	
		if(COPY_u8IntNum < 32){
		//SET_BIT(NVIC_ISPR0,COPY_u8IntNum); more ASM instructions
		NVIC_ISPR0 = (1 << COPY_u8IntNum);// 0-> has no effect
	}else if(COPY_u8IntNum<=59){
		COPY_u8IntNum = COPY_u8IntNum - 32;
		//SET_BIT(NVIC_ISPR1,COPY_u8IntNum);more ASM instructions
		NVIC_ISPR1 = (1 << COPY_u8IntNum);// 0-> has no effect
	}else{
		
		/*ERROR:*/
	}
	
}
void NVIC_voidClrPendingFlag(u8 COPY_u8IntNum){
	
			if(COPY_u8IntNum < 32){
		//SET_BIT(NVIC_ICPR0,COPY_u8IntNum); more ASM instructions
		NVIC_ICPR0 = (1 << COPY_u8IntNum);// 0-> has no effect
	}else if(COPY_u8IntNum<=59){
		COPY_u8IntNum = COPY_u8IntNum - 32;
		//SET_BIT(NVIC_ICPR1,COPY_u8IntNum);more ASM instructions
		NVIC_ICPR1 = (1 << COPY_u8IntNum);// 0-> has no effect
	}else{
		
		/*ERROR:*/
	}
	
}
u8 NVIC_u8ReadActiveFlag(u8 COPY_u8IntNum){
	u8 Active_Flag = 0;
	if(COPY_u8IntNum < 32){
		Active_Flag = GET_BIT(NVIC_IABR0,COPY_u8IntNum);
	}else if(COPY_u8IntNum<=59){
		COPY_u8IntNum = COPY_u8IntNum - 32;
		Active_Flag = GET_BIT(NVIC_IABR1,COPY_u8IntNum);
	}else{
		
		/*ERROR:*/
	}
	return Active_Flag;
}