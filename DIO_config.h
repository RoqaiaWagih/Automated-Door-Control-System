/*
 * DIO_config.h
 *
 * Created: 3/7/2024 4:27:13 PM
 *  Author:Roqaia Khalid
 */ 


#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_


/* Intial Directions for All Pins */
/* Options : DIO_u8_INTIAL_OUTPUT
			 DIO_u8_INTIAL_INPUT */
/* PORTA */			 
#define DIO_u8_PA0_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PA1_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PA2_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PA3_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PA4_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PA5_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PA6_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PA7_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
/* PORTB */			                                             
#define DIO_u8_PB0_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PB1_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PB2_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PB3_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PB4_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PB5_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PB6_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PB7_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
/* PORTC */			                                             
#define DIO_u8_PC0_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PC1_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PC2_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PC3_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PC4_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PC5_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PC6_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PC7_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
/* PORTD */			                                             
#define DIO_u8_PD0_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PD1_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PD2_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PD3_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PD4_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PD5_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PD6_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT
#define DIO_u8_PD7_INTIAL_DIRECTION                              DIO_u8_INTIAL_INPUT

/*  DISCRIPTION : PORT A DIRECTIONS INPUT OR OUTPUT for All Pins */
/* Options : 
			 DIO_u8_INPUT
			 DIO_u8_OUTPUT
			    */
/* PORTA */		

#define DIO_u8_PA0_DIR    DIO_PIN_OUTPUT
#define DIO_u8_PA1_DIR    DIO_PIN_OUTPUT
#define DIO_u8_PA2_DIR    DIO_PIN_OUTPUT
#define DIO_u8_PA3_DIR    DIO_PIN_OUTPUT
#define DIO_u8_PA4_DIR    DIO_PIN_OUTPUT
#define DIO_u8_PA5_DIR    DIO_PIN_OUTPUT
#define DIO_u8_PA6_DIR    DIO_PIN_OUTPUT
#define DIO_u8_PA7_DIR    DIO_PIN_OUTPUT	 


/* PORTB */			                                             
#define DIO_u8_PB0_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PB1_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PB2_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PB3_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PB4_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PB5_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PB6_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PB7_DIR      DIO_PIN_OUTPUT
/* PORTC */			                                          
#define DIO_u8_PC0_DIR      DIO_PIN_INPUT
#define DIO_u8_PC1_DIR      DIO_PIN_INPUT
#define DIO_u8_PC2_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PC3_DIR      DIO_PIN_INPUT
#define DIO_u8_PC4_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PC5_DIR      DIO_PIN_INPUT
#define DIO_u8_PC6_DIR      DIO_PIN_INPUT
#define DIO_u8_PC7_DIR      DIO_PIN_INPUT
/* PORTD */			                                          
#define DIO_u8_PD0_DIR      DIO_PIN_INPUT
#define DIO_u8_PD1_DIR      DIO_PIN_INPUT
#define DIO_u8_PD2_DIR      DIO_PIN_INPUT
#define DIO_u8_PD3_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PD4_DIR      DIO_PIN_INPUT
#define DIO_u8_PD5_DIR      DIO_PIN_INPUT
#define DIO_u8_PD6_DIR      DIO_PIN_OUTPUT
#define DIO_u8_PD7_DIR      DIO_PIN_OUTPUT



#endif /* DIO_CONFIG_H_ */