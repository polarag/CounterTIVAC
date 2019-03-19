
void LCD_command(unsigned char command)
{
LCD_CTRL->DATA = 0; /* RS = 0, R/W = 0 */
LCD_DATA->DATA = command;
LCD_CTRL->DATA = EN; /* pulse E */
delayUs(0);
LCD_CTRL->DATA = 0;
if (command < 4) delayMs(2); /* command 1 and 2 needs up to 1.64ms */ else delayUs(40); /* all others 40 us */ } void LCD_data(unsigned char data) { LCD_CTRL->DATA = RS; /* RS = 1, R/W = 0 */
LCD_DATA->DATA = data;
LCD_CTRL->DATA = EN | RS; /* pulse E */
delayUs(0);
LCD_CTRL->DATA = 0;
delayUs(40);
}
 
/* delay n milliseconds (16 MHz CPU clock) */
void delayMs(int n)
{
int i, j;
for(i = 0 ; i < n; i++)
for(j = 0; j < 3180; j++)
{} /* do nothing for 1 ms */
}
 