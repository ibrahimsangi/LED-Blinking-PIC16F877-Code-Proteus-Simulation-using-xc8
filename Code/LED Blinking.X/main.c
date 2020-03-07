/* 
 * File:   main.c
 * Author: IBRAHIM LABS
 * EMAIL:  Ibrahimlabs@gmail.com
 *
 * Website: http://www.ibrahimlabs.com/
 *
 * Created on March 16, 2014, 8:05 PM
 */

#include <xc.h>
#define _XTAL_FREQ  10000000UL      //  10MHz

// CONFIG
#pragma config FOSC = HS            // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF           // Watchdog Timer Enable bit (WDT Disabled)
#pragma config PWRTE = OFF          // Power-up Timer Enable bit (PWRT disabled)
#pragma config CP = OFF             // FLASH Program Memory Code Protection bits (Code protection off)
#pragma config BOREN = ON           // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF            // Low Voltage In-Circuit Serial Programming Disable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF            // Data EE Memory Code Protection (Code Protection off)
#pragma config WRT = OFF            // FLASH Program Memory Write Disable (Unprotected program memory may be written to by EECON control)

/*
 * 
 */

#define BlinkingLED PORTBbits.RB0

int main() {

    TRISBbits.TRISB0 = 0;           //  Making pin as output.

    while(1)
    {
        BlinkingLED = ~BlinkingLED; //  Toggle the state of LED.
        __delay_ms(1000);           //  1 Second Delay.
    }
    return 0;
}


