/*
 * PWM_program.c
 *
 * Created: 3/17/2024 10:57:38 AM
 *  Author: Dr. Roqaia Khalid
 */ 

/*********************MCAL*********************/
#include "PWM_config.h"
#include "PWM_interface.h"
#include "PWM_register.h"
/*********************UTILTES_TYPES*********************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"

void PWM_voidInitChannel_0(void){
	
	#if TME0_MODE == TMR0_FAST_PWM_MODE
	SET_BIT(TCCR0_REG,WGM00);
	SET_BIT(TCCR0_REG,WGM01);
	CLR_BIT(TCCR0_REG,COM00);
	SET_BIT(TCCR0_REG,COM01);
	
	#elif TME0_MODE == TMR0_PWM_MODE
	SET_BIT(TCCR0_REG,WGM00);
	CLR_BIT(TCCR0_REG,WGM01);
	
	#endif
}
void PWM_voidGenerate_PWM_Channel_0(u8 copy_u8DytyCycle)
{
	if(copy_u8DytyCycle<=100)
	{
		
		OCR0_REG =(((u16)50*256)/100)-1;
		
		//start
		#if PRESCALLER==No_prescaling
		
		SET_BIT(TCCR0_REG, CS00);
		CLR_BIT(TCCR0_REG, CS01);
		CLR_BIT(TCCR0_REG, CS02);
		
		#elif PRESCALLER==prescaler_8
		
		
		CLR_BIT(TCCR0_REG, CS00);
		SET_BIT(TCCR0_REG, CS01);
		CLR_BIT(TCCR0_REG, CS02);
		
		#elif PRESCALLER==prescaler_64_MODE
		
		
		SET_BIT(TCCR0_REG, CS00);
		SET_BIT(TCCR0_REG, CS01);
		CLR_BIT(TCCR0_REG, CS02);
		
		#elif PRESCALLER==prescaler_256
		
		
		CLR_BIT(TCCR0_REG, CS00);
		CLR_BIT(TCCR0_REG, CS01);
		SET_BIT(TCCR0_REG, CS02);
		
		#elif PRESCALLER==prescaler_1024
		
		
		SET_BIT(TCCR0_REG, CS00);
		CLR_BIT(TCCR0_REG, CS01);
		SET_BIT(TCCR0_REG, CS02);
		
		#elif PRESCALLER==E_clock_falling_edge
		
		
		CLR_BIT(TCCR0_REG, CS00);
		SET_BIT(TCCR0_REG, CS01);
		SET_BIT(TCCR0_REG, CS02);
		
		#elif PRESCALLER==E_clock_rising_edge
		
		SET_BIT(TCCR0_REG, CS00);
		SET_BIT(TCCR0_REG, CS01);
		SET_BIT(TCCR0_REG, CS02);
		#endif
	}
	else{
		
		//error
	}
}

void PWM_voidStop_PWM_ChanneL_0(void)
{
	CLR_BIT(TCCR0_REG, CS00);
	CLR_BIT(TCCR0_REG, CS01);
	CLR_BIT(TCCR0_REG, CS02);
}

void PWM_voidInitChannel_1A(void)
{
	//mode
	CLR_BIT(TCCR1A_REG,WGM10);
	SET_BIT(TCCR1A_REG,WGM11);
	SET_BIT(TCCR1B_REG,WGM12);
	SET_BIT(TCCR1B_REG,WGM13);
	
	//
	CLR_BIT(TCCR1A_REG,COM1A0);
	SET_BIT(TCCR1A_REG,COM1A1);
}
void PWM_voidGenerate_PWM_ChanneL_1A(u32 copy_u32Frequency,f32 copy_f32DytyCycle)
{
	if(copy_f32DytyCycle<=100)
	{
		
		//tick time 4 ms in 64 prescaller 
		ICR1_u16_REG =(((u32)1000000/copy_u32Frequency)/4)-1;
		
		OCR1A_u16_REG =((copy_f32DytyCycle*(ICR1_u16_REG+1))/100)-1;
		//start
		SET_BIT(TCCR1B_REG,CS10);
		SET_BIT(TCCR1B_REG,CS11);
		CLR_BIT(TCCR1B_REG,CS12);
		
	}
	else
	{
		//error
	}
}
void PWM_voidStop_PWM_ChanneL_1A(void)
{
	CLR_BIT(TCCR1B_REG,CS10);
	CLR_BIT(TCCR1B_REG,CS11);
	CLR_BIT(TCCR1B_REG,CS12);
}