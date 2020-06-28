/*
 * GccApplication1.c
 *
 * Created: 6/27/2020 11:06:19 AM
 * Author : bisho
 */ 

//#include <avr/io.h>
#include "Bit_Math.h"
#include <util/delay.h>
#include "STD.h"
#include "ATMAGA_regester.h"
Uint8 putton1_value(void);
Uint8 putton2_value(void);
Uint8 putton3_value(void);
int main(void)
{
	
	DDRC =0x04;
	PORTC=0x04;
	DDRC =0b10000100;
	PORTC=0b10000100;
	DDRD =0b00001000;
	PORTD=0x08;
	/* **********BUTTON************** */
	DDRB=0x00;
	while(1)
	{
		if(putton1_value())
		{
		_delay_ms(5000);
		Toggle_Bit(PORTC,2);
		_delay_ms(5100);
		Toggle_Bit(PORTC,7);
		_delay_ms(5200);
		Toggle_Bit(PORTD,3);
		_delay_ms(2500);
		}
		/***********************/
		if(putton2_value())
		{
		Toggle_Bit(PORTD,3);
		_delay_ms(5100);
		Toggle_Bit(PORTC,7);
		_delay_ms(5200);
		Toggle_Bit(PORTC,2);
		_delay_ms(2500);
		}
		/***********************/
		if(putton3_value())
		{
			Toggle_Bit(PORTC,7);
			_delay_ms(5100);
			Toggle_Bit(PORTC,2);
			_delay_ms(5200);
			Toggle_Bit(PORTD,3);
			_delay_ms(2500);
		}
		else
		{
			PORTC=0x00;
			PORTD=0x00;
		}
	}
}
Uint8 putton1_value(void)
{
	Uint8 putton=0;
	putton=Get_Bit(PINB,0);
	while(Get_Bit(PINB,0));
	_delay_ms(250);
	return putton;
}
Uint8 putton2_value(void)
{
	Uint8 putton=0;
	putton=Get_Bit(PINB,4);
	while(Get_Bit(PINB,4));
	_delay_ms(250);
	return putton;
}
Uint8 putton3_value(void)
{
	Uint8 putton=0;
	putton=Get_Bit(PIND,2);
	while(Get_Bit(PIND,2));
	_delay_ms(250);
	return putton;
}
