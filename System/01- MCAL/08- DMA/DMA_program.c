#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DMA_interface.h"
#include "DMA_private.h"
#include "DMA_config.h"

void DMA_voidInit(void){
		/*
		1- memory to memory 1
		2- very high 11 
		3- source size,dest size = 32bit 10 10
		4- SINC, DINC 11
		5- NO CIRCULAR 0
		6- Direction 1
		7- trans int enable 0010
		0111101011010010
		00007AD3
	*/
	
	#if CHANNEL_ID == 1
		DMA->ch[0].CCR = 0x00007AD2;
	
	
}
void DMA_voidStart(u32 *Copy_Pu32SourceAdd,u32 *Copy_Pu32DestinationAdd,u16 Copy_u16BlockLength){
	/*Make sure channel is disabled*/
	CLR_BIT(DMA->ch[0].CRR,0);
	/*write address*/
	DMA->ch[0].CPAR = Copy_Pu32SourceAdd;
	DMA->ch[0].CMAR = Copy_Pu32DestinationAdd;
	DMA->ch[0].DMA_CNDTR = (u32)Copy_u16BlockLength;
	
	SET_BIT(DMA->ch[0].CRR,0);
}

