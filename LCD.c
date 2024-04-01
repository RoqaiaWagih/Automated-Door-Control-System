/*
 * LCD.c
 *
 * Created: 3/2/2024 11:17:44 AM
 *  Author: Dr. Roqaia Khalid
 */ 
#define F_CPU 16000000UL
#include "LCD.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "DIO_register.h"
#include "util/delay.h"



void LCD_voidInit(void){
	
	//PIN direction of DIO portA---&---portB
	//DIO_voidSetPortDirection(DIO_PORTA,  DIO_PORT_OUTPUT);
	//DIO_voidSetPortDirection(DIO_PORTB, DIO_PORT_OUTPUT);
	DIO_voidSetPinDirection (DIO_PORTA ,DIO_PIN3, DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection (DIO_PORTA ,DIO_PIN2, DIO_PIN_OUTPUT);
	
	DIO_voidSetPinDirection (DIO_PORTB , DIO_PIN0,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection (DIO_PORTB , DIO_PIN1,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection (DIO_PORTB , DIO_PIN2,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection (DIO_PORTB , DIO_PIN4,DIO_PIN_OUTPUT);
	_delay_ms(20);
	
  /*LCD_voidWriteCommand(0x02);
	LCD_voidWriteCommand(0x28);
	LCD_voidWriteCommand(0x0c);
	LCD_voidWriteCommand(0x01);
*///#define in .h hex better than binary
/*
	LCD_voidWriteCommand(0b00101000);//SET FUNCTION
	_delay_ms(1);
	LCD_voidWriteCommand(0b00001111);//DISPLAY
	_delay_ms(1);
	LCD_voidWriteCommand(0b00000001);//CLEAR
	_delay_ms(2);
	//LCD_voidWriteCommand(0b00000110);//
	LCD_voidWriteCommand(0b00000111);//SHIFTE
	_delay_ms(20);
	*/

LCD_voidWriteCommand(0x02);//SET FUNCTION
_delay_ms(10);
LCD_voidWriteCommand(0x28);//DISPLAY
_delay_ms(1);
LCD_voidWriteCommand(0x0e);
_delay_ms(2);
LCD_voidWriteCommand(0x01);//CLEAR
_delay_ms(10);
//LCD_voidWriteCommand(0b00000110);//
LCD_voidWriteCommand(0x06);//SHIFTE
_delay_ms(1);

	//data pins
	
	
	//control pins
	
	//configuration of 4-bit
	
}

void LCD_voidWriteData(u8 copy_u8data){
	//CONTROL PINS --- RW write ---RS data
	//sent  HIGH EN pulse
	//RW |= 0;
	     //0 by default in kit      
	//RS |=1;
	
	//EN |=1
	//DIO_voidSetPinValue(PA,EN,1);  
	//_delay_ms(2000);
	//sent data =u8data
	/* before sending the value*/
	DIO_voidSetPinValue(DIO_PORTA,RS,DIO_PIN_HIGH);
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,GET_BIT(copy_u8data,7));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,GET_BIT(copy_u8data,6));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,GET_BIT(copy_u8data,5));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,GET_BIT(copy_u8data,4));
//	DIO_voidSetPinValue(DIO_PORTA,RS,DIO_PIN_HIGH);
	DIO_voidSetPinValue(DIO_PORTA,EN,DIO_PIN_HIGH);
	_delay_us(1);
	DIO_voidSetPinValue(DIO_PORTA,EN,DIO_PIN_LOW);
	_delay_us(200);
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,GET_BIT(copy_u8data,3));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,GET_BIT(copy_u8data,2));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,GET_BIT(copy_u8data,1));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,GET_BIT(copy_u8data,0));
	//DIO_voidSetPinValue(DIO_PORTA,RS,DIO_PIN_HIGH);
	DIO_voidSetPinValue(DIO_PORTA,EN,DIO_PIN_HIGH);
	
	_delay_us(2);
	DIO_voidSetPinValue(DIO_PORTA,EN,DIO_PIN_LOW);
	_delay_ms(2);
	//sent LOW EN pulse
	//EN |=0
	
}

void LCD_voidWriteCommand(u8 copy_u8Command){
	//control pins --- RW write ---RS commend
	//sent  HIGH EN pulse
	//RW |= 0;
	     //0 by default in kit 
	//RS |=0;
	
	//EN |=1
	//DIO_voidSetPinValue(PA,EN,1);
	//_delay_ms(2000);
	//sent Commend=u8command
	DIO_voidSetPinValue(DIO_PORTA,RS,DIO_PIN_LOW);
 
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,GET_BIT(copy_u8Command,7));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,GET_BIT(copy_u8Command,6));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,GET_BIT(copy_u8Command,5));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,GET_BIT(copy_u8Command,4));
	//DIO_voidSetPinValue(DIO_PORTA,RS,DIO_PIN_LOW);
	DIO_voidSetPinValue(DIO_PORTA,EN,DIO_PIN_HIGH);
	_delay_us(1);
	DIO_voidSetPinValue(DIO_PORTA,EN,DIO_PIN_LOW);
	_delay_us(200);
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,GET_BIT(copy_u8Command,3));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,GET_BIT(copy_u8Command,2));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,GET_BIT(copy_u8Command,1));
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,GET_BIT(copy_u8Command,0));	
	//sent LOW EN pulse
	//EN |=0
	//DIO_voidSetPinValue(DIO_PORTA,RS,DIO_PIN_LOW);
	DIO_voidSetPinValue(DIO_PORTA,EN,DIO_PIN_HIGH);
	_delay_us(1);
	DIO_voidSetPinValue(DIO_PORTA,EN,DIO_PIN_LOW);
	_delay_ms(2);
	
}



void LCD_voidWriteString(u8 * copy_str){
	
	while(*copy_str !='\0'){
		LCD_voidWriteData(*copy_str);
		copy_str++;
	}
}

void LCD_voidGoToXY(u8 copy_u8Row,u8 copy_u8Col)
{
	if (copy_u8Row == 0)
	{
		if (copy_u8Col < 16 && copy_u8Col >= 0)
		{
			LCD_voidWriteCommand(0x80 + copy_u8Col);
		}
	}
	else if (copy_u8Row== 1)
	{
		if (copy_u8Col < 16 && copy_u8Col >= 0)
		{
			LCD_voidWriteCommand(0xC0+ copy_u8Col);
		}
	}
}
void LCD_CLEAR_SCREEN(void)
{
	LCD_voidWriteCommand(0x01);
}

void LCD_voidWriteNumber( u32 Copy_u8num )
{
	u8 str[10]={0},i=0 ,j;
	if(Copy_u8num==0)
	{
		LCD_voidWriteData('0');
		return;
	}
	if(Copy_u8num<0)
	{
		Copy_u8num=Copy_u8num*(-1);
		LCD_voidWriteData('-');
	}
	
	while(Copy_u8num!=0)
	{
		str[i]=Copy_u8num%10 +'0';
		Copy_u8num=Copy_u8num/10;
		i++;
		
	}
	
	for (j=i;j>0;j--)
	{
		LCD_voidWriteData(str[j-1]);
	}
}

void LCD_ClearLoc(u8 copy_u8Row,u8 copy_u8Col,u8 num)
{
	u8 i;
	LCD_voidGoToXY(copy_u8Row,copy_u8Col);
	for (i=0;i<num;i++)
	{
		LCD_voidWriteData(' ');
	}
	
}
void LCD_voidWriteSpecialCharToCGRAM(u8 * copy_u8data , u8 copy_u8ByteNum );

void LCD_voidDisplaySpecialChar(u8 copy_u8ByteNum ) ;

