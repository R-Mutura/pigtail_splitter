/*
 * File:   splitter_v1.c
 * Author: user
 *
 * Created on June 25, 2022, 9:13 PM
 */


#include <xc.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <stdint.h> 

/**CONFIGURATION BITS**/

// PIC16F1823 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTOSC    // Oscillator Selection (INTOSC oscillator: I/O function on CLKIN pin)
#pragma config WDTE = OFF        // Watchdog Timer Enable (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Memory Code Protection (Data memory code protection is disabled)
#pragma config BOREN = OFF       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = ON        // Internal/External Switchover (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config PLLEN = ON       // PLL Enable (4x PLL enabled)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config LVP = OFF        // Low-Voltage Programming Enable (High-voltage on MCLR/VPP must be used for programming)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

//FOSC
#define _XTAL_FREQ 16000000 //16MHz                  // Fosc  frequency for _delay()  library
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and
////*****END OF CONFIGURATION BITS******///

//WE LL USE TIMER INTERRUPT
#define switch RA5
unsigned int Count = 0;

//HARD CODED INTEGER VALUE
//DATA 
//int data = 30;
/**********************************************************************************
 * NOTE: PRIOR CALCULATION NEEDED
 * formula ===>
 * switch_delay = data*1000000/800000  (in uS)
 * this will be the needed delay time for switching the neopixels
 ***************************************************************************************/
  
  //set this delay constants according to your needs
  const int strip_1 = 300;
  const int strip_2 = 1800;
  
  void splitter ();
 
void main(void) {
    //clock source and frequency setting
   // OSCCON |=0b01111000; //16MHZ INTERNAL CLOCK
    //port 
    PORTA=0x00; //clear port a data
  
    TRISAbits.TRISA5 = 0; // set pin as output
   
    while(1)
    {
   
       splitter ();
    }
    return;
}

void splitter ()
{
   
        PORTA = 0x00;
        __delay_us(strip_2); //wait for this period before switching to strip 2
        PORTA = 0xFF;
        __delay_us(strip_2);//wait for this period before switching back to strip 1
}
