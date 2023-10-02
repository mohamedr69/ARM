/***********************************************************/
/* Author	: Mohamed Ramdan 							   */
/* Date 	: 13 AUG 2020								   */
/* Version 	: V01										   */
/***********************************************************/

#include "STD_TYPES.h"
#inclide "BIT_MATH.h"

#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"

void MNVIC_vidEnableInterrupt(u8 Copy_u8IntNumber){
	
	if( Copy_u8IntNumber <=31){
		/*SET_BIT(NVIC_ISER0,Copy_u8IntNumber);*/
		NVIC_ISER0 = (1<<Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else if(Copy_u8IntNumber > 31){
		
		Copy_u8IntNumber -= 32;
		//SET_BIT(NVIC_ISER1,Copy_u8IntNumber);
		NVIC_ISER0 = (1<<Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else{
		
		/*return Error*/
	}
	
}
void MNVIC_vidDisableInterrupt(u8 Copy_u8IntNumber){
	
	
		if( Copy_u8IntNumber <=31){
		/*CLEAR_BIT(NVIC_ISER0,Copy_u8IntNumber);*/
		NVIC_ICER0 = (1<<Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else if(Copy_u8IntNumber > 31){
		
		Copy_u8IntNumber -= 32;
		//CLEAR_BIT(NVIC_ISER1,Copy_u8IntNumber);
		NVIC_ICER1 = (1<<Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else{
		
		/*return Error*/
	}
	
}
void MNVIC_vidSetPendingReg(u8 Copy_u8IntNumber){
	
	if( Copy_u8IntNumber <=31){
		/*SET_BIT(NVIC_ISER0,Copy_u8IntNumber);*/
		NVIC_ISPR0 = (1<<Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else if(Copy_u8IntNumber > 31){
		
		Copy_u8IntNumber -= 32;
		//SET_BIT(NVIC_ISER1,Copy_u8IntNumber);
		NVIC_ISPR1 = (1<<Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else{
		
		/*return Error*/
	}
	
}
void MNVIC_vidClearPendingReg(u8 Copy_u8IntNumber){
	
	if( Copy_u8IntNumber <=31){
		/*SET_BIT(NVIC_ISER0,Copy_u8IntNumber);*/
		NVIC_ICPR0 = (1<<Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else if(Copy_u8IntNumber > 31){
		
		Copy_u8IntNumber -= 32;
		//SET_BIT(NVIC_ISER1,Copy_u8IntNumber);
		NVIC_ICPR1 = (1<<Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else{
		
		/*return Error*/
	}
	
}
u8 MNVIC_vidGetActiveReg(u8 Copy_u8IntNumber){
	u8 Local_result;
	if( Copy_u8IntNumber <=31){
		/*SET_BIT(NVIC_ISER0,Copy_u8IntNumber);*/
		Local_result = GET_BIT(NVIC_IABR0,Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else if(Copy_u8IntNumber > 31){
		
		Copy_u8IntNumber -= 32;
		//SET_BIT(NVIC_ISER1,Copy_u8IntNumber);
		Local_result = SET_BIT(NVIC_IABR1,Copy_u8IntNumber); /*writing 0 has no effect*/
		
	}else{
		
		/*return Error*/
	}
	return Local_result;
}
