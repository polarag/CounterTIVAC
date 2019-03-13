//Change the direction of the selected pins by pins_mask in the port selected by port_index
void Port_SetPinDirection(uint8 port_index ,uint8 pins_mask, Port_PinDirectionType pins_direction)
{
	switch (port_index)
{
		case 0://PortA
			if(pins_direction==PORT_PIN_IN)
			GPIO_PORTA_DIR_R&=~pins_mask;
			else if(pins_direction==PORT_PIN_OUT)
			GPIO_PORTA_DIR_R|=pins_mask;
		break;

		case 1://PortB
			if(pins_direction==PORT_PIN_IN)
			GPIO_PORTB_DIR_R&=~pins_mask;
			else if(pins_direction==PORT_PIN_OUT)
			GPIO_PORTB_DIR_R|=pins_mask;
		break;

		case 2://PortC
			if(pins_direction==PORT_PIN_IN)
			GPIO_PORTC_DIR_R&=~pins_mask;
			else if(pins_direction==PORT_PIN_OUT)
			GPIO_PORTC_DIR_R|=pins_mask;
		break;

		case 3://PortD
			if(pins_direction==PORT_PIN_IN)
			GPIO_PORTD_DIR_R&=~pins_mask;
			else if(pins_direction==PORT_PIN_OUT)
			GPIO_PORTD_DIR_R|=pins_mask;
		break;

		case 4://PortE
			if(pins_direction==PORT_PIN_IN)
			GPIO_PORTE_DIR_R&=~pins_mask;
			else if(pins_direction==PORT_PIN_OUT)
			GPIO_PORTE_DIR_R|=pins_mask;
		break;

		case 5://PortF
			if(pins_direction==PORT_PIN_IN)
			GPIO_PORTF_DIR_R&=~pins_mask;
			else if(pins_direction==PORT_PIN_OUT)
			GPIO_PORTF_DIR_R|=pins_mask;
		break;

   // default:
        // code to be executed if n doesn't match any constant
}

}
