/*
 * DIO_program.c
 *
 * Created: 3/7/2024 
 *  Author:  Roqaia Khalid
 */ 
/*********************MCAL*********************/
#include "DIO_config.h"
#include "DIO_interface.h"
#include "DIO_register.h"
/*********************UTILTES_TYPES*********************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"


/* Description : Initialize PINS Directions       */

void DIO_voidInitialization (void)
{
	DDRA = DIO_u8_PORTA_DIRECTIONS;
	DDRB = DIO_u8_PORTB_DIRECTIONS;
	DDRC = DIO_u8_PORTC_DIRECTIONS;
	DDRD = DIO_u8_PORTD_DIRECTIONS;

	}/*END OF Initialization Function                 */




void DIO_voidSetPinDirection (u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinDirection){

	switch(copy_u8PortId){
		
		case DIO_PORTA:
		
		      if(copy_u8PinId<=BIO_u8_PORTA_END){
		      	if (copy_u8PinDirection==DIO_PIN_OUTPUT)
		      	{
		      		//set
		      		SET_BIT(DDRA, copy_u8PinId);
		      		}else if(copy_u8PinDirection==DIO_PIN_INPUT){
		      		//clr
		      		CLR_BIT(DDRA, copy_u8PinId);
					  }
					  else{
		      		//invaled
					  }
		      	}else{
		      	//invaled
		      }
		      
		break;
		
		case DIO_PORTB:
		
		       if(copy_u8PinId<=BIO_u8_PORTB_END){
		       	if (copy_u8PinDirection==DIO_PIN_OUTPUT)
		       	{
		       		//set
		       		SET_BIT(DDRB, copy_u8PinId);
		       		}else if(copy_u8PinDirection==DIO_PIN_INPUT){
		       		//clr
		       		CLR_BIT(DDRB, copy_u8PinId);
		       		
		       		}else{
		       		//invaled
		       	}
		       	}else{
		       	//invaled
		       }
		break;
		
		case DIO_PORTC:
		        if(copy_u8PinId<=BIO_u8_PORTC_END){
		        	if (copy_u8PinDirection==DIO_PIN_OUTPUT)
		        	{
		        		//set
		        		SET_BIT(DDRC, copy_u8PinId);
		        		}else if(copy_u8PinDirection==DIO_PIN_INPUT){
		        		//clr
		        		CLR_BIT(DDRC, copy_u8PinId);
		        		
		        		}else{
		        		//invaled
		        	     }
		        	}else{
		        	//invaled
		        }
		
		break;
		
		case DIO_PORTD:
		
		        if(copy_u8PinId<=BIO_u8_PORTD_END){
		        	if (copy_u8PinDirection==DIO_PIN_OUTPUT)
		        	{
		        		//set
		        		SET_BIT(DDRD, copy_u8PinId);
		        		}else if(copy_u8PinDirection==DIO_PIN_INPUT){
		        		//clr
		        		CLR_BIT(DDRD, copy_u8PinId);
		        		
		        		}else{
		        		//invaled
		        	}
		        	}else{
		        	//invaled
		        }
		break;
		default:
		//invaled
		break;
	}
}
/* Description : This Function Set The Pin        */
/*               Value to either High or Low      */
void DIO_voidSetPinValue (u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinValue){
	
	switch(copy_u8PortId){
		
		case DIO_PORTA:
		
		        if(copy_u8PinId<=BIO_u8_PORTA_END){
		        	if (copy_u8PinValue==DIO_PIN_HIGH)
		        	{
		        		//set
		        		SET_BIT(PORTA, copy_u8PinId);
		        		}else if(copy_u8PinValue==DIO_PIN_LOW){
		        		//clr
		        		CLR_BIT(PORTA, copy_u8PinId);
		        		
		        		}else{
		        		//invaled
		        	}
		        	}else{
		        	//invaled
		        }
		
		break;
		
		case DIO_PORTB:
		
		        if(copy_u8PinId<=BIO_u8_PORTB_END){
		        	if (copy_u8PinValue==DIO_PIN_HIGH)
		        	{
		        		//set
		        		SET_BIT(PORTB, copy_u8PinId);
		        		}else if(copy_u8PinValue==DIO_PIN_LOW){
		        		//clr
		        		CLR_BIT(PORTB, copy_u8PinId);
		        		
		        		}else{
		        		//invaled
		        	}
		        	}else{
		        	//invaled
		        }
		break;
		
		case DIO_PORTC:
		        if(copy_u8PinId<=BIO_u8_PORTC_END){
		        	if (copy_u8PinValue==DIO_PIN_HIGH)
		        	{
		        		//set
		        		SET_BIT(PORTC, copy_u8PinId);
		        		}else if(copy_u8PinValue==DIO_PIN_LOW){
		        		//clr
		        		CLR_BIT(PORTC, copy_u8PinId);
		        		
		        		}else{
		        		//invaled
		        	}
		        	}else{
		        	//invaled
		        }
		
		break;
		
		case DIO_PORTD:
		
		        if(copy_u8PinId<=BIO_u8_PORTD_END){
		        	if (copy_u8PinValue==DIO_PIN_HIGH)
		        	{
		        		//set
		        		SET_BIT(PORTD, copy_u8PinId);
		        		}else if(copy_u8PinValue==DIO_PIN_LOW){
		        		//clr
		        		CLR_BIT(PORTD, copy_u8PinId);
		        		
		        		}else{
		        		//invaled
		        	}
		        	}else{
		        	//invaled
		        }
		break;
		default:
		break;
	}
}
/* Description : This Function GET The Pin        */
/*               Value to either High or Low      */
void DIO_voidGetPinValue (u8 copy_u8PortId, u8 copy_u8PinId, u8* copy_pu8PinValue){
	switch(copy_u8PortId){
		
		case DIO_PORTA:
		
		if(copy_u8PinId<=BIO_u8_PORTA_END){
			
			*copy_pu8PinValue=GET_BIT(PINA, copy_u8PinId);
		}
		else{
			//invalid
		}
		
		break;
		
		case DIO_PORTB:
		
		if(copy_u8PinId<=BIO_u8_PORTB_END){
			
			*copy_pu8PinValue=GET_BIT(PINB, copy_u8PinId);
		}
		else{
			//invalid
		}
		break;
		
		case DIO_PORTC:
		if(copy_u8PinId<=BIO_u8_PORTC_END){
			
			*copy_pu8PinValue=GET_BIT(PINC, copy_u8PinId);
		}
		else{
			//invalid
		}
		break;
		
		case DIO_PORTD:
		
		if(copy_u8PinId<=BIO_u8_PORTD_END){
			
			*copy_pu8PinValue=GET_BIT(PIND, copy_u8PinId);
		}
		else{
			//invalid
		}
		break;
		default:
		break;
	}
}

