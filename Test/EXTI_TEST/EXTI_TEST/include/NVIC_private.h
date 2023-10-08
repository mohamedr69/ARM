/*
	Name: 		Mohamed Ramadan Rashad
	Date:		5 OCT 2023
	Version:	V01
*/

#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H
	/*NVIC is memory mapped:
		ADD RANGES 0xE000E100-0xE000E4EF -> BASE ADD 0xE000E100
		ADD RANGES 0xE000EF00-0xE000EF03 
		CONTROLS EXTERNAL INT 59(STM32F106C8T6)
		
	*/
	#define NVIC_ISER0	*((u32*)0xE000E100) //Interrupt set-enable registers for 0-31 	EXT INT (NVIC ENABLE) 1->Enable 0->No Effect
	#define NVIC_ISER1	*((u32*)0xE000E104) //Interrupt set-enable registers for 32-63 EXT INT (NVIC ENABLE) 1->Enable 0->No Effect
	
	#define NVIC_ICER0	*((u32*)0xE000E180) // Interrupt Clear Enable registers for 0-31 	EXT INT (NVIC Disable) 1->Disable 0->No Effect
	#define NVIC_ICER1	*((u32*)0xE000E184)// Interrupt Clear Enable registers for 32-63 	EXT INT (NVIC Disable) 1->Disable 0->No Effect
	
	#define NVIC_ISPR0	*((u32*)0xE000E200)//Interrupt set pending flag  for 0-31 1->Disable 0->No Effect
	#define NVIC_ISPR1	*((u32*)0xE000E204)//Interrupt set pending flag  for 32-63 1->Disable 0->No Effect
	
	#define NVIC_ICPR0	*((u32*)0xE000E280)//Interrupt clear pending flag  for 0-31 1->Disable 0->No Effect
	#define NVIC_ICPR1	*((u32*)0xE000E284)//Interrupt clear pending flag  for 32-63 1->Disable 0->No Effect
	
	#define NVIC_IABR0	*((volatile u32*)0xE000E300) // Interrupt active bit register for 0-31 read only
	#define NVIC_IABR1	*((volatile u32*)0xE000E300)// Interrupt active bit register for 32-33 read only
	
	#define NVIC_IPR	((volatile u8*)(0xE000E100+0x300))	//interrupt sw priority (no derefernce) accessed by array u8 for byte access
#endif