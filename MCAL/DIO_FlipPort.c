
void DIO_FlipPort (int uint8_Port_index,char uint8_Pins_Mask){
	if (uint8_Port_index==0){
		
		GPIO_PORTA_DATA_R =GPIO_PORTA_DATA_R^uint8_Pins_Mask;
	}
	else if (uint8_Port_index==1){
		
		GPIO_PORTB_DATA_R =GPIO_PORTB_DATA_R^uint8_Pins_Mask;
		
	}
	else if (uint8_Port_index==2)
	{
		
		GPIO_PORTC_DATA_R =GPIO_PORTC_DATA_R^uint8_Pins_Mask;
		
	}
	else if (uint8_Port_index==3){
		
		GPIO_PORTD_DATA_R =GPIO_PORTD_DATA_R^uint8_Pins_Mask;
		
	}
	else if (uint8_Port_index==4)
	{
		
		GPIO_PORTE_DATA_R =GPIO_PORTE_DATA_R^uint8_Pins_Mask;
		
	}
	else if (uint8_Port_index==5)
	{
		
		GPIO_PORTF_DATA_R =GPIO_PORTF_DATA_R^uint8_Pins_Mask;
		
	}
}

