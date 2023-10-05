/*
	Name: 		Mohamed Ramadan Rashad
	Date:		5 OCT 2023
	Version:	V01
*/

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H



void NVIC_voidEnableInterrupt	(u8 COPY_u8IntNum);
void NVIC_voidDisableInterrupt	(u8 COPY_u8IntNum);
void NVIC_voidSetPendingFlag	(u8 COPY_u8IntNum);
void NVIC_voidClrPendingFlag	(u8 COPY_u8IntNum);
u8 NVIC_u8ReadActiveFlag		(u8 COPY_u8IntNum);
#endif