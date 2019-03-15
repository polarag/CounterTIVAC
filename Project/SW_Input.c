unsigned char SW_Input(uint8 port_index,uint8 pins_mask_I,uint8 pins_mask_D,uint8 pins_mask_R)
{
  if(DIO_ReadPort(port_index,pins_mask_I)>0) return 'I';
  if(DIO_ReadPort(port_index,pins_mask_D)>0) return 'D';
  if(DIO_ReadPort(port_index,pins_mask_R)>0) return 'R';
}
