/***********************************************************/
/* Author	: Mohamed Ramdan 							   */
/* Date 	: 13 AUG 2020								   */
/* Version 	: V01										   */
/***********************************************************/

#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H
/* BASE ADD: 0xE000E100*/

#define NVIC_ISER0 *((u32*)0xE000E100)/*enble ext int from 0-31*/ 
#define NVIC_ISER1 *((u32*)0xE000E104)/*enable exr int from 32-63*/
#define NVIC_ICER0 *((u32*)0xE000E180)/*disable exr int from 32-63*/
#define NVIC_ICER1 *((u32*)0xE000E184)/*disable exr int from 32-63*/
#define NVIC_ISPR0 *((u32*0xE000E100))/*enable pending flag from 0-31 for debug*/
#define NVIC_ISPR1 *((u32*)0xE000E108)/*enable pending flag from 0-63 for debug*/
#define NVIC_ICPR0 *((u32*0xE000E180))/*clear pending flag from 0-31 for debug*/
#define NVIC_ICPR1 *((u32*0xE000E184))/*clear pending flag from 0-63 for debug*/
#define NVIC_IABR0 *((voltile u32*)0xE000E184)/*read only active bit 0-31*/
#define NVIC_IABR1 *((voltile u32*)0xE000E204)/*read only active bit 32-63*/


#endif	