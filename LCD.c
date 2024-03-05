/*
* LCD.c
*
* Created: 3/2/2024 11:35:46 AM
*  Author: Mazen
*/
#include "LCD_Interface.h"
#define F_CPU	16000000
#include <util/delay.h>

void LCD_voidInit(void){
	DIO_voidSetPinDirection(LCD_CONTROL_PORT,RS_PIN,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_OUTPUT);
	//----------------------------------
	DIO_voidSetPinDirection(LCD_DATA_PORT,D4_PIN,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(LCD_DATA_PORT,D5_PIN,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(LCD_DATA_PORT,D6_PIN,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(LCD_DATA_PORT,D7_PIN,DIO_PIN_OUTPUT);
	//-------------------------------------
	DIO_voidSetPinValue(LCD_CONTROL_PORT,RS_PIN,DIO_PIN_LOW);
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_LOW);
	//-------------------------------------
	DIO_voidSetPinValue(LCD_DATA_PORT,D4_PIN,DIO_PIN_LOW);
	DIO_voidSetPinValue(LCD_DATA_PORT,D5_PIN,DIO_PIN_LOW);
	DIO_voidSetPinValue(LCD_DATA_PORT,D6_PIN,DIO_PIN_LOW);
	DIO_voidSetPinValue(LCD_DATA_PORT,D7_PIN,DIO_PIN_LOW);
	
	_delay_ms(50);
	LCD_voidWriteCommand(0x33);
	LCD_voidWriteCommand(0x32);
	LCD_voidWriteCommand(LCD_4_Bit_Mode_2_Line_5_8_Dots>>4);
	LCD_voidWriteCommand(LCD_4_Bit_Mode_2_Line_5_8_Dots);
	LCD_voidWriteCommand(Display_Cursor_Blink_All_OFF);
	LCD_voidWriteCommand(Clear_Display_Screen);
	LCD_voidWriteCommand(Shift_Cursor_Right_Per_Read_Write);
	LCD_voidWriteCommand(Display_ON_Cursor_Blink_OFF);
	LCD_voidWriteCommand(Return_Home);

}

void LCD_voidWriteCommand(u8 copy_u8Command){

	DIO_voidSetPinValue(LCD_CONTROL_PORT,RS_PIN,DIO_PIN_LOW);
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_LOW);
	//-------------------------------------
	DIO_voidSetPinValue(LCD_DATA_PORT,D4_PIN,(get_bit(copy_u8Command,4)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D5_PIN,(get_bit(copy_u8Command,5)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D6_PIN,(get_bit(copy_u8Command,6)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D7_PIN,(get_bit(copy_u8Command,7)));
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_HIGH);
	_delay_ms(1);
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_LOW);
	//-------------------------------------
	DIO_voidSetPinValue(LCD_DATA_PORT,D4_PIN,(get_bit(copy_u8Command,0)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D5_PIN,(get_bit(copy_u8Command,1)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D6_PIN,(get_bit(copy_u8Command,2)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D7_PIN,(get_bit(copy_u8Command,3)));
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_HIGH);
	_delay_ms(1);
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_LOW);
	_delay_ms(5);
	
	


}

void LCD_voidWriteData(u8 copy_u8data){
	
	DIO_voidSetPinValue(LCD_CONTROL_PORT,RS_PIN,DIO_PIN_HIGH);
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_LOW);
	//-------------------------------------
	DIO_voidSetPinValue(LCD_DATA_PORT,D4_PIN,(get_bit(copy_u8data,4)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D5_PIN,(get_bit(copy_u8data,5)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D6_PIN,(get_bit(copy_u8data,6)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D7_PIN,(get_bit(copy_u8data,7)));
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_HIGH);
	_delay_ms(1);
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_LOW);
	//-------------------------------------
	DIO_voidSetPinValue(LCD_DATA_PORT,D4_PIN,(get_bit(copy_u8data,0)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D5_PIN,(get_bit(copy_u8data,1)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D6_PIN,(get_bit(copy_u8data,2)));
	DIO_voidSetPinValue(LCD_DATA_PORT,D7_PIN,(get_bit(copy_u8data,3)));
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_HIGH);
	_delay_ms(1);
	DIO_voidSetPinValue(LCD_CONTROL_PORT,EN_PIN,DIO_PIN_LOW);
	
}

void LCD_voidWriteString(u8 * copy_str){
	u8 i=0;
	while(copy_str[i]!= '\0'){
		LCD_voidWriteData(copy_str[i]);
		i++;
	}
	
	
}

void LCD_voidClear(void){
	
	LCD_voidWriteCommand(Clear_Display_Screen);
}

void LCD_voidGoToXY(u8 copy_u8Row,u8 copy_u8Col){
	copy_u8Col= (copy_u8Col>=0)&&(copy_u8Col<20)? copy_u8Col : 0 ;
	switch(copy_u8Row){
		case 0:
		copy_u8Row=DDRAM_Cursor_Begin_1st_Line;
		break;
		case 1:
		copy_u8Row=DDRAM_Cursor_Begin_2nd_Line;
		break;
		case 2:
		copy_u8Row=DDRAM_Cursor_Begin_3rd_Line;
		break;
		case 3:
		copy_u8Row=DDRAM_Cursor_Begin_4th_Line;
		break;
	}
	LCD_voidWriteCommand((copy_u8Row|0x80) + copy_u8Col);
}

void LCD_voidWriteNumber( u32 Copy_u8num ){
	u8 i=0;
	int num=0;
	u32 multiplier=1;
	if (!Copy_u8num)
	{
		LCD_voidWriteData(48);
	}
	if (Copy_u8num < 0)
	{
		LCD_voidWriteData('-');
		Copy_u8num *= -1;
	}
	while(Copy_u8num)
	{
		num = (num * 10) + (Copy_u8num % 10);
		multiplier = !(num) ? multiplier * 10 : multiplier;
		Copy_u8num /= 10;
	}
	while (num != i)
	{
		LCD_voidWriteData((num % 10) + 48);
		num /= 10;
		if(!num)
		{
			num = multiplier;
			i = 1;
		}
	}
}

void LCD_voidWriteSpecialCharToCGRAM(u8 * copy_u8data , u8 copy_u8ByteNum ){
	
	u8 i=0;
	copy_u8ByteNum=(copy_u8ByteNum>=0)&&(copy_u8ByteNum<8)? copy_u8ByteNum : 0;
	LCD_voidWriteCommand((CGRAM_First_Address_First_Character + (copy_u8ByteNum*8)));
	for(i=0;i<8;i++)
	LCD_voidWriteData(copy_u8data[i]);
	LCD_voidWriteCommand(0x80);
		
	
}

void LCD_voidDisplaySpecialChar(u8 copy_u8ByteNum,u8 row,u8 col  ) {

	copy_u8ByteNum=(copy_u8ByteNum>=0)&&(copy_u8ByteNum<8)? copy_u8ByteNum : 0;
	LCD_voidWriteCommand((CGRAM_First_Address_First_Character + (copy_u8ByteNum*8)));
	LCD_voidGoToXY(row,col);
	LCD_voidWriteData(copy_u8ByteNum);
	
}