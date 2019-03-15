// software delay in msec ---- not tested
 void delay_msec(unsigned long time) 
 {unsigned long i;
    for( i = 0; i <= (3000*time); i++ )
        ;
 }
 // hardware delay in msec ---- not tested
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




// Delay using timerA0 --- tested on keil only
//Implemented due datasheet instructions
void timer0A_delayMs(int ttime)
{
    int i;
    SYSCTL_RCGCTIMER_R |= 1;     /* enable clock to Timer Block 0 */
 
    TIMER0_CTL_R = 0;            /* disable Timer before initialization */
    TIMER0_CFG_R = 0x00;         /* 32-bit option */
    TIMER0_TAMR_R  = 0x02;        /* periodic mode and down-counter */
    TIMER0_TAILR_R = 16000 - 1;  /* Timer A interval load value register */
    TIMER0_ICR_R = 0x1;          /* clear the TimerA timeout flag*/
    TIMER0_CTL_R |= 0x01;        /* enable Timer A after initialization */
 
    for(i = 0; i < ttime; i++) 
    { while ((TIMER0_RIS_R & 0x1) == 0) ;      /* wait for TimerA timeout flag */
        TIMER0_ICR_R = 0x1;      /* clear the TimerA timeout flag */
    }
}
