void SET_PUR (uint8 port_index,uint8 pins_mask,uint8 enable){
if(enable==1){
	switch(port_index)
	{
		         case 0:
			 GPIO_PORTA_PUR_R=GPIO_PORTA_PUR_R|pins_mask;
				break;
			case 1:
			GPIO_PORTB_PUR_R=GPIO_PORTB_PUR_R|pins_mask;
				break;
			case 2:
			GPIO_PORTC_PUR_R=GPIO_PORTC_PUR_R|pins_mask;
				break;
			case 3:
			 GPIO_PORTD_PUR_R=GPIO_PORTD_PUR_R|pins_mask;
				break;
			case 4:
			 GPIO_PORTE_PUR_R=GPIO_PORTE_PUR_R|pins_mask;
				break;
			case 5:
			 GPIO_PORTF_PUR_R=GPIO_PORTF_PUR_R|pins_mask;
				break;
		}


}
if(enable==0){
	switch(port_index)
		{
		         case 0:
			 GPIO_PORTA_PUR_R=GPIO_PORTA_PUR_R&~pins_mask;
				break;
			case 1:
			GPIO_PORTB_PUR_R=GPIO_PORTB_PUR_R&~pins_mask;
				break;
			case 2:
			GPIO_PORTC_PUR_R=GPIO_PORTC_PUR_R&~pins_mask;
				break;
			case 3:
			 GPIO_PORTD_PUR_R=GPIO_PORTD_PUR_R&~pins_mask;
				break;
			case 4:
			 GPIO_PORTE_PUR_R=GPIO_PORTE_PUR_R&~pins_mask;
				break;
			case 5:
			 GPIO_PORTF_PUR_R=GPIO_PORTF_PUR_R&~pins_mask;
				break;
		}
	}

}