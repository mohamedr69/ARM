/*
	Name: 		Mohamed Ramadan Rashad
	Date:		9 OCT 2023
	DRIVER:		SYSTICK
	Version:	V01
*/


#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H

void STK_voidInit();
void STK_voidSetBusyWait(u32 COPY_u32Ticks);
void STK_voidSetIntervalSingle(u32 COPY_u32Ticks,(void)(*CB)(void));
void STK_voidSetIntervalPeriodic(u32 COPY_u32Ticks,(void)(*CB)(void));
void STK_voidStopTimeer();
u32 STK_u32GetElapsedValue();
u32 STK_u32GetRemainingValue();

#endif