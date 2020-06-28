#ifndef ATMAGA_regester_H_INCLUDED
#define ATMAGA_regester_H_INCLUDED
#include "STD.h"
/* *************************DIO REGESTERS************************** */
#define DDRC (*(volatile UINT8*)(0x34))
#define PINC (*(volatile UINT8*)(0x33))
#define PORTC (*(volatile UINT8*)(0x35))

#define DDRB (*(volatile UINT8*)(0x37))
#define PINB (*(volatile UINT8*)(0x36))
#define PORTB (*(volatile UINT8*)(0x38))

#endif