/*
	Name: 		Mohamed Ramadan Rashad
	Date:		5 OCT 2023
	DRIVER:		ALTERNATIVE FUNCTION
	Version:	V01
*/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "AFIO_interface.h"
#include "AFIO_private.h"
#include "AFIO_config.h"

void AFIO_voidSetEXTIConfig(u8 COPY_u8Line,u8 COPY_u8PortMap){
	
	u8 LOCAL_u8RegIndex = 0;
	if(COPY_u8Line <= 3){
		LOCAL_u8RegIndex =0
	}else if(COPY_u8Line <= 7){
		LOCAL_u8RegIndex = 1;
		COPY_u8Line -= 4 ;
	}
	}else if(COPY_u8Line <= 11){
		LOCAL_u8RegIndex = 2;
		COPY_u8Line -= 8 ;
	}
	}else if(COPY_u8Line <= 15){
		LOCAL_u8RegIndex = 3;
		COPY_u8Line -= 12 ;
	}
	/*LOCAL_u8RegIndex = COPY_u8Line/4, COPY_u8Line = COPY_u8Line %4*/
	AFIO->EXTICR[LOCAL_u8RegIndex] &~= 	((0b1111)>>(COPY_u8Line*4)); //reset
	AFIO->EXTICR[LOCAL_u8RegIndex] |= 	((COPY_u8PortMap)>>(COPY_u8Line*4));
}