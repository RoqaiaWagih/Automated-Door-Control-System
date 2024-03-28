# Automated Door Control System

## Overview

The Automated Door Control System is a project designed to provide automated access control to a door using AVR-Atmega32 microcontroller along with various peripherals including LCD, keypad, buzzer, servo motor, and LED display. This system ensures secure entry to a premises by requiring users to input a predefined password via a keypad for authentication.

## Hardware Components

- AVR-Atmega32 microcontroller
- Keypad
- Buzzer
- LED Display
- LCD Display
- Servo Motor

[https://example.com/path/to/video.mp4](https://drive.google.com/file/d/1-SXT0p_A5TTrnp7aM_11Nd6JS7Ne9QAM/view?usp=drive_link))

## Architecture Layers

### Application Layer (APP)

The `main.c` file resides in the APP folder and contains the main application logic for controlling the door access system. This layer interacts with the Hardware Abstraction Layer (HAL) to manage user input, authentication, and door control functionalities.
```c
/*
*  Automated_Door_Control_System.c
*
* Created: 3/18/2024 
* Author : Roqaia Khalid

****The Automated Door Control System is a project designed to provide automated access control to a door using
AVR-Atmega32 microcontroller along with various peripherals including LCD, keypad, buzzer,servo motor, 
and LED display.This system ensures secure entry to a premises by requiring users to input a predefined password 
via a keypad for authentication.****
*/

/*********************MCAL******************************/
#include "DIO_interface.h"
/*********************HAL*******************************/
#include "LCD.h"
#include "KPD.h"
#include "SERVO_interface.h"

/*********************UTILTES_TYPES*********************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

// Define constants
#define F_CPU 16000000UL

// Include delay library
#include <util/delay.h>

// Function prototypes
void initialize();
void waitForKeyPress();
BOOL CheckPassword(u8 *password, u8 PASSWORD_LENGTH);
void KeyPress(u8 *password, u8 PASSWORD_LENGTH);
void openDoor();
void Wrong_Action();

int main(void)
{
	
	 // Define password length and maximum attempts
	 u8 PASSWORD_LENGTH = 4;
	 u8 MAX_TRIES = 3;

	 // Array to store entered password
	 u8 password[PASSWORD_LENGTH];

	 // Initialize hardware components
	 initialize();

	 // Display initial message
	LCD_CLEAR_SCREEN();
	LCD_voidWriteString("  Press any key to      start");
	waitForKeyPress();
	
	
    // Variables for tracking attempts and authentication status
	u8 tries = 0;
	u8 flag = 0;
	u8 counter = 0;
	while(1)
	{
		// Clear counter for password entry
		counter = 0;
		
		u8 myString1[] = "Enter PassWord:";
		
		// Check if maximum tries reached or correct password entered
		while (tries < MAX_TRIES && flag ==0) {
			
			// Display prompt to enter password
			LCD_CLEAR_SCREEN();
			LCD_voidGoToXY(0,0);
			LCD_voidWriteString(myString1);
			
			 // Get password input from keypad
			KeyPress(password,PASSWORD_LENGTH);
			
			 // Check entered password
			if(CheckPassword(password,PASSWORD_LENGTH)){
				LCD_voidWriteString(" Correct PassWord");
				_delay_ms(1000);
				openDoor();
				
				flag = 1;// Set authentication flag
				
			}
			else{
				 // Display wrong password message
				LCD_CLEAR_SCREEN();
				LCD_voidGoToXY(0,0);
				
				LCD_voidWriteString(" Wrong PassWord ");
				_delay_ms(1000);
				
				tries++;// Increment attempts
			}
			 // Perform action for exceeded attempts
			if (tries>=3)
			{
				Wrong_Action();
			}	
		}	
	}
	return 0 ;
}


//void int
void initialize() {
	// Initialize components
	KPD_INIT();
	LCD_voidInit();
	
	 // Initialize buzzer pin direction
	DIO_voidSetPinDirection (DIO_PORTC,DIO_PIN6,DIO_PIN_OUTPUT);
	// Initialize LED pin direction
	DIO_voidSetPinDirection (DIO_PORTB,DIO_PIN7,DIO_PIN_OUTPUT);
	// Initialize servo motor
	SERVO_INT();
}

// Wait for key press on keypad
void waitForKeyPress() {
	
	while (KPD_u8GetPressedKey() == NO_PRESSED_KEY);
}

// Read input from keypad
void KeyPress(u8 *password,u8 PASSWORD_LENGTH ) {
	
	u8 counter=0 ;
	u8 Local_u8PressedKey;

	while(counter<PASSWORD_LENGTH)
	{
		Local_u8PressedKey = KPD_u8GetPressedKey();
		if(Local_u8PressedKey !=NO_PRESSED_KEY)
		{
			LCD_voidGoToXY(0,16+counter);
			
			LCD_voidWriteData(Local_u8PressedKey);
			password[counter]=Local_u8PressedKey;
			counter++;
		}
		else
		{
			//do nothing
		}
	}
	
	
}

// Check entered password

BOOL CheckPassword(u8 *password,u8 PASSWORD_LENGTH)
{
	BOOL flag=true;
	
	u8 CorrectPassworxd[]=/*"1234"*/{'1','2','3','4'};
	for(u8 i=0;i<PASSWORD_LENGTH;i++){
		if(password[i]!=CorrectPassworxd[i]){
			flag=false;
			
		}
	}
	
	return	flag;
}

//turn on servo motor to Open the door
void openDoor() {
	LCD_CLEAR_SCREEN();
	LCD_voidWriteString("Welcome");
	DIO_voidSetPinValue(DIO_PORTA,DIO_PIN4,DIO_PIN_HIGH);
	
	SERVO_ON(90);// Rotate servo to open position
	
}
// Actions to perform upon exceeding maximum attempts
void Wrong_Action(void)
{
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN7,DIO_PIN_HIGH);
	DIO_voidSetPinValue (DIO_PORTC,DIO_PIN6,DIO_PIN_HIGH);
}

```
### Hardware Abstraction Layer (HAL)

The HAL folder comprises drivers for various hardware components used in the system:

- **Keypad Driver:** Manages user input through the keypad for password entry.
- **LCD Display Driver:** Facilitates communication with the LCD display for displaying messages and prompts.
- **Servo Motor Driver:** Controls the servo motor for opening and closing the door.

### Microcontroller Abstraction Layer (MCAL)

The MCAL folder contains drivers for microcontroller-specific peripherals:

- **Digital I/O (DIO) Driver:** Manages digital input and output operations for interfacing with external devices.
- **PWM Driver:** Provides Pulse Width Modulation (PWM) functionality for controlling devices like servo motors with variable speed and position.

## Usage

1. Connect the hardware components to the AVR-Atmega32 microcontroller as per the provided circuit diagram.
2. Compile and upload the firmware onto the microcontroller.
3. Power up the system.
4. Enter the predefined password using the keypad.
5. Upon successful authentication, the servo motor will open the door, and a welcome message will be displayed on the LCD.
6. In case of unsuccessful attempts, appropriate feedback will be provided via the LCD and buzzer.

## Contributions

Contributions to enhance or extend the functionality of this project are welcome! If you encounter any bugs or have suggestions for improvements, feel free to open an issue or submit a pull request.

```
This README serves as a guide to understanding the project's purpose, components, architecture, and usage. Feel free to expand upon it further to provide additional details or instructions as needed.
