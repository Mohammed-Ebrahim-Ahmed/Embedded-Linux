#include "delay.h"

void DELAY_voidDelayMS (volatile u16 Copy_u16DelayValue)
{

    while(Copy_u16DelayValue--)
    {
        asm volatile (
            "    ldi  r18, 11	\n"
            "    ldi  r19, 99	\n"
            "1:  dec  r19	\n"
            "    brne 1b	\n"
            "    dec  r18	\n"
            "    brne 1b	\n"
        );
    }

}
