/*
 * IncFile1.h
 *
 * Created: 3/2/2024 11:12:19 AM
 *  Author: Dr. Roqaia Khalid
 */ 


#ifndef LCD_H_
#define LCD_H_
#include "STD_TYPES.h"
//#define DA DDRA
#define PA DIO_PORTA
//#define DB DDRB (dont need 
#define PB DIO_PORTB
//control pins
//#define RW 
#define RS 3
#define EN 2
//data pins
#define D4 0
#define D5 1
#define D6 2
#define D7 4

//COMMAND 



void LCD_voidInit(void);

void LCD_voidWriteData(u8 copy_u8data);

void LCD_voidWriteCommand(u8 copy_u8Command);



void LCD_voidWriteString(u8 * copy_str);

void LCD_voidGoToXY(u8 copy_u8Row,u8 copy_u8Col);

void LCD_voidClear(void);

void LCD_voidWriteNumber( u32 Copy_u8num );


void LCD_voidWriteSpecialCharToCGRAM(u8 * copy_u8data , u8 copy_u8ByteNum );

void LCD_voidDisplaySpecialChar(u8 copy_u8ByteNum ) ;


void LCD_ClearLoc(u8 copy_u8Row,u8 copy_u8Col,u8 num);

#endif /* LCD_H_ */