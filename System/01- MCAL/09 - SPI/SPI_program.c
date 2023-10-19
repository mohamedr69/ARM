/*
	Name	:		Mohamed Ramadan
	Date	:		19 OCT 2023
	Driver	:		SPI
	VERSION	: 		V01
	
*/
/*Libraries*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "GPIO_interface.h"
/*GPIO Driver*/
#include "SPI_interface.h"
#include "SPI_private.h"
#include "SPI_config.h"


void SPI1_SendReciveSynch(u8 Copy_u8DataToTransmit,u8 *Copy_u8PDataToReceive){
		/*clear for slavle select*/
		GPIO_voidSetValue(SPI_SLAVE_PIN,Low);
		/*data*/
		SPI1->DR = Copy_u8DataToTransmit;
		/*wait busy flag*/
		while(GET_BIT(SPI1->SR,7)==1);
		/*Recieved data*/
		*Copy_u8PDataToReceive = SPI1->DR;
		/*Set for slavle select*/
		GPIO_voidSetValue(SPI_SLAVE_PIN,High);
	
}
void SPI1_SendReciveAsynch(u8 Copy_u8DataToTransmit,void (*CallBack)(u8)){
			/*clear for slavle select*/
		GPIO_voidSetValue(SPI_SLAVE_PIN,Low);
		/*data*/
		SPI1->DR = Copy_u8DataToTransmit;
	
}

void SPI1_IRQHandler(void){
	
	CallBack(SPI1->DR);
	GPIO_voidSetValue(SPI_SLAVE_PIN,High);

}