//debounce
//return true in case of debouncing
//return false in case of stable input




/*
just example for main()
   //
if (DIO_ReadPort(0,0x1)   &&(debouncing (0,0x1,50)==false))  //PA0
{
		dio_writeport (1,0X1,STD_HIGH)  //PB0
}
*/



#include "stdbool.h"
bool debouncing(unsigned int port_index,unsigned int pins_mask,unsigned long time) //takes pin state variable and time of debounce in ms
	
{unsigned int last=DIO_ReadPort(port_index,pins_mask);
delay_msec(time);
		
		if (last==DIO_ReadPort(port_index,pins_mask))
		{return false;}
				
		else if (last!=DIO_ReadPort(port_index,pins_mask))
		{	return true;}
	
	
	
}


