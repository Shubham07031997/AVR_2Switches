#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
void main()
{
   DDRA=0X00;
   DDRC=0Xff;
   
   while(1)
   {    PORTA=0b00000011;
        
         if((PINA & 0b00000011)==0b00000010)
		 {
		     PORTC=(1<<PC0);
             _delay_ms(50);
			 }
			 
			   
			    
         if((PINA & 0b00000011)==0b00000001)
		    {   
			     PORTC=(1<<PC1);
				 _delay_ms(50);
				 }
				 
			else
			{  PORTC=0X00;}	 
		 
                  

                 

    }
}
