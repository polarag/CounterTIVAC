//Function to initialise switch As input and give it certain function for each switch
void SW_Init(uint8 pins_mask,uint8 port_index)
{
  uint8 enable=1;
      Port_Init_PIN(port_index,pins_mask);
      Port_SetPinDirection(port_index,pins_mask,PORT_PIN_IN);
      Port_SetPinPullUp(port_index,pins_mask,enable);
	    Port_SetPinPullDown(port_index,pins_mask,~enable);
}

