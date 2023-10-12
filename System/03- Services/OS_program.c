#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_interface.h"

#include "OS_interface.h"
#include "OS_private.h"
#include "OS_config.h"

#define NULL (void*)0

void OS_voidCreateTask(u8 COPY_u8Id, u16 COPY_u16priodicity, (void)(*ptr)(void),u8 COPY_u8firstDelay){
	
	OS_Tasks[COPY_u8Id].priodicity = COPY_u16priodicity;
	OS_Tasks[COPY_u8Id].Fptr	= ptr;
	OS_Tasks[COPY_u8Id].firstDelay = COPY_u8firstDelay;
}
void OS_voidStart(void){
	
	/*Init*/
	STK_voidInit();
	/*Tick => 1ms*/
	/*AHB/8	HSE	1000 micro  === 1 ms*/
	STK_voidSetIntervalPeriodic(1000,OS_voidScheduler);
}
volatile u16 GLOBAL_u16TickCounts =0;
static void OS_voidScheduler(){
	
	for(u8 i=0;i<NUMBER_OF_TASKS;i++){
		if((GLOBAL_u16TickCounts % OS_Tasks[i].priodicity) == 0){
			OS_Tasks[i].Fptr();
		}
	}
	GLOBAL_u16TickCounts++;
}

static void OS_voidScheduler(){
	
	for(u8 i=0;i<NUMBER_OF_TASKS;i++){
		if( (OS_Tasks[i].Fptr != NULL)&& (OS_Tasks[i].state == TASK_READY)){
			if(OS_Tasks[i].firstDelay == 0){
				OS_Tasks[i].firstDelay = OS_Tasks[i].priodicity -1;
				OS_Tasks[i].Fptr();
			}else{
				OS_Tasks[i].firstDelay--;
			}
		}
	}
	GLOBAL_u16TickCounts++;
}