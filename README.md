# Automated-Door-Control-System

using AVR-Atmega32, LCD, Buzzer, servo Motor,LED and Keypad

1.The system will wait until someone press any button on the keypad to start the system.

2.Then give the user 3 tries to enter the password.

- If the password is correct the system will make the user to choose whether it wants to open door or change password.
- If the user want to open door LCD will display Welcome for 1 second, turn the led on and open door.
- If the user want to change the password the system will ask the user to enter the new password 2 times if the 2 passwords are matched then it will 	 change the password  .

- If the password is wrong the LCD will display "wrong password" and "Try again".
	
- If the password is wrong after 3 tries the LCD will dispaly "wrong password" and "No more tries" and the Buzzer will be turned on for 2 seconds then the system will stop.


## The hardware that has been used is:  
1. AVR-Atmega32
2. Keypad
3. Buzzer
4. LED Display
5. LCD Display
6. servo Motor

## Architecture Layer Applied:

- APP Folder has the Main Application --> `main.c`
  
- HAL Folder has : 
1. LED Display Driver
2. Keypad Driver
3. Buzzer Driver
4. LED Display Driver
5. LCD Display Driver
6. servo Motor
       
- MCAL Folder has DIO Driver (which is needed because HAL Layer Connecting to MCAL Layer).
- LIB Folder has .h Files has useful Macros to make the code easier and more readable.
