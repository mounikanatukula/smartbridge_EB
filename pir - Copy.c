/*
 * GccApplication4.c
 *
 * Created: 13-05-2019 10:47:51
 * Author : MOUNIKA
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>

#define LED_OUTPUT PORTB
#define PIR_input PINC


int main(void)
{
    DDRC=0x00;
	DDRB=0xff;
    while (1) 
    {
		LED_OUTPUT=PIR_input;
    }
}

