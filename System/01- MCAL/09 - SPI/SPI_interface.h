/*
	Name	:		Mohamed Ramadan
	Date	:		19 OCT 2023
	Driver	:		SPI
	VERSION	: 		V01
	
*/
#ifndef SPI_INTERFACE_H
#define SPI_INTERFACE_H

void SPI1_voidInit();
void SPI1_SendReciveSynch(u8 Copy_u8DataToTransmit,u8 *Copy_u8PDataToReceive);
void SPI1_SendReciveAsynch(u8 Copy_u8DataToTransmit,void (*CallBack)(u8));

#endif