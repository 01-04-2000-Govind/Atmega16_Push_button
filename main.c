/*
 * Push Button.c
 *
 * Created: 8/18/2023 3:44:56 PM
 * Author : Lenovo
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD |= (1<<DDD0)|(1<<DDD1);
	DDRC &= ~(1<<DDC0) & ~(1<<DDC1);
	
    while (1) 
    {
	   if(PINC & (1<<PINC0))
	   {
		   PORTD |= (1<<PD0);
	   }
	   
	   else
	   {
		   PORTD &= ~(1<<PD0);
	   }
	   
	   if(PINC & (1<<PINC1))
	   {
		   PORTD |= (1<<PD1);
	   }
	   
	   else
	   {
		   PORTD &= ~(1<<PD1);
       }
    }
}

