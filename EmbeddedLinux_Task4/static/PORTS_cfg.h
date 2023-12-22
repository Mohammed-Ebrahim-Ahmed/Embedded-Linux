#ifndef PORTS_CFG_H_
#define PORTS_CFG_H_

    #define NUM_OF_PORTS 4 /* choose between 2 up to 4*/
    #define NUM_OF_PINS 32 /* choose from 16 up to 32*/
    #define NUM_OF_PINS_PER_PORT 8 /*choose the number of pins per port according to your target*/

    #define PRECOMPILE 0
    #define POSTCOMPILE 1

    /* choose your configuration in this line*/
    #define PORT_CFG_TYPE PRECOMPILE

    #if PORT_CFG_TYPE == PRECOMPILE



        /*for the all pins below the following configurations 
            INPUT_PU        0
            INPUT_HI        1
            OUTPUT_HIGH     2
            OUTPUT_LOW      3
        */
        #define INPUT_PU 0
        #define INPUT_HI 1
        #define OUTPUT_LOW 2
        #define OUTPUT_HIGH 3


        /*PORTA configurations*/
        #define DIO_PIN0 OUTPUT_LOW
        #define DIO_PIN2 OUTPUT_LOW
        #define DIO_PIN3 OUTPUT_LOW
        #define DIO_PIN4 OUTPUT_LOW
        #define DIO_PIN5 OUTPUT_LOW
        #define DIO_PIN6 OUTPUT_LOW
        #define DIO_PIN7 OUTPUT_LOW
        #define DIO_PIN1 OUTPUT_LOW

        /*PORTB configurations*/
        #define DIO_PIN8 INPUT_PU
        #define DIO_PIN9 INPUT_PU
        #define DIO_PIN10 INPUT_PU
        #define DIO_PIN11 INPUT_PU
        #define DIO_PIN12 INPUT_PU
        #define DIO_PIN13 INPUT_PU
        #define DIO_PIN14 INPUT_PU
        #define DIO_PIN15 INPUT_PU

        /*PORTC configurations if exists (hint: comment unnecessary ports)*/
        #define DIO_PIN16 INPUT_PU
        #define DIO_PIN17 INPUT_PU
        #define DIO_PIN18 INPUT_PU
        #define DIO_PIN19 INPUT_PU
        #define DIO_PIN20 INPUT_PU
        #define DIO_PIN21 INPUT_PU
        #define DIO_PIN22 INPUT_PU
        #define DIO_PIN23 INPUT_PU

        /*PORTD configurations if exists (hint: comment unnecessary ports)*/
        #define DIO_PIN24 INPUT_PU
        #define DIO_PIN25 INPUT_PU
        #define DIO_PIN26 INPUT_PU
        #define DIO_PIN27 INPUT_PU
        #define DIO_PIN28 INPUT_PU
        #define DIO_PIN29 INPUT_PU
        #define DIO_PIN30 INPUT_PU
        #define DIO_PIN31 INPUT_PU

    #elif PORT_CFG_TYPE == POSTCOMPILE

        typedef enum{
            PORT_enumInputPU,
            PORT_enumInputHI,
            PORT_enumOutputLow,
            PORT_enumOutputHigh
        } PORT_enumPinOpt_t;

        typedef struct {

            PORT_enumPinOpt_t PORT_enumPinConfig[NUM_OF_PINS];
            
        }PORT_strPinConfig_t;

    #else

        #error "Wrong Configuration Selected. Please try again."

    #endif

#endif