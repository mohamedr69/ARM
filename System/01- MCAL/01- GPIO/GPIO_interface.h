/*
	Name:		Mohamed Ramadan
	Date:		4 OCT 2023
	VERSION: 	V01
*/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

typedef enum PORTx{
	PORTA,
	PORTB,
	PORTC
{_enuPORTx;

typedef enum PINx{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
	PIN8,
	PIN9,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15,
{_enuPINx;
	
typedef enum MODEx{
	Input,
	Output10MHZ,
	Output2MHZ,
	Output50MHZ
}_enuMODEx;	

typedef enum CNFInX{
	Analog,
	Floating,
	PULL_UP_DOWN,
}_enuCNFInx;
	
typedef enum CNFOutX{
	PUSH_PULL,
	OPEN_DRAIN,
	AF_PUSH_PULL,
	AF_OPEN_DRAIN
}_enuCNFOutx;	

typedef enum Output{
	Low,
	High
}_enuOutput;


void GPIO_voidInit(u8 COPY_u8BusId,u8 COPY_u8PerId);
void GPIO_voidSetMode(_enuPORTx enuPORTx,_enuPINx enuPINx,_enuMODEx enuMODEx);
void GPIO_voidSetInput(_enuPORTx enuPORTx,_enuPINx enuPINx,_enuCNFInx enuCNFInx);
void GPIO_voidSetOutput(_enuPORTx enuPORTx,_enuPINx enuPINx,_enuCNFOutx enuCNFOutx);
void GPIO_voidSetValue(_enuPORTx enuPORTx,_enuPINx enuPINx,_enuOutput enuOutput);
_enuOutput GPIO_u8GetValue(_enuPORTx enuPORTx,_enuPINx enuPINx);
	


#endif 