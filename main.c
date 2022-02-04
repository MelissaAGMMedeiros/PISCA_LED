/*
 * File:   main.c
 * Author: 21193460
 *
 * Created on 4 de Fevereiro de 2022, 10:18
 */

#include <xc.h>
#include "config.h"

#define _XTAL_FREQ 4000000

#define LED1 PORTAbits.RA0
#define LED2 PORTBbits.RB0
#define LED3 PORTCbits.RC0
#define LED4 PORTDbits.RD0
#define LED5 PORTEbits.RE0

void main(void) 
{
    LED1 = 0;
    LED2 = 0;
    LED3 = 0;
    LED4 = 0;
    LED5 = 0;
    TRISAbits.TRISA0 = 0;
    TRISBbits.TRISB0 = 0;
    TRISCbits.TRISC0 = 0;
    TRISDbits.TRISD0 = 0;
    TRISEbits.TRISE0 = 0;
    
    while(1)
    {
        LED1 = 1;
        LED2 = 1;
        LED3 = 1;
        LED4 = 1;
        LED5 = 1;
        __delay_ms(500);
        LED1 = 0;
        LED2 = 0;
        LED3 = 0;
        LED4 = 0;
        LED5 = 0;
        __delay_ms(500);
    }
    
}
