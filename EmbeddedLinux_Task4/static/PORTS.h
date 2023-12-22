#ifndef PORT_H_
#define PORT_H_

    #include "bitmath.h"
    #include "typedef.h"
    #include "registers.h"
    #include "PORTS_cfg.h"

    #if PORT_CFG_TYPE == PRECOMPILE 

        #define PIN_LOW 0
        #define PIN_HIGH 1

        void PORT_voidInit(void);

    #elif PORT_CFG_TYPE == POSTCOMPILE 


        typedef enum{
            PORT_enumNotOkay,
            PORT_enumOkay
        }PORT_enumErrorStatus_t;

        typedef enum{
            PORT_enumPortA,
            PORT_enumPortB,
            PORT_enumPortC,
            PORT_enumPortD
        }PORT_enumPorts_t;

        typedef enum{
            PORT_enumPin0,
            PORT_enumPin1,
            PORT_enumPin2,
            PORT_enumPin3,
            PORT_enumPin4,
            PORT_enumPin5,
            PORT_enumPin6,
            PORT_enumPin7
        }PORT_enumPins_t;

        void PORT_voidInit(void);

    #else

        #error "Wrong Configuration"

    #endif

#endif
