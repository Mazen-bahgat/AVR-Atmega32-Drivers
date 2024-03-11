/*
* KeyPad_interface.h
*
* Created: 3/4/2024 9:23:39 PM
*  Author: Mazen
*/


#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_

#include "KeyPad_CFG.h"
#define Keypad_Rows_IN_Cols_OUT				0
#define Keypad_Rows_OUT_Cols_IN				1 //////

void Keypad_voidInit(void);
void Keypad_voidGetVal(u8 *copy_pu8GetKeyVal);



#endif /* KEYPAD_INTERFACE_H_ */