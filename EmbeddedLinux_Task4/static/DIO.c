#include "DIO.h"
DIO_enumError_t DIO_enumSetPinConfig(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumConfig_t Copy_enumConfig)
{
    DIO_enumError_t LOC_enumError = DIO_enumNotOk;

    if (Copy_enumPortNum > DIO_enumPortD)
    {
        LOC_enumError = DIO_enumWrongPort;
    }
    else if(Copy_enumPinNum > DIO_enumPin7)
    {
        LOC_enumError = DIO_enumWrongPin;
    }
    else if(Copy_enumConfig > DIO_enumInputExternalPD)
    {
        LOC_enumError = DIO_enumWrongConfig;
    }
    else
    {
        LOC_enumError = DIO_enumOk;
        switch(Copy_enumPortNum)
        {
            case DIO_enumPortA:
                switch(Copy_enumConfig)
                {
                    case DIO_enumOutput:
                        SET_BIT(DDRA, Copy_enumPinNum);
                        break;
                    case DIO_enumInputInternalPU:
                        CLR_BIT(DDRA, Copy_enumPinNum);
                        SET_BIT(PORTA, Copy_enumPinNum);
                        break;
                    case DIO_enumInputExternalPD:
                        CLR_BIT(DDRA, Copy_enumPinNum);
                        CLR_BIT(PORTA, Copy_enumPinNum);
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortB:
                switch(Copy_enumConfig)
                {
                    case DIO_enumOutput:
                        SET_BIT(DDRB, Copy_enumPinNum);
                        break;
                    case DIO_enumInputInternalPU:
                        CLR_BIT(DDRB, Copy_enumPinNum);
                        SET_BIT(PORTB, Copy_enumPinNum);
                        break;
                    case DIO_enumInputExternalPD:
                        CLR_BIT(DDRB, Copy_enumPinNum);
                        CLR_BIT(PORTB, Copy_enumPinNum);
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortC:
                switch(Copy_enumConfig)
                {
                    case DIO_enumOutput:
                        SET_BIT(DDRC, Copy_enumPinNum);
                        break;
                    case DIO_enumInputInternalPU:
                        CLR_BIT(DDRC, Copy_enumPinNum);
                        SET_BIT(PORTC, Copy_enumPinNum);
                        break;
                    case DIO_enumInputExternalPD:
                        CLR_BIT(DDRC, Copy_enumPinNum);
                        CLR_BIT(PORTC, Copy_enumPinNum);
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortD:
                switch(Copy_enumConfig)
                {
                    case DIO_enumOutput:
                        SET_BIT(DDRD, Copy_enumPinNum);
                        break;
                    case DIO_enumInputInternalPU:
                        CLR_BIT(DDRD, Copy_enumPinNum);
                        SET_BIT(PORTD, Copy_enumPinNum);
                        break;
                    case DIO_enumInputExternalPD:
                        CLR_BIT(DDRD, Copy_enumPinNum);
                        CLR_BIT(PORTD, Copy_enumPinNum);
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }

    return LOC_enumError;  
}

DIO_enumError_t DIO_enumSetPortConfig(DIO_enumPorts_t Copy_enumPortNum,DIO_enumConfig_t Copy_enumConfig)
{
    DIO_enumError_t LOC_enumError = DIO_enumNotOk;

    if(Copy_enumPortNum > DIO_enumPortD)
    {
        LOC_enumError = DIO_enumWrongPort;
    }
    else if(Copy_enumConfig > DIO_enumInputExternalPD)
    {
        LOC_enumError = DIO_enumWrongConfig;
    }
    else
    {
        LOC_enumError = DIO_enumOk;
        switch(Copy_enumPortNum)
        {
            case DIO_enumPortA:
                switch(Copy_enumConfig)
                {
                    case DIO_enumOutput:
                        DDRA = 0xff;
                        break;
                    case DIO_enumInputInternalPU:
                        DDRA = 0x00;
                        PORTA = 0xff;
                        break;
                    case DIO_enumInputExternalPD:
                        DDRA = 0x00;
                        PORTA = 0x00;
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortB:
                switch(Copy_enumConfig)
                {
                    case DIO_enumOutput:
                        DDRB = 0xff;
                        break;
                    case DIO_enumInputInternalPU:
                        DDRB = 0x00;
                        PORTB = 0xff;
                        break;
                    case DIO_enumInputExternalPD:
                        DDRB = 0x00;
                        PORTB = 0x00;
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortC:
                switch(Copy_enumConfig)
                {
                    case DIO_enumOutput:
                        DDRC = 0xff;
                        break;
                    case DIO_enumInputInternalPU:
                        DDRC = 0x00;
                        PORTC = 0xff;
                        break;
                    case DIO_enumInputExternalPD:
                        DDRC = 0x00;
                        PORTC = 0x00;
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortD:
                switch(Copy_enumConfig)
                {
                    case DIO_enumOutput:
                        DDRD = 0xff;
                        break;
                    case DIO_enumInputInternalPU:
                        DDRD = 0x00;
                        PORTD = 0xff;
                        break;
                    case DIO_enumInputExternalPD:
                        DDRD = 0x00;
                        PORTD = 0x00;
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }

    return LOC_enumError;
}

DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t Copy_enumLogicState)
{
    DIO_enumError_t LOC_enumError = DIO_enumNotOk;

    if(Copy_enumPortNum > DIO_enumPortD)
    {
        LOC_enumError = DIO_enumWrongPort;
    }
    else if(Copy_enumPinNum > DIO_enumPin7)
    {
        LOC_enumError = DIO_enumWrongPin;
    }
    else if(Copy_enumLogicState > DIO_enumLogicHigh)
    {
        LOC_enumError = DIO_enumWrongLogic;
    }
    else
    {
        LOC_enumError = DIO_enumOk;
        switch(Copy_enumPortNum)
        {
            case DIO_enumPortA:
                switch(Copy_enumLogicState)
                {
                    case DIO_enumLogicLow:
                        CLR_BIT(PORTA, Copy_enumPinNum);
                        break;
                    case DIO_enumLogicHigh:
                        SET_BIT(PORTA, Copy_enumPinNum);
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortB:
                switch(Copy_enumLogicState)
                {
                    case DIO_enumLogicLow:
                        CLR_BIT(PORTB, Copy_enumPinNum);
                        break;
                    case DIO_enumLogicHigh:
                        SET_BIT(PORTB, Copy_enumPinNum);
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortC:
                switch(Copy_enumLogicState)
                {
                    case DIO_enumLogicLow:
                        CLR_BIT(PORTC, Copy_enumPinNum);
                        break;
                    case DIO_enumLogicHigh:
                        SET_BIT(PORTC, Copy_enumPinNum);
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortD:
                switch(Copy_enumLogicState)
                {
                    case DIO_enumLogicLow:
                        CLR_BIT(PORTD, Copy_enumPinNum);
                        break;
                    case DIO_enumLogicHigh:
                        SET_BIT(PORTD, Copy_enumPinNum);
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }

    return LOC_enumError;
}

DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,DIO_enumLogicState_t Copy_enumLogicState)
{
    DIO_enumError_t LOC_enumError = DIO_enumNotOk;

    if(Copy_enumPortNum > DIO_enumPortD)
    {
        LOC_enumError = DIO_enumWrongPort;
    }
    else if(Copy_enumLogicState > DIO_enumLogicHigh)
    {
        LOC_enumError = DIO_enumWrongLogic;
    }
    else
    {
        LOC_enumError = DIO_enumOk;
        switch(Copy_enumPortNum)
        {
            case DIO_enumPortA:
                switch(Copy_enumLogicState)
                {
                    case DIO_enumLogicLow:
                        PORTA = 0x00;
                        break;
                    case DIO_enumLogicHigh:
                        PORTA = 0xff;
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortB:
                switch(Copy_enumLogicState)
                {
                    case DIO_enumLogicLow:
                        PORTB = 0x00;
                        break;
                    case DIO_enumLogicHigh:
                        PORTB = 0xff;
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortC:
                switch(Copy_enumLogicState)
                {
                    case DIO_enumLogicLow:
                        PORTC = 0x00;
                        break;
                    case DIO_enumLogicHigh:
                        PORTC = 0xff;
                        break;
                    default:
                        break;
                }
                break;
            case DIO_enumPortD:
                switch(Copy_enumLogicState)
                {
                    case DIO_enumLogicLow:
                        PORTD = 0x00;
                        break;
                    case DIO_enumLogicHigh:
                        PORTD = 0xff;
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }

    return LOC_enumError;
}

DIO_enumError_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t* Add_Pu8PinValue)
{
    DIO_enumError_t LOC_enumError = DIO_enumNotOk;

    if(Copy_enumPortNum > DIO_enumPortD)
    {
        LOC_enumError = DIO_enumWrongPort;
    }
    else if(Copy_enumPinNum > DIO_enumPin7)
    {
        LOC_enumError = DIO_enumWrongPin;
    }
    else if(Add_Pu8PinValue == NULL)
    {
        LOC_enumError = DIO_enumNullPointer;
    }
    else
    {
        LOC_enumError = DIO_enumOk;
        switch(Copy_enumPortNum)
        {
            case DIO_enumPortA:
                *Add_Pu8PinValue = GET_BIT(PINA, Copy_enumPinNum);
                break;
            case DIO_enumPortB:
                *Add_Pu8PinValue = GET_BIT(PINB, Copy_enumPinNum);
                break;
            case DIO_enumPortC:
                *Add_Pu8PinValue = GET_BIT(PINC, Copy_enumPinNum);
                break;
            case DIO_enumPortD:
                *Add_Pu8PinValue = GET_BIT(PIND, Copy_enumPinNum);
                break;
            default:
                break;
        }
    }

    return LOC_enumError;
}

