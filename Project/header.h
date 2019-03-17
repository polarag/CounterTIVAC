#ifndef  ABC

#define ABC

//#include "tm4c123gh6pm.h"
#include "TM4C123.h"

#include "stdint.h"
#include "stdbool.h"
enum Dio_LevelType {STD_HIGH = 1, STD_LOW = 0}; 
typedef unsigned char uint8;
typedef enum {PORT_PIN_IN , PORT_PIN_OUT} Port_PinDirectionType;


void delay_msec(unsigned long time) ;
bool debouncing(uint8 port_index,uint8 pins_mask,unsigned long time);
void Port_Init(uint8 port_index) ;
void Delay_ms(unsigned long time) ;
void timer0A_delayMs(int ttime);
void DIO_FlipPort ( uint8 Port_index, uint8 Pins_Mask);
uint8 DIO_ReadPort(uint8 port_index,uint8 pins_mask);
void DIO_WritePort(uint8 port_index ,uint8 pins_mask ,enum Dio_LevelType pins_level) ;
void Port_SetPinDirection(uint8 port_index ,uint8 pins_mask, Port_PinDirectionType pins_direction);
void Port_SetPinPullUp(uint8 port_index,uint8 pins_mask,uint8 enable);
void Port_SetPinPullDown(uint8 port_index,uint8 pins_mask,uint8 enable);
void SET_PDR (uint8 port_index,uint8 pins_mask,uint8 enable);
void SET_PUR (uint8 port_index,uint8 pins_mask,uint8 enable);
void SW_Init(uint8 pins_mask,uint8 port_index);
void delay_milli(int n);
void delay_micro(int n);
void LCD_init(void);
void LCD_Cmd(unsigned char command);
void LCD_Data(unsigned char data);
void LCD_print(int x);
void Port_Init_PIN(uint8 port_index , uint8 Pin_index);

#endif 
