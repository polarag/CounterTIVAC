//tested  in all ports but in port f datareg =10001=0x11 after port_init(4) and bit pf0 & pf4 are fixed with 1 and cant be reseted to 0 


enum Dio_LevelType {STD_HIGH = 1, STD_LOW = 0}; 
typedef unsigned char uint8;
void DIO_WritePort(uint8 port_index ,uint8 pins_mask ,enum Dio_LevelType pins_level)

{
switch (port_index)
{
		case 0://portA 8bits
		
		if (pins_level==STD_LOW)
				GPIO_PORTA_DATA_R&=~((0x00)^pins_mask);
		else  if (pins_level==STD_HIGH)
				GPIO_PORTA_DATA_R|=~((0xFF)^pins_mask);
			
		break;

		case 1://portB 8bits
		if (pins_level==STD_LOW)
				{GPIO_PORTB_DATA_R&=~((0x00)^pins_mask);}
		else  if (pins_level==STD_HIGH)
				{GPIO_PORTB_DATA_R|=~((0xFF)^pins_mask);}
		break;

		case 2://portC 8bits
			if (pins_level==STD_LOW)
				{GPIO_PORTC_DATA_R&=~((0x00)^pins_mask);}
		else  if (pins_level==STD_HIGH)
				{GPIO_PORTC_DATA_R|=~((0xFF)^pins_mask);}
		break;

		case 3: //portD 8bits
			if (pins_level==STD_LOW)
				{GPIO_PORTD_DATA_R&=~((0x00)^pins_mask);}
		else  if (pins_level==STD_HIGH)
				{GPIO_PORTD_DATA_R|=~((0xFF)^pins_mask);}
		break;

		case 4: //porte 6bits
			if (pins_level==STD_LOW)
				{GPIO_PORTE_DATA_R&=~((0x00)^pins_mask);}
		else  if (pins_level==STD_HIGH)
				{GPIO_PORTE_DATA_R|=~((0x3F)^pins_mask);}
		break;

		case 5: //portf 5bits
			if (pins_level==STD_LOW)
				{GPIO_PORTF_DATA_R&=~((0x00)^pins_mask);}
		else  if (pins_level==STD_HIGH)
				{GPIO_PORTF_DATA_R|=~((0x1F)^pins_mask);}
				
		break;

}




}
