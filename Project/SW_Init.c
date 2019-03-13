void SW_Init(unsigned int pins_mask,unsigned int port_index)
{
  uint8 enable=1;
  switch (port_index)
  {
  		case 0://PortA
      Port_Init(port_index);
      Port_SetPinDirection(port_index,pins_mask,PORT_PIN_IN);
      Port_SetPinPullUp(port_index,pins_mask,enable);
  		break;

  		case 1://PortB
      Port_Init(port_index);
      Port_SetPinDirection(port_index,pins_mask,PORT_PIN_IN);
      Port_SetPinPullUp(port_index,pins_mask,enable);
  		break;

  		case 2://PortC
      Port_Init(port_index);
      Port_SetPinDirection(port_index,pins_mask,PORT_PIN_IN);
      Port_SetPinPullUp(port_index,pins_mask,enable);
  		break;

  		case 3://PortD
      Port_Init(port_index);
      Port_SetPinDirection(port_index,pins_mask,PORT_PIN_IN);
      Port_SetPinPullUp(port_index,pins_mask,enable);
  		break;

  		case 4://PortE
      Port_Init(port_index);
      Port_SetPinDirection(port_index,pins_mask,PORT_PIN_IN);
      Port_SetPinPullUp(port_index,pins_mask,enable);
  		break;

  		case 5://PortF
      Port_Init(port_index);
      Port_SetPinDirection(port_index,pins_mask,PORT_PIN_IN);
      Port_SetPinPullUp(port_index,pins_mask,enable);
  		break;

     // default:
          // code to be executed if n doesn't match any constant
  }
}
