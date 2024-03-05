/*
* DIO.c
*
* Created: 3/1/2024 10:23:51 AM
*  Author: Mazen
*/
#include "DIO_interface.h"

/* Pins Apis */

void DIO_voidSetPinDirection            (u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinDirection){
	switch(copy_u8PortId){
		case (DIO_PORTA):
		if(copy_u8PinDirection)
		set_bit(DDRA,copy_u8PinId);
		else
		clear_bit(DDRA,copy_u8PinId);
		break;
		
		case (DIO_PORTB):
		if(copy_u8PinDirection)
		set_bit(DDRB,copy_u8PinId);
		else
		clear_bit(DDRB,copy_u8PinId);
		break;

		case (DIO_PORTC):
		if(copy_u8PinDirection)
		set_bit(DDRC,copy_u8PinId);
		else
		clear_bit(DDRC,copy_u8PinId);
		break;
		
		case (DIO_PORTD):
		if(copy_u8PinDirection)
		set_bit(DDRD,copy_u8PinId);
		else
		clear_bit(DDRD,copy_u8PinId);
		break;
		
		
	}
	
	
}

void DIO_voidSetPinValue                (u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinValue){
	
	switch(copy_u8PortId){
		case (DIO_PORTA):
		if(copy_u8PinValue)
		set_bit(PORTA,copy_u8PinId);
		else
		clear_bit(PORTA,copy_u8PinId);
		break;
		case (DIO_PORTB):
		if(copy_u8PinValue)
		set_bit(PORTB,copy_u8PinId);
		else
		clear_bit(PORTB,copy_u8PinId);
		break;
		case (DIO_PORTC):
		if(copy_u8PinValue)
		set_bit(PORTC,copy_u8PinId);
		else
		clear_bit(PORTC,copy_u8PinId);
		break;
		case (DIO_PORTD):
		if(copy_u8PinValue)
		set_bit(PORTC,copy_u8PinId);
		else
		clear_bit(PORTC,copy_u8PinId);
		break;
		
	}
	
}


void DIO_voidGetPinValue                (u8 copy_u8PortId, u8 copy_u8PinId, u8* copy_pu8PinValue){
	
	switch(copy_u8PortId){
		case (DIO_PORTA):
		*copy_pu8PinValue=get_bit(PINA,copy_u8PinId);
		break;
		
		case (DIO_PORTB):
		*copy_pu8PinValue=get_bit(PINB,copy_u8PinId);
		break;
		
		case (DIO_PORTC):
		*copy_pu8PinValue=get_bit(PINC,copy_u8PinId);
		break;
		
		case (DIO_PORTD):
		*copy_pu8PinValue=get_bit(PIND,copy_u8PinId);
		break;
		
		
		
	}
	
}

void DIO_voidTogglePinValue             (u8 copy_u8PortId, u8 copy_u8PinId){
	
	switch(copy_u8PortId){
		case (DIO_PORTA):
		tog_bit(PORTA,copy_u8PinId);
		
		break;
		case (DIO_PORTB):
		tog_bit(PORTB,copy_u8PinId);
		
		break;
		case (DIO_PORTC):
		tog_bit(PORTC,copy_u8PinId);
		
		break;
		case (DIO_PORTD):
		tog_bit(PORTD,copy_u8PinId);
		
		break;
		
	}
	
}

void DIO_voidActivePinInPullUpResistance(u8 copy_u8PortId, u8 copy_u8PinId){
	
	switch(copy_u8PortId)
	{
		case DIO_PORTA:
		set_bit(PORTA, copy_u8PinId);
		break;
		
		case DIO_PORTB:
		set_bit(PORTB, copy_u8PinId);
		break;
		
		case DIO_PORTC:
		set_bit(PORTC, copy_u8PinId);
		break;
		
		case DIO_PORTD:
		set_bit(PORTD, copy_u8PinId);
		break;
		
		default:
		break;
	}
	
	
}


/* Port Apis */

void DIO_voidSetPortDirection            (u8 copy_u8PortId, u8 copy_u8PortDirection){
	switch(copy_u8PortId){
		case (DIO_PORTA):
		if(copy_u8PortDirection)
		DDRA=DIO_PORT_OUTPUT;
		else
		DDRA=DIO_PORT_INPUT;
		break;
		
		case (DIO_PORTB):
		if(copy_u8PortDirection)
		DDRB=DIO_PORT_OUTPUT;
		else
		DDRB=DIO_PORT_INPUT;
		break;

		case (DIO_PORTC):
		if(copy_u8PortDirection)
		DDRC=DIO_PORT_OUTPUT;
		else
		DDRC=DIO_PORT_INPUT;
		break;
		
		case (DIO_PORTD):
		if(copy_u8PortDirection)
		DDRD=DIO_PORT_OUTPUT;
		else
		DDRD=DIO_PORT_INPUT;
		break;
		
		
	}
	
	
	
}
void DIO_voidSetPortValue                (u8 copy_u8PortId, u8 copy_u8PortValue){
	
	switch(copy_u8PortId){
		case (DIO_PORTA):
		if(copy_u8PortValue)
		PORTA=DIO_PORT_HIGH;
		else
		PORTA=DIO_PORT_LOW;
		break;
		case (DIO_PORTB):
		if(copy_u8PortValue)
		PORTB=DIO_PORT_HIGH;
		else
		PORTB=DIO_PORT_LOW;
		break;
		case (DIO_PORTC):
		if(copy_u8PortValue)
		PORTC=DIO_PORT_HIGH;
		else
		PORTC=DIO_PORT_LOW;
		break;
		case (DIO_PORTD):
		if(copy_u8PortValue)
		PORTD=DIO_PORT_HIGH;
		else
		PORTD=DIO_PORT_LOW;
		break;
		
	}
	
}
void DIO_voidGetPortValue                (u8 copy_u8PortId, u8* copy_pu8PortValue){
	switch(copy_u8PortId){
		case (DIO_PORTA):
		*copy_pu8PortValue=PINA;
		break;
		
		case (DIO_PORTB):
		*copy_pu8PortValue=PINB;
		break;
		
		case (DIO_PORTC):
		*copy_pu8PortValue=PINC;
		break;
		
		case (DIO_PORTD):
		*copy_pu8PortValue=PIND;
		break;
		
		
		
	}
	
	
	
}
void DIO_voidTogglePortValue             (u8 copy_u8PortId){
	
	switch(copy_u8PortId){
		case (DIO_PORTA):
		PORTA=~PORTA;
		
		break;
		case (DIO_PORTB):
		PORTB=~PORTB;
		
		break;
		case (DIO_PORTC):
		PORTC=~PORTC;
		
		break;
		case (DIO_PORTD):
		PORTD=~PORTD;
		break;
		
	}
	
}
void DIO_voidActivePortInPullUpResistance(u8 copy_u8PortId){
	
	switch(copy_u8PortId)
	{
		case DIO_PORTA:
		PORTA=DIO_PORT_HIGH;
		break;
		
		case DIO_PORTB:
		PORTB=DIO_PORT_HIGH;
		break;
		
		case DIO_PORTC:
		PORTC=DIO_PORT_HIGH;
		break;
		
		case DIO_PORTD:
		PORTC=DIO_PORT_HIGH;
		break;
		
		
	}
}