/*****************************************************************************
 *                                                                           *
 *  uCUnit - A unit testing framework for microcontrollers                   *
 *                                                                           *
 *  (C) 2007 - 2008 Sven Stefan Krauss                                       *
 *                  https://www.ucunit.org                                   *
 *                                                                           *
 *  File        : System.c                                                   *
 *  Description : System dependent functions used by uCUnit.                 *
 *                This file has to be customized for your hardware.         *
 *  Author      : Sven Stefan Krauss                                         *
 *  Contact     : www.ucunit.org                                             *
 *                                                                           *
 *****************************************************************************/

/*
 * This file is part of ucUnit.
 *
 * You can redistribute and/or modify it under the terms of the
 * Common Public License as published by IBM Corporation; either
 * version 1.0 of the License, or (at your option) any later version.
 *
 * uCUnit is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * Common Public License for more details.
 *
 * You should have received a copy of the Common Public License
 * along with uCUnit.
 *
 * It may also be available at the following URL:
 *       http://www.opensource.org/licenses/cpl1.0.txt
 *
 * If you cannot obtain a copy of the License, please contact the
 * author.
 */

#include <avr/io.h>

#include <stdio.h>
#include <stdlib.h>
#include "../System.h"

/* Stub: Initialize your hardware here */
void System_Init(void)
{
	printf("Init of hardware finished.\n");
}

/* Stub: Shutdown your hardware here */
void System_Shutdown(void)
{

	/* asm("\tSTOP"); */
	printf("System shutdown.\n");
	exit(0);
}

/* Stub: Resets the system */
void System_Reset(void)
{
	/* Stub: Reset the hardware */
	/* asm("\tRESET"); */
	printf("System reset.\n");
	exit(0);
}

/* Stub: Put system in a safe state */
void System_Safestate(void)
{
	/* Disable all port pins */
	/* PORTA = 0x0000; */
	/* PORTB = 0x0000; */
	/* PORTC = 0x0000; */

	/* Disable interrupts */
	/* DIE(); */

	/* Put processor into idle state */
	/* asm("\tIDLE"); */
	printf("System safe state.\n");
	exit(0);
}

void uart_putc(char c)
{
	while (!(UCSRA & (1 << UDRE)))
	{
		/* wait until sending is possible */
	}

	UDR = c; /* Writes c to the serial port */
}


/* Stub: Transmit a string to the host/debugger/simulator */
void System_WriteString(char * s)
{
	while(*s)
	{
		uart_putc(*s);
		s++;
	}
}

void System_WriteInt(int n)
{
	/* printf("%i", n); */
}

