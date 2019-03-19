#include "header.h"
#define MASK_PIN_0 0X00000001 ;
#define MASK_PIN_1 0X00000002 ;
#define MASK_PIN_2 0X00000004 ;
#define MASK_PIN_3 0X00000008 ;
#define MASK_PIN_4 0X00000010 ;
#define MASK_PIN_5 0X00000020 ;
#define MASK_PIN_6 0X00000040 ;
#define MASKPIN7 0X08U ;

int x=0;

void inc (void){ x++; }

void dec (void){ x--; }

void reset (void){ x=0; }

void SystemInit(void){}

int main ()
{
      //Initialise LCD
      LCD_init();
      LCD_Cmd(0x01);
      LCD_Cmd(0x80);
      delay_milli(500);
      LCD_Cmd(0x01);
      //Initialise Reset Switch
      SW_Init(0x10,5);
      //Initialise Increment Switch
      SW_Init(0x04,5);
      //Initialise Decrement Switch
      SW_Init(0x08,5);

			
	
	
	
	while(1)
			{

				
				
									LCD_print(x);

					while(DIO_ReadPort(5,0x10))//While pressing
					{
						delay_milli(200);
						inc();
						 if(x==1000) x=0;
						LCD_print(x);
					}
					
				  if (DIO_ReadPort(5,0x04))//On press event 
					{	
						dec();
										if(x==-1) x=999;
						LCD_print(x);
						while (DIO_ReadPort(5,0x04)) ;
					}
					 if (DIO_ReadPort(5,0x08))//On release event
					{							
						while(1)
						{
								if (!(DIO_ReadPort(5,0x08)))//If released reset the count then break from while(1)
								{
									reset();
									LCD_print(x);
									break;
								}
						}
					}
			}

}
