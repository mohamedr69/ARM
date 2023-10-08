/*
	Name: 		Mohamed Ramadan Rashad
	Date:		5 OCT 2023
	Driver: 	SYSTEM CONTROL BLOCK (CORE)
	Version:	V01
*/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "SCB_interface.h"
#include "SCB_private.h"
#include "SCB_config.h"

void SCB_voidSetPriority(u32 COPY_u32Group){
	
	// s signed since prority positive/negative 
	// check priority ID internal INT or External INT 
	SCB_AIRCR = COPY_u32Group;
}