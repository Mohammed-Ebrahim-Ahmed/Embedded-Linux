#include "PORTS.h"
#include "PORTS_cfg.h"

#if PORT_CFG_TYPE == PRECOMPILE
    void PORT_voidInit(void)
    {
        #if DIO_PIN0 == INPUT_PU
            #define PIN0_DIR PIN_LOW
            #define PIN0_PORT PIN_HIGH
        #elif DIO_PIN0 == INPUT_HI
            #define PIN0_DIR PIN_LOW
            #define PIN0_PORT PIN_LOW
        #elif DIO_PIN0 == OUTPUT_LOW
            #define PIN0_DIR PIN_HIGH
            #define PIN0_PORT PIN_LOW
        #elif DIO_PIN0 == OUTPUT_HIGH
            #define PIN0_DIR PIN_HIGH
            #define PIN0_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN1 == INPUT_PU
            #define PIN1_DIR PIN_LOW
            #define PIN1_PORT PIN_HIGH
        #elif DIO_PIN1 == INPUT_HI
            #define PIN1_DIR PIN_LOW
            #define PIN1_PORT PIN_LOW
        #elif DIO_PIN1 == OUTPUT_LOW
            #define PIN1_DIR PIN_HIGH
            #define PIN1_PORT PIN_LOW
        #elif DIO_PIN1 == OUTPUT_HIGH
            #define PIN1_DIR PIN_HIGH
            #define PIN1_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN2 == INPUT_PU
            #define PIN2_DIR PIN_LOW
            #define PIN2_PORT PIN_HIGH
        #elif DIO_PIN2 == INPUT_HI
            #define PIN2_DIR PIN_LOW
            #define PIN2_PORT PIN_LOW
        #elif DIO_PIN2 == OUTPUT_LOW
            #define PIN2_DIR PIN_HIGH
            #define PIN2_PORT PIN_LOW
        #elif DIO_PIN2 == OUTPUT_HIGH
            #define PIN2_DIR PIN_HIGH
            #define PIN2_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN3 == INPUT_PU
            #define PIN3_DIR PIN_LOW
            #define PIN3_PORT PIN_HIGH
        #elif DIO_PIN3 == INPUT_HI
            #define PIN3_DIR PIN_LOW
            #define PIN3_PORT PIN_LOW
        #elif DIO_PIN3 == OUTPUT_LOW
            #define PIN3_DIR PIN_HIGH
            #define PIN3_PORT PIN_LOW
        #elif DIO_PIN3 == OUTPUT_HIGH
            #define PIN3_DIR PIN_HIGH
            #define PIN3_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN4 == INPUT_PU
            #define PIN4_DIR PIN_LOW
            #define PIN4_PORT PIN_HIGH
        #elif DIO_PIN4 == INPUT_HI
            #define PIN4_DIR PIN_LOW
            #define PIN4_PORT PIN_LOW
        #elif DIO_PIN4 == OUTPUT_LOW
            #define PIN4_DIR PIN_HIGH
            #define PIN4_PORT PIN_LOW
        #elif DIO_PIN4 == OUTPUT_HIGH
            #define PIN4_DIR PIN_HIGH
            #define PIN4_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN5 == INPUT_PU
            #define PIN5_DIR PIN_LOW
            #define PIN5_PORT PIN_HIGH
        #elif DIO_PIN5 == INPUT_HI
            #define PIN5_DIR PIN_LOW
            #define PIN5_PORT PIN_LOW
        #elif DIO_PIN5 == OUTPUT_LOW
            #define PIN5_DIR PIN_HIGH
            #define PIN5_PORT PIN_LOW
        #elif DIO_PIN5 == OUTPUT_HIGH
            #define PIN5_DIR PIN_HIGH
            #define PIN5_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN6 == INPUT_PU
            #define PIN6_DIR PIN_LOW
            #define PIN6_PORT PIN_HIGH
        #elif DIO_PIN6 == INPUT_HI
            #define PIN6_DIR PIN_LOW
            #define PIN6_PORT PIN_LOW
        #elif DIO_PIN6 == OUTPUT_LOW
            #define PIN6_DIR PIN_HIGH
            #define PIN6_PORT PIN_LOW
        #elif DIO_PIN6 == OUTPUT_HIGH
            #define PIN6_DIR PIN_HIGH
            #define PIN6_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN7 == INPUT_PU
            #define PIN7_DIR PIN_LOW
            #define PIN7_PORT PIN_HIGH
        #elif DIO_PIN7 == INPUT_HI
            #define PIN7_DIR PIN_LOW
            #define PIN7_PORT PIN_LOW
        #elif DIO_PIN7 == OUTPUT_LOW
            #define PIN7_DIR PIN_HIGH
            #define PIN7_PORT PIN_LOW
        #elif DIO_PIN7 == OUTPUT_HIGH
            #define PIN7_DIR PIN_HIGH
            #define PIN7_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN8 == INPUT_PU
            #define PIN8_DIR PIN_LOW
            #define PIN8_PORT PIN_HIGH
        #elif DIO_PIN8 == INPUT_HI
            #define PIN8_DIR PIN_LOW
            #define PIN8_PORT PIN_LOW
        #elif DIO_PIN8 == OUTPUT_LOW
            #define PIN8_DIR PIN_HIGH
            #define PIN8_PORT PIN_LOW
        #elif DIO_PIN8 == OUTPUT_HIGH
            #define PIN8_DIR PIN_HIGH
            #define PIN8_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN9 == INPUT_PU
            #define PIN9_DIR PIN_LOW
            #define PIN9_PORT PIN_HIGH
        #elif DIO_PIN9 == INPUT_HI
            #define PIN9_DIR PIN_LOW
            #define PIN9_PORT PIN_LOW
        #elif DIO_PIN9 == OUTPUT_LOW
            #define PIN9_DIR PIN_HIGH
            #define PIN9_PORT PIN_LOW
        #elif DIO_PIN9 == OUTPUT_HIGH
            #define PIN9_DIR PIN_HIGH
            #define PIN9_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN10 == INPUT_PU
            #define PIN10_DIR PIN_LOW
            #define PIN10_PORT PIN_HIGH
        #elif DIO_PIN10 == INPUT_HI
            #define PIN10_DIR PIN_LOW
            #define PIN10_PORT PIN_LOW
        #elif DIO_PIN10 == OUTPUT_LOW
            #define PIN10_DIR PIN_HIGH
            #define PIN10_PORT PIN_LOW
        #elif DIO_PIN10 == OUTPUT_HIGH
            #define PIN10_DIR PIN_HIGH
            #define PIN10_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN11 == INPUT_PU
            #define PIN11_DIR PIN_LOW
            #define PIN11_PORT PIN_HIGH
        #elif DIO_PIN11 == INPUT_HI
            #define PIN11_DIR PIN_LOW
            #define PIN11_PORT PIN_LOW
        #elif DIO_PIN11 == OUTPUT_LOW
            #define PIN11_DIR PIN_HIGH
            #define PIN11_PORT PIN_LOW
        #elif DIO_PIN11 == OUTPUT_HIGH
            #define PIN11_DIR PIN_HIGH
            #define PIN11_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN12 == INPUT_PU
            #define PIN12_DIR PIN_LOW
            #define PIN12_PORT PIN_HIGH
        #elif DIO_PIN12 == INPUT_HI
            #define PIN12_DIR PIN_LOW
            #define PIN12_PORT PIN_LOW
        #elif DIO_PIN12 == OUTPUT_LOW
            #define PIN12_DIR PIN_HIGH
            #define PIN12_PORT PIN_LOW
        #elif DIO_PIN12 == OUTPUT_HIGH
            #define PIN12_DIR PIN_HIGH
            #define PIN12_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN13 == INPUT_PU
            #define PIN13_DIR PIN_LOW
            #define PIN13_PORT PIN_HIGH
        #elif DIO_PIN13 == INPUT_HI
            #define PIN13_DIR PIN_LOW
            #define PIN13_PORT PIN_LOW
        #elif DIO_PIN13 == OUTPUT_LOW
            #define PIN13_DIR PIN_HIGH
            #define PIN13_PORT PIN_LOW
        #elif DIO_PIN13 == OUTPUT_HIGH
            #define PIN13_DIR PIN_HIGH
            #define PIN13_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN14 == INPUT_PU
            #define PIN14_DIR PIN_LOW
            #define PIN14_PORT PIN_HIGH
        #elif DIO_PIN14 == INPUT_HI
            #define PIN14_DIR PIN_LOW
            #define PIN14_PORT PIN_LOW
        #elif DIO_PIN14 == OUTPUT_LOW
            #define PIN14_DIR PIN_HIGH
            #define PIN14_PORT PIN_LOW
        #elif DIO_PIN14 == OUTPUT_HIGH
            #define PIN14_DIR PIN_HIGH
            #define PIN14_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif

        #if DIO_PIN15 == INPUT_PU
            #define PIN15_DIR PIN_LOW
            #define PIN15_PORT PIN_HIGH
        #elif DIO_PIN15 == INPUT_HI
            #define PIN15_DIR PIN_LOW
            #define PIN15_PORT PIN_LOW
        #elif DIO_PIN15 == OUTPUT_LOW
            #define PIN15_DIR PIN_HIGH
            #define PIN15_PORT PIN_LOW
        #elif DIO_PIN15 == OUTPUT_HIGH
            #define PIN15_DIR PIN_HIGH
            #define PIN15_PORT PIN_HIGH
        #else
            #error "invalid cfg"
        #endif
        #if NUM_OF_PORTS >= 3

            #if DIO_PIN16 == INPUT_PU
                #define PIN16_DIR PIN_LOW
                #define PIN16_PORT PIN_HIGH
            #elif DIO_PIN16 == INPUT_HI
                #define PIN16_DIR PIN_LOW
                #define PIN16_PORT PIN_LOW
            #elif DIO_PIN16 == OUTPUT_LOW
                #define PIN16_DIR PIN_HIGH
                #define PIN16_PORT PIN_LOW
            #elif DIO_PIN16 == OUTPUT_HIGH
                #define PIN16_DIR PIN_HIGH
                #define PIN16_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN17 == INPUT_PU
                #define PIN17_DIR PIN_LOW
                #define PIN17_PORT PIN_HIGH
            #elif DIO_PIN17 == INPUT_HI
                #define PIN17_DIR PIN_LOW
                #define PIN17_PORT PIN_LOW
            #elif DIO_PIN17 == OUTPUT_LOW
                #define PIN17_DIR PIN_HIGH
                #define PIN17_PORT PIN_LOW
            #elif DIO_PIN17 == OUTPUT_HIGH
                #define PIN17_DIR PIN_HIGH
                #define PIN17_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN18 == INPUT_PU
                #define PIN18_DIR PIN_LOW
                #define PIN18_PORT PIN_HIGH
            #elif DIO_PIN18 == INPUT_HI
                #define PIN18_DIR PIN_LOW
                #define PIN18_PORT PIN_LOW
            #elif DIO_PIN18 == OUTPUT_LOW
                #define PIN18_DIR PIN_HIGH
                #define PIN18_PORT PIN_LOW
            #elif DIO_PIN18 == OUTPUT_HIGH
                #define PIN18_DIR PIN_HIGH
                #define PIN18_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN19 == INPUT_PU
                #define PIN19_DIR PIN_LOW
                #define PIN19_PORT PIN_HIGH
            #elif DIO_PIN19 == INPUT_HI
                #define PIN19_DIR PIN_LOW
                #define PIN19_PORT PIN_LOW
            #elif DIO_PIN19 == OUTPUT_LOW
                #define PIN19_DIR PIN_HIGH
                #define PIN19_PORT PIN_LOW
            #elif DIO_PIN19 == OUTPUT_HIGH
                #define PIN19_DIR PIN_HIGH
                #define PIN19_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN20 == INPUT_PU
                #define PIN20_DIR PIN_LOW
                #define PIN20_PORT PIN_HIGH
            #elif DIO_PIN20 == INPUT_HI
                #define PIN20_DIR PIN_LOW
                #define PIN20_PORT PIN_LOW
            #elif DIO_PIN20 == OUTPUT_LOW
                #define PIN20_DIR PIN_HIGH
                #define PIN20_PORT PIN_LOW
            #elif DIO_PIN20 == OUTPUT_HIGH
                #define PIN20_DIR PIN_HIGH
                #define PIN20_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN21 == INPUT_PU
                #define PIN21_DIR PIN_LOW
                #define PIN21_PORT PIN_HIGH
            #elif DIO_PIN21 == INPUT_HI
                #define PIN21_DIR PIN_LOW
                #define PIN21_PORT PIN_LOW
            #elif DIO_PIN21 == OUTPUT_LOW
                #define PIN21_DIR PIN_HIGH
                #define PIN21_PORT PIN_LOW
            #elif DIO_PIN21 == OUTPUT_HIGH
                #define PIN21_DIR PIN_HIGH
                #define PIN21_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN22 == INPUT_PU
                #define PIN22_DIR PIN_LOW
                #define PIN22_PORT PIN_HIGH
            #elif DIO_PIN22 == INPUT_HI
                #define PIN22_DIR PIN_LOW
                #define PIN22_PORT PIN_LOW
            #elif DIO_PIN22 == OUTPUT_LOW
                #define PIN22_DIR PIN_HIGH
                #define PIN22_PORT PIN_LOW
            #elif DIO_PIN22 == OUTPUT_HIGH
                #define PIN22_DIR PIN_HIGH
                #define PIN22_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN23 == INPUT_PU
                #define PIN23_DIR PIN_LOW
                #define PIN23_PORT PIN_HIGH
            #elif DIO_PIN23 == INPUT_HI
                #define PIN23_DIR PIN_LOW
                #define PIN23_PORT PIN_LOW
            #elif DIO_PIN23 == OUTPUT_LOW
                #define PIN23_DIR PIN_HIGH
                #define PIN23_PORT PIN_LOW
            #elif DIO_PIN23 == OUTPUT_HIGH
                #define PIN23_DIR PIN_HIGH
                #define PIN23_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

        #endif

        #if NUM_OF_PORTS >= 4

            #if DIO_PIN24 == INPUT_PU
                #define PIN24_DIR PIN_LOW
                #define PIN24_PORT PIN_HIGH
            #elif DIO_PIN24 == INPUT_HI
                #define PIN24_DIR PIN_LOW
                #define PIN24_PORT PIN_LOW
            #elif DIO_PIN24 == OUTPUT_LOW
                #define PIN24_DIR PIN_HIGH
                #define PIN24_PORT PIN_LOW
            #elif DIO_PIN24 == OUTPUT_HIGH
                #define PIN24_DIR PIN_HIGH
                #define PIN24_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN25 == INPUT_PU
                #define PIN25_DIR PIN_LOW
                #define PIN25_PORT PIN_HIGH
            #elif DIO_PIN25 == INPUT_HI
                #define PIN25_DIR PIN_LOW
                #define PIN25_PORT PIN_LOW
            #elif DIO_PIN25 == OUTPUT_LOW
                #define PIN25_DIR PIN_HIGH
                #define PIN25_PORT PIN_LOW
            #elif DIO_PIN25 == OUTPUT_HIGH
                #define PIN25_DIR PIN_HIGH
                #define PIN25_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN26 == INPUT_PU
                #define PIN26_DIR PIN_LOW
                #define PIN26_PORT PIN_HIGH
            #elif DIO_PIN26 == INPUT_HI
                #define PIN26_DIR PIN_LOW
                #define PIN26_PORT PIN_LOW
            #elif DIO_PIN26 == OUTPUT_LOW
                #define PIN26_DIR PIN_HIGH
                #define PIN26_PORT PIN_LOW
            #elif DIO_PIN26 == OUTPUT_HIGH
                #define PIN26_DIR PIN_HIGH
                #define PIN26_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN27 == INPUT_PU
                #define PIN27_DIR PIN_LOW
                #define PIN27_PORT PIN_HIGH
            #elif DIO_PIN27 == INPUT_HI
                #define PIN27_DIR PIN_LOW
                #define PIN27_PORT PIN_LOW
            #elif DIO_PIN27 == OUTPUT_LOW
                #define PIN27_DIR PIN_HIGH
                #define PIN27_PORT PIN_LOW
            #elif DIO_PIN27 == OUTPUT_HIGH
                #define PIN27_DIR PIN_HIGH
                #define PIN27_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN28 == INPUT_PU
                #define PIN28_DIR PIN_LOW
                #define PIN28_PORT PIN_HIGH
            #elif DIO_PIN28 == INPUT_HI
                #define PIN28_DIR PIN_LOW
                #define PIN28_PORT PIN_LOW
            #elif DIO_PIN28 == OUTPUT_LOW
                #define PIN28_DIR PIN_HIGH
                #define PIN28_PORT PIN_LOW
            #elif DIO_PIN28 == OUTPUT_HIGH
                #define PIN28_DIR PIN_HIGH
                #define PIN28_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN29 == INPUT_PU
                #define PIN29_DIR PIN_LOW
                #define PIN29_PORT PIN_HIGH
            #elif DIO_PIN29 == INPUT_HI
                #define PIN29_DIR PIN_LOW
                #define PIN29_PORT PIN_LOW
            #elif DIO_PIN29 == OUTPUT_LOW
                #define PIN29_DIR PIN_HIGH
                #define PIN29_PORT PIN_LOW
            #elif DIO_PIN29 == OUTPUT_HIGH
                #define PIN29_DIR PIN_HIGH
                #define PIN29_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN30 == INPUT_PU
                #define PIN30_DIR PIN_LOW
                #define PIN30_PORT PIN_HIGH
            #elif DIO_PIN30 == INPUT_HI
                #define PIN30_DIR PIN_LOW
                #define PIN30_PORT PIN_LOW
            #elif DIO_PIN30 == OUTPUT_LOW
                #define PIN30_DIR PIN_HIGH
                #define PIN30_PORT PIN_LOW
            #elif DIO_PIN30 == OUTPUT_HIGH
                #define PIN30_DIR PIN_HIGH
                #define PIN30_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

            #if DIO_PIN31 == INPUT_PU
                #define PIN31_DIR PIN_LOW
                #define PIN31_PORT PIN_HIGH
            #elif DIO_PIN31 == INPUT_HI
                #define PIN31_DIR PIN_LOW
                #define PIN31_PORT PIN_LOW
            #elif DIO_PIN31 == OUTPUT_LOW
                #define PIN31_DIR PIN_HIGH
                #define PIN31_PORT PIN_LOW
            #elif DIO_PIN31 == OUTPUT_HIGH
                #define PIN31_DIR PIN_HIGH
                #define PIN31_PORT PIN_HIGH
            #else
                #error "invalid cfg"
            #endif

        #endif

        /* Concatnation between PORTS and DDR registers */
        #define CONCAT(P7, P6, P5, P4, P3, P2, P1, P0) HELPER(P7, P6, P5, P4, P3, P2, P1, P0)
        #define HELPER(P7, P6, P5, P4, P3, P2, P1, P0) 0b##P7##P6##P5##P4##P3##P2##P1##P0

        DDRA = CONCAT(PIN7_DIR, PIN6_DIR, PIN5_DIR, PIN4_DIR, PIN3_DIR, PIN2_DIR, PIN1_DIR, PIN0_DIR);
        DDRB = CONCAT(PIN15_DIR, PIN14_DIR, PIN13_DIR, PIN12_DIR, PIN11_DIR, PIN10_DIR, PIN9_DIR, PIN8_DIR);
        DDRC = CONCAT(PIN23_DIR, PIN22_DIR, PIN21_DIR, PIN20_DIR, PIN19_DIR, PIN18_DIR, PIN17_DIR, PIN16_DIR);
        DDRD = CONCAT(PIN31_DIR, PIN30_DIR, PIN29_DIR, PIN28_DIR, PIN27_DIR, PIN27_DIR, PIN26_DIR, PIN25_DIR);

        PORTA = CONCAT(PIN7_PORT, PIN6_PORT, PIN5_PORT, PIN4_PORT, PIN3_PORT, PIN2_PORT, PIN1_PORT, PIN0_PORT);
        PORTB = CONCAT(PIN15_PORT, PIN14_PORT, PIN13_PORT, PIN12_PORT, PIN11_PORT, PIN10_PORT, PIN9_PORT, PIN8_PORT);
        PORTC = CONCAT(PIN23_PORT, PIN22_PORT, PIN21_PORT, PIN20_PORT, PIN19_PORT, PIN18_PORT, PIN17_PORT, PIN16_PORT);
        PORTD = CONCAT(PIN31_PORT, PIN30_PORT, PIN29_PORT, PIN28_PORT, PIN27_PORT, PIN26_PORT, PIN25_PORT, PIN24_PORT);

    }

