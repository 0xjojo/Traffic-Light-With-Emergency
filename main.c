/*
 * GccApplication1.c
 *
 * Created: 10/9/2022 9:35:12 PM
 * Author : gehad
 */ 
#define   F_CPU 16000000UL
//#include <avr/io.h>
#include "Bit_Math.h"
#include "STD_types.h"
#include "DIO_int.h"
#include "LED_int.h"
#include "util/delay.h"
#include "EXT.h"
#include <avr/interrupt.h>
int main(void)
{
	
    ExternalINT0_Init();
    while (1) 
    {
		LED_voidLedOn(0);
		_delay_ms(300);
		LED_voidLedOff(0);
		LED_voidLedOn(1);
		_delay_ms(300);
		LED_voidLedOff(1);
		LED_voidLedOn(2);
		_delay_ms(300);
		LED_voidLedOff(2);
		
		
    }
}
ISR(INT0_vect)
{
	cli();
	LED_voidLedOff(1);
	LED_voidLedOff(2);
	LED_voidLedOn(0);
	_delay_ms(2000);
	
	sei();
}