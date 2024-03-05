/*
 * Bit_Math.h
 *
 * Created: 3/1/2024 10:25:30 AM
 *  Author: Mazen
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define set_bit(reg,bit) (reg|=(1<<bit))
#define clear_bit(reg,bit) (reg&=~(1<<bit))
#define tog_bit(reg,bit) (reg^=(1<<bit))
#define get_bit(reg,bit) ((reg>>bit)&1)



#endif /* BIT_MATH_H_ */