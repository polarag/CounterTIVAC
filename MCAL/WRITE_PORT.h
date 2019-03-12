

void DIO_WritePort(uint8 port_index ,uint8 pins_mask ,Dio_LevelType pins_level)

{
switch (port_index)
{
		case 0:
			GPIO_PORTA_DATA_R|=pins_level&pins_mask;
		break;

		case 1:
			GPIO_PORTB_DATA_R|=pins_level&pins_mask;
		break;

		case 2:
			GPIO_PORTC_DATA_R|=pins_level&pins_mask;
		break;

		case 3:
			GPIO_PORTD_DATA_R|=pins_level&pins_mask;
		break;

		case 4: 
			GPIO_PORTE_DATA_R|=pins_level&pins_mask;
		break;

		case 5: 
			GPIO_PORTF_DATA_R|=pins_level&pins_mask;
		break;

}




}