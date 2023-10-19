/*
	Name:		Mohamed Ramadan
	Date:		12 OCT 2023
	Driver:		DMA
	Version:	V1

*/

#ifndef DMA_CONFIG_H
#define DMA_CONFIG_H
/*channedl no: 1-7*/
#define CHANNEL_ID	1
/*channel configration:
	Memory to memory mode 
	0 disable
	1 enable
	*/
#define DMA_MEM2MEM	1
/*
	Channel priority level 
	0	LOW 
	1	MEDIUM
	2	HIGH 
	3	VERY HIGH
*/
#define DMA_PL	3
/*
	Memory size
	0 8BITS
	1 16BITS
	2 32BITS
*/
#define DMA_MSIZE	2
/*
	Peripheral size
	0 8BITS
	1 16BITS
	2 32BITS
*/
#define DMA_PSIZE	2
/*
	Memory increment mode
	0 Disable 
	1 Enable
*/
#define DMA_MINC 	1
/*
	Peripheral increment mode
	0 Disable 
	1 Enable
*/
#define DMA_PIN		1
/*
	Circular mode 
	0 disable
	1 enable 
*/
#define DMA_CIRC	0
/*
Data transfer direction
This bit is set and cleared by software.
0: Read from peripheral
1: Read from memory
*/
#define DMA_DIR		1

#endif