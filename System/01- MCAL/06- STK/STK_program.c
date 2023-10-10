/*
	Name: 		Mohamed Ramadan Rashad
	Date:		9 OCT 2023
	DRIVER:		SYSTICK
	Version:	V01
*/

#include "BIT_MATH.h"
#include "STD_TYPES.h"


#include "STK_interface.h"
#include "STK_private.h"
#include "STK_config.h"

(void)(*CALLBACK_SINGLE)(void);
(void)(*CALLBACK_PERIODIC)(void);

void STK_voidInit(){
	#if STK_CLK_SOURCE == STK_AHB
		SET_BIT(STK_CTRL,STK_CLKSOURCE);
	
	#elif STK_CLK_SOURCE == STK_AHB_DIV_8
		CLR_BIT(STK_CTRL,STK_CLKSOURCE);
	
	#endif	
	CLR_BIT(STK_CTRL,STK_TICKINT);
	CLR_BIT(STK_CTRL,STK_ENABLE);
}
// SYNCH FUNCTION
void STK_voidSetBusyWait(u32 COPY_u32Ticks){
	STK_LOAD = COPY_u32Ticks;
	SET_BIT(STK_CTRL,STK_TICKINT);
	while(!GET_BIT(STK_CTRL,STK_COUNTFLAG));
}

void STK_voidSetIntervalSingle(u32 COPY_u32Ticks,(void)(*CB)(void)){
	/*Disble timer*/
	CLR_BIT(STK_CTRL,0);
	STK_VAL = COPY_u32Ticks;
	STK_LOAD = COPY_u32Ticks;
	CALLBACK_SINGLE = CB;
	SET_BIT(STK_CTRL,STK_TICKINT);
	SET_BIT(STK_CTRL,STK_ENABLE);
}
void STK_voidSetIntervalPeriodic(u32 COPY_u32Ticks,(void)(*CB)(void)){
	STK_LOAD = COPY_u32Ticks;
	CALLBACK_PERIODIC = CB;
	SET_BIT(STK_CTRL,STK_TICKINT);
	SET_BIT(STK_CTRL,STK_ENABLE);
}
void STK_voidStopTimeer(){
	CLR_BIT(STK_CTRL,STK_TICKINT);
	CLR_BIT(STK_CTRL,STK_ENABLE);
	STK_LOAD= 0;
}
u32 STK_u32GetElapsedValue(){
	return (STK_LOAD - STK_VAL);
}
u32 STK_u32GetRemainingValue(){
	return STK_VAL;
	
}
void SysTick_Handler(void){
	if(CALLBACK_SINGLE != NULL){
		CALLBACK_SINGLE = NULL;
		STK_voidStopTimeer();
		CALLBACK_SINGLE();
	}else if(CALLBACK_PERIODIC != NULL){
		CALLBACK_PERIODIC();
	}
}