#elif PORT_CFG_TYPE == POSTCOMPILE

    extern PORT_strPinConfig_t PORT_strPinConfig;
    void PORT_voidInit()
    {
        u8 LOC_u8Counter;
        for(LOC_u8Counter = 0; LOC_u8Counter < NUM_OF_PINS; LOC_u8Counter++)
        {
            PORT_enumPorts_t LOC_enumPort = LOC_u8Counter / NUM_OF_PINS_PER_PORT;
            PORT_enumPins_t LOC_enumPin = LOC_u8Counter % NUM_OF_PINS_PER_PORT;
            switch(LOC_enumPort)
            {
                case PORT_enumPortA:
                    switch(PORT_strPinConfig.PORT_enumPinConfig[LOC_u8Counter])
                    {
                        case PORT_enumInputPU:
                            CLR_BIT(DDRA, LOC_enumPin);
                            SET_BIT(PORTA, LOC_enumPin);
                            break;
                        case PORT_enumInputHI:
                            CLR_BIT(DDRA, LOC_enumPin);
                            CLR_BIT(PORTA, LOC_enumPin);
                            break;
                        case PORT_enumOutputLow:
                            SET_BIT(DDRA, LOC_enumPin);
                            CLR_BIT(PORTA, LOC_enumPin);
                            break;
                        case PORT_enumOutputHigh:
                            SET_BIT(DDRA, LOC_enumPin);
                            SET_BIT(DDRA, LOC_enumPin);
                            break;
                        default:
                            break;
                    }
                    break;

                case PORT_enumPortB:
                    switch(PORT_strPinConfig.PORT_enumPinConfig[LOC_u8Counter])
                    {
                        case PORT_enumInputPU:
                            CLR_BIT(DDRB, LOC_enumPin);
                            SET_BIT(PORTB, LOC_enumPin);
                            break;
                        case PORT_enumInputHI:
                            CLR_BIT(DDRB, LOC_enumPin);
                            CLR_BIT(PORTB, LOC_enumPin);
                            break;
                        case PORT_enumOutputLow:
                            SET_BIT(DDRB, LOC_enumPin);
                            CLR_BIT(PORTB, LOC_enumPin);
                            break;
                        case PORT_enumOutputHigh:
                            SET_BIT(DDRB, LOC_enumPin);
                            SET_BIT(DDRB, LOC_enumPin);
                            break;
                        default:
                            break;
                    }
                    break;

                case PORT_enumPortC:
                    switch(PORT_strPinConfig.PORT_enumPinConfig[LOC_u8Counter])
                    {
                        case PORT_enumInputPU:
                            CLR_BIT(DDRC, LOC_enumPin);
                            SET_BIT(PORTC, LOC_enumPin);
                            break;
                        case PORT_enumInputHI:
                            CLR_BIT(DDRC, LOC_enumPin);
                            CLR_BIT(PORTC, LOC_enumPin);
                            break;
                        case PORT_enumOutputLow:
                            SET_BIT(DDRC, LOC_enumPin);
                            CLR_BIT(PORTC, LOC_enumPin);
                            break;
                        case PORT_enumOutputHigh:
                            SET_BIT(DDRC, LOC_enumPin);
                            SET_BIT(DDRC, LOC_enumPin);
                            break;
                        default:
                            break;
                    }
                    break;

                case PORT_enumPortD:
                    switch(PORT_strPinConfig.PORT_enumPinConfig[LOC_u8Counter])
                    {
                        case PORT_enumInputPU:
                            CLR_BIT(DDRD, LOC_enumPin);
                            SET_BIT(PORTD, LOC_enumPin);
                            break;
                        case PORT_enumInputHI:
                            CLR_BIT(DDRD, LOC_enumPin);
                            CLR_BIT(PORTD, LOC_enumPin);
                            break;
                        case PORT_enumOutputLow:
                            SET_BIT(DDRD, LOC_enumPin);
                            CLR_BIT(PORTD, LOC_enumPin);
                            break;
                        case PORT_enumOutputHigh:
                            SET_BIT(DDRD, LOC_enumPin);
                            SET_BIT(DDRD, LOC_enumPin);
                            break;
                        default:
                            break;
                    }
                    break;

                default:
                    break;
                
            }
        }
    }
    
#else
    #error "Wrong Configuration"

#endif
