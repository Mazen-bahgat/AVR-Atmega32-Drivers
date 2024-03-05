/*
 * SevSeg_CFG.h
 *
 * Created: 3/1/2024 2:31:16 PM
 *  Author: Mazen
 */ 


#ifndef SEVSEG_CFG_H_
#define SEVSEG_CFG_H_


// S7 Ports
#define S7_Data_Port		DIO_PORTB

// S7 Data Pins
#define S7_Data_PIN0		DIO_PIN0
#define S7_Data_PIN1		DIO_PIN1
#define S7_Data_PIN2		DIO_PIN2
#define S7_Data_PIN3		DIO_PIN4

// S7 Control Pins
#define S7_E1_PIN			DIO_PIN3
#define S7_E2_PIN			DIO_PIN2
#define S7_E3_PIN			DIO_PIN5
#define S7_E4_PIN			DIO_PIN6

#define S7_E1_PORT			DIO_PORTA
#define S7_E2_PORT			DIO_PORTA
#define S7_E3_PORT			DIO_PORTB
#define S7_E4_PORT			DIO_PORTB



#define COMMON_CATHODE 0
#define COMMON_ANODE 1
#define COMMON COMMON_ANODE



#endif /* SEVSEG_CFG_H_ */