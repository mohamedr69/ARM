/*
	Name:		Mohamed Ramadan
	Date:		12 OCT 2023
	Driver:		DMA
	Version:	V1

*/

#ifndef DMA_PRIVATE_H
#define DMA_PRIVATE_H
/*Base Address:	0x40020000*/
typedef struct{
	volatile u32 DMA_CCR;
	volatile u32 DMA_CNDTR;
	volatile u32 DMA_CPAR;
	volatile u32 DMA_CMAR;
	volatile u32 Reserved;
}_structDMAChannel;
typedef struct{
	volatile u32 DMA_ISR;
	volatile u32 DMA_IFCR;
	_structDMAChannel ch[7];
	
}_structDMA;
#define DMA		((volatile _structDMA*)0x40020000)
/*#define DMA_ISR		*((volatile u32*)0x40020000) 		// offset 0x00
#define DMA_IFCR 	*((volatile u32*)(0x40020000+0x04)) // offset 0x04
#define DMA_CCR[]    (volatile u32*)(0x40020000+0x08)	//offset 0x08
#define DMA_CNDTR[]	 (volatile u32*)(0x40020000+0x0C)	//offset 0x0C
#define DMA_CPAR[]	 (volatile u32*)(0x40020000+0x10)	//offset 0x10
#define DMA_CMAR[]	 (volatile u32*)(0x40020000+0x14)	//offset 0x14*/
#endif