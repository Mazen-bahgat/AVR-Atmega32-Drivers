/*
* SevSeg.c
*
* Created: 3/1/2024 2:32:09 PM
*  Author: Mazen
*/
#define F_CPU 16000000
#include "SevSeg_interface.h"
#include "util\delay.h"
void SevSeg_init(){
	
	DIO_voidSetPinDirection(S7_Data_Port,S7_Data_PIN0,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(S7_Data_Port,S7_Data_PIN1,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(S7_Data_Port,S7_Data_PIN2,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(S7_Data_Port,S7_Data_PIN3,DIO_PIN_OUTPUT);
	
	
	DIO_voidSetPinDirection(S7_E1_PORT,S7_E1_PIN,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(S7_E2_PORT,S7_E2_PIN,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(S7_E3_PORT,S7_E3_PIN,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(S7_E4_PORT,S7_E4_PIN,DIO_PIN_OUTPUT);

	DIO_voidSetPinValue(S7_Data_Port,S7_Data_PIN0,DIO_PIN_HIGH);
	DIO_voidSetPinValue(S7_Data_Port,S7_Data_PIN1,DIO_PIN_HIGH);
	DIO_voidSetPinValue(S7_Data_Port,S7_Data_PIN2,DIO_PIN_HIGH);
	DIO_voidSetPinValue(S7_Data_Port,S7_Data_PIN3,DIO_PIN_HIGH);
	
	DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_HIGH);
	DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_HIGH);
	DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_HIGH);
	DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
	
	
	
}
void SevSeg_print_num(u16 copy_u16diplaynum){
	u16 temp=0;
	if(copy_u16diplaynum>=0 && copy_u16diplaynum<10){
		DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_LOW);
		DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
		switch (copy_u16diplaynum){
			case(0):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(1):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(2):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(3):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(4):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(5):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(6):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(7):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(8):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			case(9):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			
		}
		
	}
	else if(copy_u16diplaynum>=10 && copy_u16diplaynum<100){
		//773
		//----------------first digit
		temp=copy_u16diplaynum%10;//3
		copy_u16diplaynum/=10;//77
		DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_LOW);
		DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
		switch (temp){
			case(0):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(1):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(2):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(3):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(4):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(5):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(6):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(7):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(8):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			case(9):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
		}
		//----------------------------second digit
		//77
		_delay_ms(10);
		temp=copy_u16diplaynum%10;//7
		copy_u16diplaynum/=10;//7
		DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_LOW);
		DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
		switch (temp){
			case(0):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(1):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(2):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(3):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(4):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(5):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(6):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(7):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(8):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			case(9):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;

	}
	_delay_ms(10);
	}
	else if(copy_u16diplaynum>=100 && copy_u16diplaynum<1000){
				//----------------first digit
				temp=copy_u16diplaynum%10;
				copy_u16diplaynum/=10;
				DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_LOW);
				DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_HIGH);
				DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_HIGH);
				DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
				switch (temp){
					case(0):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(1):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(2):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(3):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(4):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(5):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(6):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(7):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(8):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
					break;
					case(9):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
					break;
				}
				//----------------------------second digit
				_delay_ms(2);
				temp=copy_u16diplaynum%10;
				copy_u16diplaynum/=10;
				DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_HIGH);
				DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_LOW);
				DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_HIGH);
				DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
				switch (temp){
					case(0):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(1):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(2):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(3):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(4):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(5):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(6):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(7):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(8):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
					break;
					case(9):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
					break;
					
				}
				_delay_ms(2);
				//-----------------------Third digit
				temp=copy_u16diplaynum%10;
				copy_u16diplaynum/=10;
				DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_HIGH);
				DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_HIGH);
				DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_LOW);
				DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
				switch (temp){
					case(0):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(1):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(2):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(3):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(4):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(5):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(6):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(7):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
					break;
					case(8):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
					break;
					case(9):
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
					DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
					break;
					
				}
				_delay_ms(2);
		
	}
	else if(copy_u16diplaynum>=1000 && copy_u16diplaynum<10000){
		//----------------first digit
		temp=copy_u16diplaynum%10;
		copy_u16diplaynum/=10;
		DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_LOW);
		DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
		switch (temp){
			case(0):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(1):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(2):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(3):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(4):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(5):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(6):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(7):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(8):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			case(9):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
		}
		//----------------------------second digit
		_delay_ms(2);
		temp=copy_u16diplaynum%10;
		copy_u16diplaynum/=10;
		DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_LOW);
		DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
		switch (temp){
			case(0):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(1):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(2):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(3):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(4):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(5):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(6):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(7):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(8):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			case(9):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			
		}
		_delay_ms(2);
		//-----------------------Third digit
		temp=copy_u16diplaynum%10;
		copy_u16diplaynum/=10;
		DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_LOW);
		DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_HIGH);
		switch (temp){
			case(0):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(1):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(2):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(3):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(4):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(5):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(6):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(7):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(8):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			case(9):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			
		}
		_delay_ms(2);
		//-----------------------fourth digit
		temp=copy_u16diplaynum%10;
		copy_u16diplaynum/=10;
		DIO_voidSetPinValue(S7_E1_PORT,S7_E1_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E2_PORT,S7_E2_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E3_PORT,S7_E3_PIN,DIO_PIN_HIGH);
		DIO_voidSetPinValue(S7_E4_PORT,S7_E4_PIN,DIO_PIN_LOW);
		switch (temp){
			case(0):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(1):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(2):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(3):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(4):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(5):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(6):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(7):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW);
			break;
			case(8):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			case(9):
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_PIN_HIGH);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
			DIO_voidSetPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_HIGH);
			break;
			
		}
		_delay_ms(2);
		
	}
	
	
	
	
	
	
}
