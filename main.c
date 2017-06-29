/*
 * obsta_avoider.c
 *
 * Created: 11-06-2016 15:43:10
 * Author : pc
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
   DDRB=0b11111111;
   DDRC=0b00000000;
   char x;
    while (1) 
    {
		x=PINC&0b00000001;
		if (x==0b00000001)
		{
			PORTB=0b00001010;
		} 
		else if(x==0b00000000)
		{
			PORTB=0b00000101;
			_delay_ms(3000);
			PORTB=0b00000110;
			_delay_ms(3000);
			
		}
		
    }
}

