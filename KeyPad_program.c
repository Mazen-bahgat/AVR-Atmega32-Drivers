/*
 * KeyPad_program.c
 *
 * Created: 3/4/2024 9:23:56 PM
 *  Author: Mazen
 */ 
#include "KeyPad_interface.h"

u8 arr[4][4]={
	{'1','2','3','/'},
	{'4','5','6','*'},
	{'7','8','9','-'},
	{'c','0','=','+'}
};

void Keypad_voidInit(void){
	
	DIO_voidSetPinDirection(Keypad_Rows_Port,Keypad_Row0,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(Keypad_Rows_Port,Keypad_Row1,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(Keypad_Rows_Port,Keypad_Row2,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(Keypad_Rows_Port,Keypad_Row3,DIO_PIN_OUTPUT);
	
	DIO_voidSetPinDirection(Keypad_Cols_Port,Keypad_Col0,DIO_PIN_INPUT);
	DIO_voidSetPinDirection(Keypad_Cols_Port,Keypad_Col1,DIO_PIN_INPUT);
	DIO_voidSetPinDirection(Keypad_Cols_Port,Keypad_Col2,DIO_PIN_INPUT);
	DIO_voidSetPinDirection(Keypad_Cols_Port,Keypad_Col3,DIO_PIN_INPUT);
	
	DIO_voidSetPinValue(Keypad_Rows_Port,Keypad_Row0,DIO_PIN_HIGH);
	DIO_voidSetPinValue(Keypad_Rows_Port,Keypad_Row1,DIO_PIN_HIGH);
	DIO_voidSetPinValue(Keypad_Rows_Port,Keypad_Row2,DIO_PIN_HIGH);
	DIO_voidSetPinValue(Keypad_Rows_Port,Keypad_Row3,DIO_PIN_HIGH);
	
	DIO_voidActivePinInPullUpResistance(Keypad_Cols_Port,Keypad_Col0);
	DIO_voidActivePinInPullUpResistance(Keypad_Cols_Port,Keypad_Col1);
	DIO_voidActivePinInPullUpResistance(Keypad_Cols_Port,Keypad_Col2);
	DIO_voidActivePinInPullUpResistance(Keypad_Cols_Port,Keypad_Col3);
	
	
	
	
}

void Keypad_voidGetVal(u8 *copy_pu8GetKeyVal){
	u8 i=0,j=0;
	u8 Pin_val=0;
	
	for (i = Keypad_Row0; i >= Keypad_Row3; i--)
	{
		DIO_voidSetPinValue(Keypad_Rows_Port, i, DIO_PIN_LOW);
		for (j = Keypad_Col0; j >= Keypad_Col3+1; j--)
		{
			if(j==4)
			DIO_voidGetPinValue(Keypad_Cols_Port,j-1,&Pin_val);
			else
			DIO_voidGetPinValue(Keypad_Cols_Port,j,&Pin_val);
			if (!Pin_val)
			{
				*copy_pu8GetKeyVal = arr[Keypad_Row0-i][Keypad_Col0-j];
				while(!Pin_val){
					if(j==4)
					DIO_voidGetPinValue(Keypad_Cols_Port,j-1,&Pin_val);
					else
					DIO_voidGetPinValue(Keypad_Cols_Port,j,&Pin_val);
				}
			}
		}
		DIO_voidSetPinValue(Keypad_Rows_Port, i, DIO_PIN_HIGH);
	}
	
}