void DIO_voidTogglePinValue             (u8 copy_u8PortId, u8 copy_u8PinId){
	switch(copy_u8PortId){
		
		case DIO_PORTA:
		
		if(copy_u8PinId<=BIO_u8_PORTA_END){
			
			TOG_BIT(PORTA, copy_u8PinId);
		}
		else{
			//invalid
		}
		
		break;
		
		case DIO_PORTB:
		
		if(copy_u8PinId<=BIO_u8_PORTB_END){
			
			TOG_BIT(PORTB, copy_u8PinId);
		}
		else{
			//invalid
		}
		break;
		
		case DIO_PORTC:
		if(copy_u8PinId<=BIO_u8_PORTC_END){
			
		TOG_BIT(PORTC, copy_u8PinId);}
		else{
			//invalid
		}
		break;
		
		case DIO_PORTD:
		
		if(copy_u8PinId<=BIO_u8_PORTD_END){
			
			TOG_BIT(PORTD, copy_u8PinId);
		}
		else{
			//invalid
		}
		break;
		default:
		break;
	}
}
void DIO_voidActivePinInPullUpResistance(u8 copy_u8PortId, u8 copy_u8PinId){

}



/* Port Apis */
void DIO_voidSetPortDirection            (u8 copy_u8PortId, u8 copy_u8PortDirection){

	switch(copy_u8PortId){
		
		case DIO_PORTA:
		
		
		if (copy_u8PortDirection== DIO_PORT_OUTPUT/*DIO_PIN_OUTPUT  (Port not pin)*/)
		{
			//set
			DDRA= 0xff;
			}else if(copy_u8PortDirection==DIO_PORT_INPUT){
			//clr
			DDRA= 0x00;
			
			}else{
			//invaled
		}
		
		
		break;
		
		case DIO_PORTB:
		
		
		if (copy_u8PortDirection==DIO_PORT_OUTPUT)
		{
			//set
			DDRB= 0xff;
			}else if(copy_u8PortDirection==DIO_PORT_INPUT){
			//clr
			DDRB= 0x00;
			
			}else{
			//invaled
		}
		
		break;
		
		case DIO_PORTC:
		
		if (copy_u8PortDirection==DIO_PORT_OUTPUT)
		{
			//set
			DDRC= 0xff;
			}else if(copy_u8PortDirection==DIO_PORT_INPUT){
			//clr
			DDRC= 0x00;
			
			}else{
			//invaled
		}
		
		break;
		
		case DIO_PORTD:
		
		
		if (copy_u8PortDirection==DIO_PORT_OUTPUT)
		{
			//set
			DDRD= 0xff;
			}else if(copy_u8PortDirection==DIO_PORT_INPUT){
			//clr
			DDRD= 0x00;
			
			}else{
			//invaled
		}
		
		break;
		default:
		break;
	}
}
void DIO_voidSetPortValue (u8 copy_u8PortId, u8 copy_u8PortValue){
	switch(copy_u8PortId){
		
		case DIO_PORTA:
		
		if (copy_u8PortValue==DIO_PORT_OUTPUT/*DIO_PIN_OUTPUT   Port not pin*/)
		{
			//set
			PORTA= 0xff;
		}
		else if(copy_u8PortValue==DIO_PORT_INPUT){
			//clr
			PORTA= 0x00;
			
			}else{
			//invaled
		}
		
		
		break;
		
		case DIO_PORTB:
		
		
		if (copy_u8PortValue==DIO_PORT_OUTPUT)
		{
			//set
			PORTB= 0xff;
		}
		else if(copy_u8PortValue==DIO_PORT_INPUT){
			//clr
			PORTB= 0x00;
			
		}
		else{
			//invaled
		}
		
		break;
		
		case DIO_PORTC:
		
		if (copy_u8PortValue==DIO_PORT_OUTPUT)
		{
			//set
			PORTC= 0xff;
			}else if(copy_u8PortValue==DIO_PORT_INPUT){
			//clr
			PORTC= 0x00;
			
			}else{
			//invaled
		}
		
		break;
		
		case DIO_PORTD:
		
		
		if (copy_u8PortValue==DIO_PORT_OUTPUT)
		{
			//set
			PORTD= 0xff;
			}else if(copy_u8PortValue==DIO_PORT_INPUT){
			//clr
			PORTD= 0x00;
			
			}else{
			//invaled
		}
		
		break;
		default:
		break;
	}
}


void DIO_voidGetPortValue (u8 copy_u8PortId, u8* copy_pu8PortValue){
	switch(copy_u8PortId){
		
		case DIO_PORTA:
		
		
		*copy_pu8PortValue=PORTA;
		
		
		break;
		
		case DIO_PORTB:
		
		
		*copy_pu8PortValue=PORTB;
		
		break;
		
		case DIO_PORTC:
		
		*copy_pu8PortValue=PORTC;
		
		break;
		
		case DIO_PORTD:
		
		
		*copy_pu8PortValue=PORTD;
		
		break;
		default:
		break;
	}
}
void DIO_voidTogglePortValue(u8 copy_u8PortId) {
	switch(copy_u8PortId) {
		case DIO_PORTA:
		PORTA ^= 0xFF;
		break;

		case DIO_PORTB:
		PORTB ^= 0xFF;
		break;

		case DIO_PORTC:
		PORTC ^= 0xFF;
		break;

		case DIO_PORTD:
		PORTD ^= 0xFF;
		break;

		default:
		break;
	}
}

void DIO_voidActivePortInPullUpResistance(u8 copy_u8PortId){}
