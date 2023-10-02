/***********************************************************/
/* Author	: Mohamed Ramdan 							   */
/* Date 	: 13 AUG 2020								   */
/* Version 	: V01										   */
/***********************************************************/

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H
void MNVIC_vidEnableInterrupt(u8 Copy_u8IntNumber);
void MNVIC_vidDisableInterrupt(u8 Copy_u8IntNumber);
void MNVIC_vidSetPendingReg(u8 Copy_u8IntNumber);
void MNVIC_vidClearPendingReg(u8 Copy_u8IntNumber);
u8 MNVIC_vidGetActiveReg(u8 Copy_u8IntNumber);
#endif