/*
 * KeyPad_CFG.h
 *
 * Created: 3/4/2024 9:23:18 PM
 *  Author: Mazen
 */ 


#ifndef KEYPAD_CFG_H_
#define KEYPAD_CFG_H_

#define Keypad_Rows_Port DIO_PORTC
#define Keypad_Cols_Port DIO_PORTD

#include "DIO_interface.h"

// Keypad Rows Pins
#define Keypad_Row0						DIO_PIN5	
#define Keypad_Row1						DIO_PIN4	
#define Keypad_Row2						DIO_PIN3	
#define Keypad_Row3						DIO_PIN2	

// Keypad Cols Pins
#define Keypad_Col0						DIO_PIN7
#define Keypad_Col1						DIO_PIN6
#define Keypad_Col2						DIO_PIN5
#define Keypad_Col3						DIO_PIN3


#endif /* KEYPAD_CFG_H_ */