/*
 * PWM_interface.h
 *
 * Created: 3/17/2024 10:56:17 AM
 *  Author: Dr. Roqaia Khalid
 */ 


#ifndef PWM_INTERFACE_H_
#define PWM_INTERFACE_H_
#include "STD_TYPES.h"

void PWM_voidInitChannel_0(void);
void PWM_voidGenerate_PWM_Channel_0(u8 copy_u8DytyCycle);
void PWM_voidStop_PWM_ChanneL_0(void);

void PWM_voidInitChannel_1A(void);
void PWM_voidGenerate_PWM_ChanneL_1A(u32 copy_u32Frequency,f32 copy_f32DytyCycle);
void PWM_voidStop_PWM_ChanneL_1A(void);

void PWM_voidInitChanneL_1B(void);
void PWM_voidGenerate_PWM_ChanneL_1B(u8 copy_u8DytyCycle);



#endif /* PWM_INTERFACE_H_ */