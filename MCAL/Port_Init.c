void Port_Init(uint8_t port_index){
	volatile uint32_t port_index_hex= 0x00000001 ;
  volatile unsigned long * AFSEL; 
		volatile unsigned long * AMSEL; 
		volatile unsigned long * DEN; 
		volatile unsigned long * LOCK;
			volatile unsigned long * CR;
		volatile unsigned long * PCTL;
	switch(port_index) {
		case (0) : AFSEL = &GPIO_PORTA_AFSEL_R ; 
							 AMSEL = &GPIO_PORTA_AMSEL_R ;
							 DEN   = &GPIO_PORTA_DEN_R ;
							 LOCK  = &GPIO_PORTA_LOCK_R ;
							 CR    = &GPIO_PORTA_CR_R ;
							 PCTL  = &GPIO_PORTA_PCTL_R ;
		break ;
				case (1) : AFSEL = &GPIO_PORTB_AFSEL_R ; 
									 AMSEL = &GPIO_PORTB_AMSEL_R ;
							 DEN   = &GPIO_PORTB_DEN_R ;
							 LOCK  = &GPIO_PORTB_LOCK_R ;
							 CR    = &GPIO_PORTB_CR_R ;
									 PCTL  = &GPIO_PORTB_PCTL_R ;

		
		
		break ;
		
				case (2) : AFSEL = &GPIO_PORTC_AFSEL_R ; 
									 AMSEL = &GPIO_PORTC_AMSEL_R ;
							 DEN   = &GPIO_PORTC_DEN_R ;
							 LOCK  = &GPIO_PORTC_LOCK_R ;
							 CR    = &GPIO_PORTC_CR_R ;
							 							 PCTL  = &GPIO_PORTC_PCTL_R ;

		                             
		
		break ;
		
				case (3) : AFSEL = &GPIO_PORTD_AFSEL_R ; 
									 AMSEL = &GPIO_PORTD_AMSEL_R ;
							 DEN   = &GPIO_PORTD_DEN_R ;
							 LOCK  = &GPIO_PORTD_LOCK_R ;
							 CR    = &GPIO_PORTD_CR_R ;
							 							 PCTL  = &GPIO_PORTD_PCTL_R ;

		
		
		break ;
				case (4) : AFSEL = &GPIO_PORTE_AFSEL_R ; 
									 AMSEL = &GPIO_PORTE_AMSEL_R ;
							 DEN   = &GPIO_PORTE_DEN_R ;
							 LOCK  = &GPIO_PORTE_LOCK_R ;
							 CR    = &GPIO_PORTE_CR_R ;
							 							 PCTL  = &GPIO_PORTE_PCTL_R ;

		
		
		break ;
				case (5) : AFSEL = &GPIO_PORTF_AFSEL_R ; 
									 AMSEL = &GPIO_PORTF_AMSEL_R ;
							 DEN   = &GPIO_PORTF_DEN_R ;
							 LOCK  = &GPIO_PORTF_LOCK_R ;
							 CR    = &GPIO_PORTF_CR_R ;
							 							 PCTL  = &GPIO_PORTF_PCTL_R ;

		
		
		break ;
	
	}
	
	//initialization GENERIC//
		
	port_index_hex = port_index_hex	<<port_index ;
	

	
	SYSCTL_RCGCGPIO_R |=  port_index_hex ;
	
	//wait until clock enabled
	while ((SYSCTL_PRGPIO_R &  port_index_hex) ==0 ) ;
	
	//initialization specific to port macro names //
	*AFSEL = 0x00000000;
	*AMSEL = 0x00000000 ;
	*DEN   = 0xFFFFFFFF ;
	*LOCK  = GPIO_LOCK_KEY ;
	*CR = 0XFFFFFFFF ;
	*PCTL = 0x00000000 ;

}