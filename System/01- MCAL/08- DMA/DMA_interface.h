/*
	Name:		Mohamed Ramadan
	Date:		12 OCT 2023
	Driver:		DMA
	Version:	V1

*/

#ifndef DMA_INTERFACE_H
#define DMA_INTERFACE_H

void DMA_voidInit(void);
void DMA_voidStart(u32 *Copy_Pu32SourceAdd,u32 *Copy_Pu32DestinationAdd,u16 Copy_u16BlockLength);

#endif