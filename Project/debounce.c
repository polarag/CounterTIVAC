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
bool debouncing(uint8 port_index,uint8 pins_mask,unsigned long time) //takes pin state variable and time of debounce in ms
	
{uint8 last=DIO_ReadPort(port_index,pins_mask);
delay_msec(time);
		
		if (last==DIO_ReadPort(port_index,pins_mask))
		{return false;}
				
		else if (last!=DIO_ReadPort(port_index,pins_mask))
		{	return true;}
	
	
	
}

//another  method

unsigned char debounce(uint8 port_index,uint8 pins_mask)
{
    static unsigned char state, cnt0, cnt1;
    unsigned char delta;

    delta = DIO_ReadPort(port_index,pins_mask) ^ state;
    cnt1 = (cnt1 ^ cnt0) & (delta & DIO_ReadPort(port_index,pins_mask));
    cnt0 = ~cnt0 & (delta & DIO_ReadPort(port_index,pins_mask));
    state ^= (delta & ~(cnt0 | cnt1));

    return state;
}



