#ifndef ATMAGA_regester_H_INCLUDED
#define ATMAGA_regester_H_INCLUDED
#include "STD.h"
/* *************************DIO REGESTERS************************** */
#define DDRC (*(volatile Uint8*)(0x34))
#define PINC (*(volatile Uint8*)(0x33))
#define PORTC (*(volatile Uint8*)(0x35))

#define DDRB (*(volatile Uint8*)(0x37))
#define PINB (*(volatile Uint8*)(0x36))
#define PORTB (*(volatile Uint8*)(0x38))

#define DDRD (*(volatile Uint8*)(0x31))
#define PIND (*(volatile Uint8*)(0x30))
#define PORTD (*(volatile Uint8*)(0x32))

#endif