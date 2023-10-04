/*
	Name:		Mohamed Ramadan
	Date:		4 OCT 2023
	VERSION: 	V01
*/
/*Libraries*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"

/*GPIO Driver*/
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

void GPIO_voidInit(u8 COPY_u8BusId,u8 COPY_u8PerId){
	RCC_voidEnableClock(COPY_u8BusId,COPY_u8PerId);
}
void GPIO_voidSetMode(_enuPORTx enuPORTx,_enuPINx enuPINx,_enuMODEx enuMODEx){
	switch(enuPORTx){
		case PORTA:
					if(enuPINx<=7){
						GPIOA_CRL &= ~((0b0011) << (enuPINx*4) ); /*Clear bits*/
						GPIOA_CRL |= ((enuMODEx) << (enuPINx*4));/*set mode */
					}else if(enuPINx <= 15){
						enuPINx    = enuPINx-8;
						GPIOA_CRH &= ~((0b0011) << (enuPINx*4) ); /*Clear bits*/
						GPIOA_CRH |= ((enuMODEx) << (enuPINx*4));/*set mode */
					}break;
		case PORTB:	if(enuPINx<=7){
						GPIOB_CRL &= ~((0b0011) << (enuPINx*4) ); /*Clear bits*/
						GPIOB_CRL |= ((enuMODEx) << (enuPINx*4));/*set mode */
					}else if(enuPINx <= 15){
						enuPINx    = enuPINx-8;
						GPIOB_CRH &= ~((0b0011) << (enuPINx*4) ); /*Clear bits*/
						GPIOB_CRH |= ((enuMODEx) << (enuPINx*4));/*set mode */
					}break;
		case PORTC:	if(enuPINx<=7){
						GPIOC_CRL &= ~((0b0011) << (enuPINx*4) ); /*Clear bits*/
						GPIOC_CRL |= ((enuMODEx) << (enuPINx*4));/*set mode */
					}else if(enuPINx <= 15){
						enuPINx    = enuPINx-8;
						GPIOC_CRH &= ~((0b0011) << (enuPINx*4) ); /*Clear bits*/
						GPIOC_CRH |= ((enuMODEx) << (enuPINx*4));/*set mode */
					}break;
		default: /*ERROR*/ break;
		{
}
void GPIO_voidSetInput(_enuPORTx enuPORTx,_enuPINx enuPINx,_enuCNFInx enuCNFInx){
	switch(enuPORTx){
		case PORTA:
					if(enuPINx<=7){
						GPIOA_CRL &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOA_CRL |= ((enuCNFInx) << ((enuPINx*4)<<2));/*set mode */
					}else if(enuPINx <= 15){
						enuPINx    = enuPINx-8;
						GPIOA_CRH &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOA_CRH |= ((enuCNFInx) << ((enuPINx*4))>>2);/*set mode */
					}
		case PORTB:	if(enuPINx<=7){
						GPIOB_CRL &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOB_CRL |= ((enuCNFInx) << ((enuPINx*4)>>2));/*set mode */
					}else if(enuPINx <= 15){
						enuPINx    = enuPINx-8;
						GPIOB_CRH &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOB_CRH |= ((enuCNFInx) << ((enuPINx*4)>>2));/*set mode */
					}
		case PORTC:	if(enuPINx<=7){
						GPIOC_CRL &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOC_CRL |= ((enuCNFInx) << ((enuPINx*4)>>2));/*set mode */
					}else if(enuPINx <= 15){
						enuPINx    = enuPINx-8;
						GPIOC_CRH &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOC_CRH |= ((enuCNFInx) << ((enuPINx*4)>>2));/*set mode */
					}
		default: /*ERROR*/ break;
	}
}
void GPIO_voidSetOutput(_enuPORTx enuPORTx,_enuPINx enuPINx,_enuCNFOutx enuCNFOutx){
	switch(enuPORTx){
		case PORTA:
					if(enuPINx<=7){
						GPIOA_CRL &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOA_CRL |= ((enuCNFOutx) << ((enuPINx*4)>>2));/*set mode */
					}else if(enuPINx <= 15){
						enuPINx    = enuPINx-8;
						GPIOA_CRH &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOA_CRH |= ((enuCNFOutx) << ((enuPINx*4)>>2));/*set mode */
					}
		case PORTB:	if(enuPINx<=7){
						GPIOB_CRL &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOB_CRL |= ((enuCNFOutx) << ((enuPINx*4)>>2));/*set mode */
					}else if(enuPINx <= 15){
						enuPINx    = enuPINx-8;
						GPIOB_CRH &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOB_CRH |= ((enuCNFOutx) << ((enuPINx*4)>>2));/*set mode */
					}
		case PORTC:	if(enuPINx<=7){
						GPIOC_CRL &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOC_CRL |= ((enuCNFOutx) << ((enuPINx*4)>>2));/*set mode */
					}else if(enuPINx <= 15){
						enuPINx    = enuPINx-8;
						GPIOC_CRH &= ~((0b1100) << (enuPINx*4) ); /*Clear bits*/
						GPIOC_CRH |= ((enuCNFOutx) << ((enuPINx*4)>>2));/*set mode */
					}
		default: /*ERROR*/ break;
	}
	
}
void GPIO_voidSetValue(_enuPORTx enuPORTx,_enuPINx enuPINx,_enuOutput enuOutput){
		switch(enuPORTx){
		case PORTA:
					if(enuOutput == High){
						SET_BIT(GPIOA_ODR,enuPINx);
					}else{
						CLR_BIT(GPIOA_ODR,enuPINx);
					}
					break;
		case PORTB:	
					if(enuOutput == High){
						SET_BIT(GPIOB_ODR,enuPINx);
					}else{
						CLR_BIT(GPIOB_ODR,enuPINx);
					}break;
		case PORTC:	
					if(enuOutput == High){
						SET_BIT(GPIOC_ODR,enuPINx);
					}else{
						CLR_BIT(GPIOC_ODR,enuPINx);
					}break;
		default: /*ERROR*/ break;
		{
}

_enuOutput GPIO_u8GetValue(_enuPORTx enuPORTx,_enuPINx enuPINx){
	_enuOutput Output;
	switch(enuPORTx){
		case PORTA:
					Output = GET_BIT(GPIOA_IDR,_enuPINx);break;
		case PORTB:	
					Output = GET_BIT(GPIOB_IDR,_enuPINx);break;
		case PORTC:	
					Output = GET_BIT(GPIOC_IDR,_enuPINx);break;
		default: /*ERROR*/ break;
		{
		return Output;
	}	
}