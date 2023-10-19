/*
	Name:		Mohamed Ramadan
	Date:		15 OCT 2023
	Driver:		SERIAL TO PARALLEL
	Version:	V1

*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "STK_interface.h"

#include "S2P_interface.h"
#include "S2P_private.h"
#include "S2P_config.h"

void S2P_voidSendSynch(u8 Copy_u8Data){
	
	s8 Local_s8Counter = 0;
	u8 Local_u8Bit;
	for(Local_s8Counter =7;Local_s8Counter>=0;Local_s8Counter--)
	{
		/*Send bit by bit starting from MSB*/
		Local_u8Bit = GIT_BIT(Copy_u8Data,Local_s8Counter);
		GPIO_voidSetPinValue(S2P_SERIAL_DATA,Local_u8Bit);
		GPIO_voidSetPinValue(S2P_SHIFT_CLK,High);
		STK_voidSetBusyWait(1);
		GPIO_voidSetPinValue(S2P_SHIFT_CLK,Low);
		STK_voidSetBusyWait(1);
	}	
	GPIO_voidSetPinValue(S2P_STORE_CLK,High);
	STK_voidSetBusyWait(1);
	GPIO_voidSetPinValue(S2P_STORE_CLK,Low);
	STK_voidSetBusyWait(1);
}