/*
 * SERVO_program.c
 *
 * Created: 3/18/2024 1:08:37 PM
 *  Author: Dr. Roqaia Khalid
 */ 
#define F_CPU 16000000UL
/*********************MCAL*********************/

#include "DIO_interface.h"

#include "PWM_interface.h"
/*********************UTILTES_TYPES*********************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include <util/delay.h>

void SERVO_INT(void)
{
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN5,DIO_PIN_OUTPUT);
	PWM_voidInitChannel_1A();
}
void SERVO_OFF(void)
{
	PWM_voidStop_PWM_ChanneL_1A();
}
void SERVO_ON(u8 copy_u8Angle)
{
	f32 angle=((((f32)copy_u8Angle+90)/180)*5)+5;
 
	PWM_voidGenerate_PWM_ChanneL_1A(50,angle);
}