//not tested



// software delay in msec
 void delay_msec(unsigned long time) 
 {unsigned long i;
    for( i = 0; i <= (3000*time); i++ )
        ;
 }
 // hardware delay in msec
 void Delay_ms(unsigned long time)
{
//long timee =80000*time; //12.5ns*80000=1ms
NVIC_ST_CTRL_R = 0; // 1) disable SysTick during setup
NVIC_ST_RELOAD_R = (time)-1; // number of counts to wait
NVIC_ST_CURRENT_R = 0; // any value written to CURRENT clears
NVIC_ST_CTRL_R = 0x00000005; // 4) enable SysTick with core clock


while((NVIC_ST_CTRL_R&0x00010000)==0){ // wait for count flag
}

}

