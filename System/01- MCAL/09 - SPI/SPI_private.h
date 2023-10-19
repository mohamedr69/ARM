/*
	Name	:		Mohamed Ramadan
	Date	:		19 OCT 2023
	Driver	:		SPI
	VERSION	: 		V01
	
*/
#ifndef SPI_PRIVATE_H
#define SPI_PRIVATE_H
/*Base Address = 0x40013000*/
typedef struct{
	volatile u32 SPI_CR1;
	volatile u32 SPI_CR2;
	volatile u32 SPI_SR;
	volatile u32 SPI_DR;
	volatile u32 SPI_CRCPR;
	volatile u32 SPI_RXCRCR;
	volatile u32 SPI_TXCRCR;
	volatile u32 SPI_I2SCFGR;
	volatile u32 SPI_I2SPR;
}SPI1_REG;

#define SPI1  ((volatile SPI1_REG*)0x40013000)

#endif