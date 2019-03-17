//Function to initialise switch As input and give it certain function for each switch
void SW_Init(unsigned int pins_mask,unsigned int port_index)
{
  uint8 enable=1;
  Port_Init(port_index);
  Port_SetPinDirection(port_index,pins_mask,PORT_PIN_IN);
  void Port_SetPinPullUp(port_index,pins_mask,enable);
  void Port_SetPinPullDown(port_index,pins_mask,~enable);
}
