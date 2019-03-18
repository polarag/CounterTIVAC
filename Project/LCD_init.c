void LCD_init(void)
{
SYSCTL->RCGCGPIO |= 0x01; //PORTA clock
SYSCTL->RCGCGPIO |= 0x02;
GPIOA->DIR |=0xE0; //PORTA controls RS,E and R/W
GPIOA->DEN |=0xE0;
GPIOB->DIR |=0xFF; //PORTB D0-D7
GPIOB->DEN |=0xFF; //PORTB D0-D7
LCD_Cmd(0x38); //8-bits,2 display lines, 5x7 font
LCD_Cmd(0x06); //increments automatically
LCD_Cmd(0x0F); //Turn on display
LCD_Cmd(0x01); //clear display
}
