/*
 * PWM_config.h
 *
 * Created: 3/17/2024 10:57:13 AM
 *  Author: Dr. Roqaia Khalid
 */ 


#ifndef PWM_CONFIG_H_
#define PWM_CONFIG_H_

/* OPTIONS
1.TMR0_NORMAL_MODE
2.TMR0_CTC_MODE
3.TMR0_PWM_MODE
4.TMR0_FAST_PWM_MODE*/
#define TME0_MODE  TMR0_FAST_PWM_MODE

/*options
No_prescaling
prescaler_8
prescaler_64
prescaler_256
prescaler_1024
E_clock_falling_edge
E_clock_rising_edge

*/
#define PRESCALLER prescaler_64_MODE



#endif /* PWM_CONFIG_H_ */