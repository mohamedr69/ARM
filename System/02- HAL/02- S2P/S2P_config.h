/*
	Name:		Mohamed Ramadan
	Date:		15 OCT 2023
	Driver:		SERIAL TO PARALLEL
	Version:	V1

*/

#ifndef S2P_CONFIG_H
#define S2P_CONFIG_H
/*Write in pairs PORT,PIN*/
#define S2P_SERIAL_DATA	GPIOA,PIN0
#define S2P_SHIFT_CLK	GPIOA,PIN2
#define S2P_STORE_CLK	GPIOA,PIN1

#endif