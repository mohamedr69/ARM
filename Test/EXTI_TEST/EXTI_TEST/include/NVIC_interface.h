/*
	Name: 		Mohamed Ramadan Rashad
	Date:		5 OCT 2023
	Version:	V01
*/

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H
/*

priorities
0b011 0bxxxx  [7:4] None  16 None
0b100 0bxxx.y [7:5] [4]   8   2
0b101 0bxx.yy [7:6] [5:4] 4   4
0b110 0bx.yyy [7]   [6:4] 2   8
0b111 0b.yyyy None [7:4]  None 16
*/
#define GROUP3	0x05FA0300  // 4 BITS 4 GROUP -> IPR(4GROUPS)
#define GROUP4	0x05FA0400  // 3	BITS FOR GROUP 1 BIT FOR SUB
#define GROUP5	0x05FA0500  // 2	BITS FOR GROUP 2 BIT FOR SUB
#define GROUP6	0x05FA0600	// 1	BITS FOR GROUP 3 BIT FOR SUB
#define GROUP7	0x05FA0700	// 0	BITS FOR GROUP 4 BIT FOR SUB

void NVIC_voidEnableInterrupt	(u8 COPY_u8IntNum);
void NVIC_voidDisableInterrupt	(u8 COPY_u8IntNum);
void NVIC_voidSetPendingFlag	(u8 COPY_u8IntNum);
void NVIC_voidClrPendingFlag	(u8 COPY_u8IntNum);
u8 NVIC_u8ReadActiveFlag		(u8 COPY_u8IntNum);
void NVIC_voidSetPriority(s8 COPY_s8PriorityId, u8 COPY_u8GroupPriority, u8 COPY_u8SubGroup, u32 COPY_u32Group );
#endif