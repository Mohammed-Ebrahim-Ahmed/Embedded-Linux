#ifndef REGISTERS_H_
#define REGISTERS_H_

#define PORTA *((volatile_u8_ptr) 0x3B)
#define PORTB *((volatile_u8_ptr) 0x38)
#define PORTC *((volatile_u8_ptr) 0x35)
#define PORTD *((volatile_u8_ptr) 0x32)
#define DDRA *((volatile_u8_ptr) 0x3A)
#define DDRB *((volatile_u8_ptr) 0x37)
#define DDRC *((volatile_u8_ptr) 0x34)
#define DDRD *((volatile_u8_ptr) 0x31)
#define PINA *((volatile_u8_ptr) 0x39)
#define PINB *((volatile_u8_ptr) 0x36)
#define PINC *((volatile_u8_ptr) 0x33)
#define PIND *((volatile_u8_ptr) 0x30)

#endif