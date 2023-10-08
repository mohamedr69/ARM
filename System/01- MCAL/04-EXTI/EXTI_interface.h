/*
	Name: 		Mohamed Ramadan Rashad
	Date:		5 OCT 2023
	DRIVER:		EXTERNAL INTERRUPT
	Version:	V01
*/
#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H

void EXTI_voidInit();
void EXTI_voidEnableEXTI(u8 COPY_u8Line);
void EXTI_voidDisableEXTI(u8 COPY_u8Line);
void EXTI_voidSWTrigger(u8 COPY_u8Line);
void EXTI_voidSetSignalLatch(u8 COPY_u8Line,u8 COPY_u8Mode);
#endif