/*
	Name: 		Mohamed Ramadan Rashad
	Date:		5 OCT 2023
	DRIVER:		InfraRed NEC
	Version:	V01
*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"


#include "EXTI_interface.h"
#include "GPIO_interface.h"
#include "NVIC_interface.h"
#include "RCC_interface.h"

#include "IR_interface.h"
#include "IR_private.h"
#include "IR_config.h"
volatile u8 	GLOBAL_u8StFlag = 0;
volatile u32 	GLOBAL_u32FrameData[50] ={0};
volatile u8 	GLOBAL_u8EdgeCounter = 0;
volatile u8 	GLOBAL_u8Data=0;
void IR_voidInit(){
	/*RCC INIT*/
	RCC_voidInit();
	RCC_voidEnableClock(RCC_APB2,2);
	/*I/O INIT*/
	GPIO_voidSetMode(PORTA,PIN3,Input);
	GPIO_voidSetInput(PORTA,PIN3,Floating);
	
	GPIO_voidSetMode(RGB_RED,Output2MHZ);
	GPIO_voidSetOutput(RGB_RED,PUSH_PULL);
	
	GPIO_voidSetMode(RGB_GREEN,Output2MHZ);
	GPIO_voidSetOutput(RGB_GREEN,PUSH_PULL);
	
	GPIO_voidSetMode(RGB_BLUE,Output2MHZ);
	GPIO_voidSetOutput(RGB_BLUE,PUSH_PULL);
	
	/*EXTI CNF*/
	EXTI_voidSetCallBack(IR_voidGetFrame);
	EXTI_voidInit();
	
	/*NVIC ENABLE*/
	NVIC_voidInit();
	NVIC_voidEnableInterrupt(6);
	
	/*SYSTICK ENABLE AHB/8 = 1MHZ*/
	STK_voidInit();

}
void IR_voidGetFrame(){
	//asm("NOP");//NO OPERATION
	if(GLOBAL_u8StFlag == 0){
		STK_voidSetIntervalSingle(1000000,IR_voidTakeAction); //1,000,000 1SEC
		GLOBAL_u8StFlag = 1;
	}
	else{
		GLOBAL_u32FrameData[GLOBAL_u8EdgeCounter++] = STK_u32GetElapsedValue();
		STK_voidSetIntervalSingle(1000000,IR_voidTakeAction); //1,000,000 1SEC
	}
}
void IR_voidTakeAction(void){
	//asm("NOP");
	u8 LOCAL_u8i;
	GLOBAL_u8Data = 0;
	if((GLOBAL_u32FrameData[0]>=10000) && (GLOBAL_u32FrameData[0] <= 14000)){
		
		for(LOCAL_u8i=0;LOCAL_u8i<8;LOCAL_u8i++){
			if((GLOBAL_u32FrameData[17 + LOCAL_u8i] >= 2000) && (GLOBAL_u32FrameData[17 + LOCAL_u8i]<= 2300)){
				SET_BIT(GLOBAL_u8Data,LOCAL_u8i);
			}else{
				CLR_BIT(GLOBAL_u8Data,LOCAL_u8i);
			}
			IR_voidRGB();
		}
	}else{		
		/*ERROR: INVALID FRAME*/
	}
	GLOBAL_u32FrameData[0] =0;
	GLOBAL_u8StFlag =0 ;
	GLOBAL_u8Data =0;
}
void IR_voidRGB(void){
	switch (GLOBAL_u8Data){
		case 69:	GPIO_voidSetValue(RGB_RED,High);break;
		case 70:	GPIO_voidSetValue(RGB_GREEN,High);break;
		case 71:	GPIO_voidSetValue(RGB_BLUE,High);break;
		default:break;
	}
	
}