/*
 * snakepattern.c
 *
 * Created: 1/31/2018 11:58:20 AM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>

int main(void)
{
    const char length=4;
	const int d=500;
	DDRA=DDRB=DDRC=DDRD=0xff;
	PORTA=PORTB=PORTC=PORTD=0x00;
	for(char i=0;i<length;i++)
	{
		PORTA=(PORTA<<1) +0x01;
		_delay_ms(d);
	}
	for (char i=0;i<8-length;i++)
	{
		PORTA=PORTA<<1;
		_delay_ms(d);
	}
	for(char i=0;i<length;i++)
	{
		PORTA=PORTA<<1;
		PORTB=(PORTB>>1) +0x80;
		_delay_ms(d);
	}
	for (char i=0;i<8-length;i++)
	{
		PORTB=PORTB>>1;
		_delay_ms(d);
	}
	for(char i=0;i<length;i++)
	{
		PORTB=PORTB>>1;
		PORTC=(PORTC<<1) +0x01;
		_delay_ms(d);
	}
	for (char i=0;i<8-length;i++)
	{
		PORTC=PORTC<<1;
		_delay_ms(d);
	}
	for(char i=0;i<length;i++)
	{
		PORTC=PORTC<<1;
		PORTD=(PORTD>>1) +0x80;
		_delay_ms(d);
	}
	for (char i=0;i<8;i++)
	{
		PORTD=PORTD>>1;
		_delay_ms(d);
	}
}