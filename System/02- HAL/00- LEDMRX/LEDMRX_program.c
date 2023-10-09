/*
	Name: 		Mohamed Ramadan Rashad
	Date:		9 OCT 2023
	DRIVER:		LED MATRIX
	Version:	V01
*/

#include "BIT_MATH.h"
#include "STD_TYPES.h"


#include "LEDMRX_interface.h"
#include "LEDMRX_private.h"
#include "LEDMRX_config.h"

void LEDMRX_voidInit(void){
	
	
	GPIO_voidSetMode(LEDMRX_ROW0_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_ROW1_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_ROW2_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_ROW3_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_ROW4_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_ROW5_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_ROW6_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_ROW7_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_COL0_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_COL1_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_COL2_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_COL3_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_COL4_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_COL5_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_COL6_PIN,Output10MHZ);
	GPIO_voidSetMode(LEDMRX_COL7_PIN,Output10MHZ);
	GPIO_voidSetOutput(LEDMRX_ROW0_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_ROW1_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_ROW2_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_ROW3_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_ROW4_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_ROW5_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_ROW6_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_ROW7_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_COL0_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_COL1_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_COL2_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_COL3_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_COL4_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_COL5_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_COL6_PIN,PUSH_PULL);
	GPIO_voidSetOutput(LEDMRX_COL7_PIN,PUSH_PULL);
	
}

void LEDMRX_voidDisplay(u8 *COPY_u8Data){
	while(1){
	DisableAllCols();
	SetRowValues(COPY_u8Data[0]);
	GPIO_voidSetValue(LEDMRX_COL0_PIN,Low);
	STK_voidSetBusyWait(2500);
	
	DisableAllCols();
	SetRowValues(COPY_u8Data[1]);
	GPIO_voidSetValue(LEDMRX_COL1_PIN,Low);
	STK_voidSetBusyWait(2500);
	
	DisableAllCols();
	SetRowValues(COPY_u8Data[2]);
	GPIO_voidSetValue(LEDMRX_COL2_PIN,Low);
	STK_voidSetBusyWait(2500);
	
	DisableAllCols();
	SetRowValues(COPY_u8Data[3]);
	GPIO_voidSetValue(LEDMRX_COL3_PIN,Low);
	STK_voidSetBusyWait(2500);
	
	DisableAllCols();
	SetRowValues(COPY_u8Data[4]);
	GPIO_voidSetValue(LEDMRX_COL4_PIN,Low);
	STK_voidSetBusyWait(2500);
	
	DisableAllCols();
	SetRowValues(COPY_u8Data[5]);
	GPIO_voidSetValue(LEDMRX_COL5_PIN,Low);
	STK_voidSetBusyWait(2500);
	
	DisableAllCols();
	SetRowValues(COPY_u8Data[6]);
	GPIO_voidSetValue(LEDMRX_COL6_PIN,Low);
	STK_voidSetBusyWait(2500);
	
	DisableAllCols();
	SetRowValues(COPY_u8Data[7]);
	GPIO_voidSetValue(LEDMRX_COL7_PIN,Low);
	STK_voidSetBusyWait(2500);
	}
}
static void DisableAllCols(void){
		GPIO_voidSetValue(LEDMRX_COL0_PIN,High);
		GPIO_voidSetValue(LEDMRX_COL1_PIN,High);
		GPIO_voidSetValue(LEDMRX_COL2_PIN,High);
		GPIO_voidSetValue(LEDMRX_COL3_PIN,High);
		GPIO_voidSetValue(LEDMRX_COL4_PIN,High);
		GPIO_voidSetValue(LEDMRX_COL5_PIN,High);
		GPIO_voidSetValue(LEDMRX_COL6_PIN,High);
		GPIO_voidSetValue(LEDMRX_COL7_PIN,High);
}
static void SetRowValues(u8 Copy_u8Data){
		u8 Local_u8Bit;
		Local_u8Bit = GET_BIT(COPY_u8Data,0);
		GPIO_voidSetValue(LEDMRX_ROW0_PIN,Local_u8Bit);
		
		Local_u8Bit = GET_BIT(COPY_u8Data,1);
		GPIO_voidSetValue(LEDMRX_ROW1_PIN,Local_u8Bit);
		
		Local_u8Bit = GET_BIT(COPY_u8Data,2);
		GPIO_voidSetValue(LEDMRX_ROW2_PIN,Local_u8Bit);
		
		Local_u8Bit = GET_BIT(COPY_u8Data,3);
		GPIO_voidSetValue(LEDMRX_ROW3_PIN,Local_u8Bit);
		
		Local_u8Bit = GET_BIT(COPY_u8Data,4);
		GPIO_voidSetValue(LEDMRX_ROW4_PIN,Local_u8Bit);
		
		Local_u8Bit = GET_BIT(COPY_u8Data,5);
		GPIO_voidSetValue(LEDMRX_ROW5_PIN,Local_u8Bit);
		
		Local_u8Bit = GET_BIT(COPY_u8Data,6);
		GPIO_voidSetValue(LEDMRX_ROW6_PIN,Local_u8Bit);
		
		Local_u8Bit = GET_BIT(COPY_u8Data,7);
		GPIO_voidSetValue(LEDMRX_ROW7_PIN,Local_u8Bit);
	
	
}