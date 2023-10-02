/***********************************************************/
/* Author	: Mohamed Ramdan 							   */
/* Date 	: 2 AUG 2020								   */
/* Version 	: V01										   */
/***********************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H
/*Register Definition */

/*GPIO A base address: 0x4001 0800 */

#define GPIOA_CRL 			*((u32 *)0x40010800 ) 
#define GPIOA_CRH			*((u32 *)0x40010804 )
#define GPIOA_IDR			*((u32 *)0x40010808 ) 	
#define GPIOA_ODR			*((u32 *)0x4001080C )
 
/*GPIO B base address:  0x4001 0C00 */

#define GPIOB_CRL 			*((u32 *)0x40010C00 ) 
#define GPIOB_CRH			*((u32 *)0x40010C04 )
#define GPIOB_IDR			*((u32 *)0x40010C08 ) 	
#define GPIOB_ODR			*((u32 *)0x40010C0C )
 
/*GPIO C  base address: 0x4001 1000 */

#define GPIOC_CRL 			*((u32 *)0x40011000 ) 
#define GPIOC_CRH			*((u32 *)0x40011004 )
#define GPIOC_IDR			*((u32 *)0x40011008 ) 	
#define GPIOC_ODR			*((u32 *)0x4001100C ) 
		
#endif 