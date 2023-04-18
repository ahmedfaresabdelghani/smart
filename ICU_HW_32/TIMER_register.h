/*************************************************/
/*************************************************/
/***********   Author : Ahmed Fares   ************/
/***********     Layer : MCAL         ************/
/***********     SWC : TIMER          ************/
/***********     Version : 1.00       ************/
/*************************************************/
/*************************************************/
#ifndef TIMER_REGISTER_H_
#define TIMER_REGISTER_H_
/* *((volatile u8*)address) */

#define TCCR0				*((volatile u8*)0x53)   /*Timer0  Control register*/
#define TCCR0_WGM00			6                       /*waveform generation mode bit0*/
#define TCCR0_COM01			5                       /*Compare Match Output Mode bit0*/
#define TCCR0_COM00			4                       /*Compare Match Output Mode bit0*/
#define TCCR0_WGM01			3                       /*waveform generation mode bit1*/
#define TCCR0_CS02			2                       /*prescaler bit 2*/
#define TCCR0_CS01			1                       /*prescaler bit 1*/
#define TCCR0_CS00			0                       /*prescaler bit 0*/



#define OCR0				*((volatile u8*)0x5C)   /*Output compare register 0 */


#define TIMSK				*((volatile u8*)0x59)   /*Timer mask*/
#define TIMSK_TOIE0    		0                       /*overflow interrupt enable*/
#define TIMSK_OCIE0			1						/*output compare 0  interrupt enable*/
#define TIMSK_TOIE1			2						/*Overflow Interrupt Enable*/
#define TIMSK_OCIE1B		3						/*output compare 0  interrupt enable*/
#define TIMSK_OCIE1A		4						/*Output Compare A Match Interrupt Enable*/
#define TIMSK_TICIE1		5						/* Input Capture Interrupt Enable*/


#define TCCR1A				*((volatile u8*)0x4F)	/*TIMER 1A Control Register 16 bit PWM*/
#define TCCR1A_WGM10		0						/*Waveform Generation Mode*/
#define TCCR1A_WGM11		1						/*Waveform Generation Mode*/
#define TCCR1A_COM1B0		4						/*Compare Output Mode for Channel B*/
#define TCCR1A_COM1B1		5						/*Compare Output Mode for Channel B*/
#define TCCR1A_COM1A0		6						/*Compare Output Mode for Channel A*/
#define TCCR1A_COM1A1		7						/*Compare Output Mode for Channel A*/


#define TCCR1B				*((volatile u8*)0x4E)	/*TIMER 1B Control Register 16 bit PWM*/
#define TCCR1B_CS10			0					    /*Clock Select*/
#define TCCR1B_CS11			1						/*Clock Select*/
#define TCCR1B_CS12			2						/*Clock Select*/
#define TCCR1B_WGM12		3						/*Waveform Generation Mode*/
#define TCCR1B_WGM13		4						/*Waveform Generation Mode*/
#define TCCR1B_ICES1		6						/* Input Capture Edge Select*/


#define TCNT1				*((volatile u16*)0x4C)	/*TCNT1H and TCNT1L � Timer/Counter1*/

#define ICR1				*((volatile u16*)0x46) 	/*Input Capture Register for setting the Top value*/

#define OCR1A				*((volatile u16*)0x4A)	/*Output Compare RegisterA for generating an Output Compare interrupt*/
#define OCR1B				*((volatile u16*)0x48)	/*Output Compare RegisterB for generating an Output Compare interrupt*/


#endif
