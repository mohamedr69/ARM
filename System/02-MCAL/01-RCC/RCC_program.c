/***
	Author: Mohamed Ramadan
	Data  : 2 October 2023
	Version: V01
***/

/*Libraries includes*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"

/*Driver includes*/
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void RCC_voidEnableClock(u8 Copy_u8BusId,u8 Copy_u8PerId){
	/*Input validation: */
	if(Copy_u8PerId <= 31){
		switch (Copy_u8BusId){
			case RCC_AHB:  SET_BIT(RCC_AHBENR,Copy_u8PerId);	break;
			case RCC_APB1: SET_BIT(RCC_APB1ENR,Copy_u8PerId);	break;
			case RCC_APB2: SET_BIT(RCC_APB2ENR,Copy_u8PerId);	break;
			default:/*return error*/							break;
		}
	}else{
		/*return Error*/
	}
	
}
void RCC_voidDisableClock(u8 Copy_u8BusId,u8 Copy_u8PerId){
	/*Input validation: */
	if(Copy_u8PerId <= 31){
		switch (Copy_u8BusId){
			case RCC_AHB:  CLR_BIT(RCC_AHBENR,Copy_u8PerId);	break;
			case RCC_APB1: CLR_BIT(RCC_APB1ENR,Copy_u8PerId);	break;
			case RCC_APB2: CLR_BIT(RCC_APB2ENR,Copy_u8PerId);	break;
			default:/*return error*/							break;
		}
	}else{
		/*return Error*/
	}
	
}