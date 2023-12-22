/*
 * GccApplication1.c
 *
 * Created: 11/25/2023 12:26:55 PM
 * Author : midol
 */ 

//#include <avr/io.h>
//#include <util/delay.h>
#include "DIO.h"
#include "PORTS.h"
#include "delay.h"



int main(void)
{
	PORT_voidInit();
	DIO_enumPorts_t LOC_enumPortA = DIO_enumPortA;
	DIO_enumPorts_t LOC_enumPortB = DIO_enumPortB;
	DIO_enumPins_t LOC_enumPin0 = DIO_enumPin0;
	DIO_enumPins_t LOC_enumPin1 = DIO_enumPin1;
	DIO_enumLogicState_t LOC_enumSetLow = DIO_enumLogicLow;
	DIO_enumLogicState_t LOC_enumSetHigh = DIO_enumLogicHigh;
	DIO_enumLogicState_t LOC_enumReadState = DIO_enumLogicLow;
	u16 LOC_u16DelayValue = 100;
	
	//DDRA = 0xff;
	//DDRB = 0x00;
	//PORTB = 0xff;
	volatile u8 LOC_u8Counter = 0;
    /* Replace with your application code */
    while (1) 
    {
		DIO_enumReadState(LOC_enumPortB, LOC_enumPin0, &LOC_enumReadState);
		while(LOC_enumReadState == LOC_enumSetHigh)
		{
			DIO_enumReadState(LOC_enumPortB, LOC_enumPin0, &LOC_enumReadState);
		}
		
		if(LOC_enumReadState == LOC_enumSetLow)
		{
			LOC_u8Counter++;
			PORTA = LOC_u8Counter;
			/*_delay_ms(100);	*/
			DELAY_voidDelayMS(LOC_u16DelayValue);
			while(LOC_enumReadState == LOC_enumSetLow)
			{
				DIO_enumReadState(LOC_enumPortB, LOC_enumPin0, &LOC_enumReadState);
			}
		}
			
		if (LOC_u8Counter == 16)
		{
			LOC_u8Counter = 0;
		}
	}

}


