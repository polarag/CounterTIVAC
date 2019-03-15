
void DIO_FlipPort ( uint8 Port_index, uint8 Pins_Mask){
	if (Port_index==0){
		
		GPIO_PORTA_DATA_R =GPIO_PORTA_DATA_R^Pins_Mask;
	}
	else if (Port_index==1){
		
		GPIO_PORTB_DATA_R =GPIO_PORTB_DATA_R^Pins_Mask;
		
	}
	else if (Port_index==2)
	{
		
		GPIO_PORTC_DATA_R =GPIO_PORTC_DATA_R^Pins_Mask;
		
	}
	else if (Port_index==3){
		
		GPIO_PORTD_DATA_R =GPIO_PORTD_DATA_R^Pins_Mask;
		
	}
	else if (Port_index==4)
	{
		
		GPIO_PORTE_DATA_R =GPIO_PORTE_DATA_R^Pins_Mask;
		
	}
	else if (Port_index==5)
	{
		
		GPIO_PORTF_DATA_R =GPIO_PORTF_DATA_R^Pins_Mask;
		
	}
}

