/*
 * GccApplication8.c
 *
 * Created: 14-05-2019 09:36:28
 * Author : MOUNIKA
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#include<stdlib.h>



int main(void)
{
   DDRA=0b11111111;
    while (1) 
    {
		PORTA=0b01111110;
		_delay_ms(100);
		PORTA=0b00110000;
		_delay_ms(100);
		PORTA=0b01101101;
		_delay_ms(100);
		PORTA=0b01111001;
		_delay_ms(100);
		PORTA=0b00110011;
		_delay_ms(100);
		PORTA=0b01011011;
		_delay_ms(100);
		PORTA=0b01011111;
		_delay_ms(100);
		PORTA=0b01110000;
		_delay_ms(100);
		PORTA=0b01111111;
		_delay_ms(100);
		PORTA=0b01111001;
		_delay_ms(100);		
    }
}

