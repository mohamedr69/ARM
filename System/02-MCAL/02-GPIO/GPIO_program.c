#include "STD_TYPES.h"
#include "BIT_MATH"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"



void GPIO_voidSetPinDirection(u8 copy_u8Port,u8 copy_u8PIN, u8 copy_u8Mode){
	switch(copy_u8Port)
	{
		case GPIOA : if(copy_u8PIN <= 7){
						GPIOA_CRL &= ~((0b1111)<<(copy_u8PIN*4));     /*clear mode*/
						GPIOA_CRL |= ((copy_u8Mode)<<(copy_u8PIN*4)); /*set mode*/
					}else if(copy_u8PIN <= 15){
						copy_u8PIN = copy_u8PIN - 8;
						GPIOA_CRH &= ~((0b1111)<<(copy_u8PIN*4));     /*clear mode*/
						GPIOA_CRH |= ((copy_u8Mode)<<(copy_u8PIN*4)); /*set mode*/
					}break;
		case GPIOB : if(copy_u8PIN <= 7){
						GPIOB_CRL &= ~((0b1111)<<(copy_u8PIN*4));     /*clear mode*/
						GPIOB_CRL |= ((copy_u8Mode)<<(copy_u8PIN*4)); /*set mode*/
					}else if(copy_u8PIN <= 15){
						copy_u8PIN = copy_u8PIN - 8;
						GPIOB_CRH &= ~((0b1111)<<(copy_u8PIN*4));     /*clear mode*/
						GPIOB_CRH |= ((copy_u8Mode)<<(copy_u8PIN*4)); /*set mode*/
					}break;
		case GPIOC : if(copy_u8PIN <= 7){
						GPIOC_CRL &= ~((0b1111)<<(copy_u8PIN*4));     /*clear mode*/
						GPIOC_CRL |= ((copy_u8Mode)<<(copy_u8PIN*4)); /*set mode*/
					}else if(copy_u8PIN <= 15){
						copy_u8PIN = copy_u8PIN - 8;
						GPIOC_CRH &= ~((0b1111)<<(copy_u8PIN*4));     /*clear mode*/
						GPIOC_CRH |= ((copy_u8Mode)<<(copy_u8PIN*4)); /*set mode*/
					}break;
		
	}
	
}

void GPIO_voidSetPinValue(u8 copy_u8Port,u8 copy_u8PIN, u8 copy_u8Value){
	switch(copy_u8Port){
		
		case GPIOA : if(copy_u8Value == HIGH){
						SET_BIT(GPIOA_ODR,copy_u8PIN);
					}else if(copy_u8Value == LOW){
						CLR_BIT(GPIOA_ODR,copy_u8PIN);
					}break;
		case GPIOB : if(copy_u8Value == HIGH){
						SET_BIT(GPIOB_ODR,copy_u8PIN);
					}else if(copy_u8Value == LOW){
						CLR_BIT(GPIOB_ODR,copy_u8PIN);
					}break;
		case GPIOC : if(copy_u8Value == HIGH){
						SET_BIT(GPIOC_ODR,copy_u8PIN);
					}else if(copy_u8Value == LOW){
						CLR_BIT(GPIOC_ODR,copy_u8PIN);
					}break;
	}
	
	
	
}

u8 GPIO_u8GetPinValue(u8 copy_u8Port,u8 copy_u8PIN){
		switch(copy_u8Port){
		u8 out = 0;
		case GPIOA : out = GET_BIT(GPIOA_IDR,copy_u8PIN);break;
		case GPIOB : out = GET_BIT(GPIOA_IDR,copy_u8PIN);break;
		case GPIOC : out = GET_BIT(GPIOA_IDR,copy_u8PIN);break;

	    }
		return out;
}