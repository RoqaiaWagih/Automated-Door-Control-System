/*
 * DIO_register.h
 *
 * Created: 3/7/2024 
 *  Author: Roqaia Khalid
 */ 


#ifndef DIO_REGISTER_H_
#define DIO_REGISTER_H_


#define DDRA  *((volatile u8*) 0x3A)
#define PORTA *((volatile u8*) 0X3B)
#define PINA  *((volatile u8*) 0x39)

#define BIO_u8_PORTA_START 0
#define BIO_u8_PORTA_END 7
#define BIO_u8_PORTA_SIZE 8

#define DDRB  *((volatile u8*) 0x37)
#define PORTB *((volatile u8*) 0X38)
#define PINB  *((volatile u8*) 0x36)

#define BIO_u8_PORTB_START 0
#define BIO_u8_PORTB_END 7
#define BIO_u8_PORTB_SIZE 8

#define DDRC  *((volatile u8*) 0x34)
#define PORTC *((volatile u8*) 0X35)
#define PINC  *((volatile u8*) 0x33)

#define BIO_u8_PORTC_START 0
#define BIO_u8_PORTC_END 7
#define BIO_u8_PORTC_SIZE 8

#define DDRD  *((volatile u8*) 0x31)
#define PORTD *((volatile u8*) 0X32)
#define PIND *((volatile u8*) 0x30)

#define BIO_u8_PORTD_START 0
#define BIO_u8_PORTD_END 7
#define BIO_u8_PORTD_SIZE 8

/* Macros for Pins Direction */
#define DIO_u8_INTIAL_OUTPUT                         1
#define DIO_u8_INTIAL_INPUT                          0

/* Macros for Pins Values */
#define DIO_u8_OUTPUT_LOW                            0
#define DIO_u8_OUTPUT_HIGH                           1
#define DIO_u8_INPUT_FLOATING                        0
#define DIO_u8_INPUT_PULLUP                          1

#define  DIO_u8_PORTA_DIRECTIONS Conc(DIO_u8_PA7_DIR  ,DIO_u8_PA6_DIR  ,DIO_u8_PA5_DIR  ,DIO_u8_PA4_DIR  ,DIO_u8_PA3_DIR  ,DIO_u8_PA2_DIR  ,DIO_u8_PA1_DIR  ,DIO_u8_PA0_DIR )
#define  DIO_u8_PORTB_DIRECTIONS Conc(DIO_u8_PB7_DIR  ,DIO_u8_PB6_DIR  ,DIO_u8_PB5_DIR  ,DIO_u8_PB4_DIR  ,DIO_u8_PB3_DIR  ,DIO_u8_PB2_DIR  ,DIO_u8_PB1_DIR  ,DIO_u8_PB0_DIR )
#define  DIO_u8_PORTC_DIRECTIONS Conc(DIO_u8_PC7_DIR  ,DIO_u8_PC6_DIR  ,DIO_u8_PC5_DIR  ,DIO_u8_PC4_DIR  ,DIO_u8_PC3_DIR  ,DIO_u8_PC2_DIR  ,DIO_u8_PC1_DIR  ,DIO_u8_PC0_DIR )
#define  DIO_u8_PORTD_DIRECTIONS Conc(DIO_u8_PD7_DIR  ,DIO_u8_PD6_DIR  ,DIO_u8_PD5_DIR  ,DIO_u8_PD4_DIR  ,DIO_u8_PD3_DIR  ,DIO_u8_PD2_DIR  ,DIO_u8_PD1_DIR  ,DIO_u8_PD0_DIR)

/**************************************************************/
#define  DIO_u8_PORTA Conc(DIO_u8_PA7_DIR  ,DIO_u8_PA6_DIR  ,DIO_u8_PA5_DIR  ,DIO_u8_PA4_DIR  ,DIO_u8_PA3_DIR  ,DIO_u8_PA2_DIR  ,DIO_u8_PA1_DIR  ,DIO_u8_PA0_DIR )
#define  DIO_u8_PORTB Conc(DIO_u8_PB7_DIR  ,DIO_u8_PB6_DIR  ,DIO_u8_PB5_DIR  ,DIO_u8_PB4_DIR  ,DIO_u8_PB3_DIR  ,DIO_u8_PB2_DIR  ,DIO_u8_PB1_DIR  ,DIO_u8_PB0_DIR )
#define  DIO_u8_PORTC Conc(DIO_u8_PC7_DIR  ,DIO_u8_PC6_DIR  ,DIO_u8_PC5_DIR  ,DIO_u8_PC4_DIR  ,DIO_u8_PC3_DIR  ,DIO_u8_PC2_DIR  ,DIO_u8_PC1_DIR  ,DIO_u8_PC0_DIR )
#define  DIO_u8_PORTD Conc(DIO_u8_PD7_DIR  ,DIO_u8_PD6_DIR  ,DIO_u8_PD5_DIR  ,DIO_u8_PD4_DIR  ,DIO_u8_PD3_DIR  ,DIO_u8_PD2_DIR  ,DIO_u8_PD1_DIR  ,DIO_u8_PD0_DIR )
#define Conc(b7,b6,b5,b4,b3,b2,b1,b0)           Conc_Help(b7,b6,b5,b4,b3,b2,b1,b0)
#define Conc_Help(b7,b6,b5,b4,b3,b2,b1,b0)      0b##b7##b6##b5##b4##b3##b2##b1##b0


#endif /* DIO_REGISTER_H_ */