/*
 * LCD_CFG.h
 *
 * Created: 3/2/2024 11:49:39 AM
 *  Author: Mazen
 */ 


#ifndef LCD_CFG_H_
#define LCD_CFG_H_

#include "Bit_Math.h"
#include "Std_Types.h"
#include "DIO_interface.h"

#define LCD_CONTROL_PORT DIO_PORTA
#define LCD_DATA_PORT DIO_PORTB

#define RS_PIN DIO_PIN3
#define EN_PIN DIO_PIN2

#define D4_PIN DIO_PIN0
#define D5_PIN DIO_PIN1
#define D6_PIN DIO_PIN2
#define D7_PIN DIO_PIN4




#endif /* LCD_CFG_H_ */