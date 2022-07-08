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
long bit_count = 0;
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
  int Bit_number = 24000 ; //place the number of bits to pass in the first strip here the rest will pass in the second strip
  void splitter ();
 
  void capture_ISR()

{

        if (   CCP1IF == 1) //External Interrupt detected
        {
            bit_count++; //increase bits count by 1on receiving a falling edge signal
             TMR0 = 50; //RESET TIMER 0 REGISTER TO 50
        }
        else{
          //do nothing and just return
        } 
}
  
  
void main(void) {
    //clock source and frequency setting
   // OSCCON |=0b01111000; //16MHZ INTERNAL CLOCK
    //port 
    
    TRISCbits.TRISC5 = 1; // set pin as INPUTt
    APFCON = 0b00000001;
    CCP1CON = 0b00000101;//SET CAPTURE COMPARE WITH RISING EDGE INTERRUPT
    PORTC=0x00; //clear port a data
  
   
   // TURN TIMER 1 ON
    T1CON = 0b00110101;
     // PG 192 DATASHEET
    CCP1IF =0;//INTERRUPT FLAG FOR CCP1 SET TO ZERO/CLEARED

    
   // TMR0=0;        //TMR0 Initiation
  //  T0CS=0;        //Choosing to work with internal clk
  //  T0SE=0;        //Reacting on Low2High edge
  //  PSA=0;         //Choosing to work with a Prescaler
  //  PS0=1;
 //   PS1=1;         //Prescaler value divides 256
  //  PS2=1;
  
    //timer 0 setup for 25uS
   OPTION_REG = 0b01000000; //SEE PG 164
   TMR0IE = 1;
   TMR0IF = 0;
   
   TMR0 = 50; //156 or 50
   INTCON= 0b11000000;//enable global interrupt and peripheral interrupt
    
    PIE1 = 0b00000100; //ENBLE CCP INTERRUPT AND TIMER 1 INTERRUPT
  
    PORTA=0x00; //clear port a data
  
    TRISAbits.TRISA5 = 0; // set pin as output
    PORTA = 0x00;
     while(1)
    {
         
         if(bit_count >= Bit_number)
         { 
              PORTA = 0xFF;
         }
         else
         {
             PORTA = 0x00;
         }
       if(TMR0IF)
        {//Stays here 256 times and then T0IF=1
        TMR0IF=0;              //Resetting the overflow flag
        TMR0 = 50; 
       //IF THIS TIMER RUNS TO THE END THEN 50uS have elapsed and we reset the counter bit
        bit_count = 0; //reset the bit counter after 50uS downtime
        
        }
     }

    return;
}
/************************not used 
void splitter ()
{
   
        PORTA = 0x00;
        
        __delay_us(1000600);
        //__delay_us(strip_1); //wait for this period before switching to strip 2
        PORTA = 0xFF;
         __delay_us(6003600);
        //__delay_us(1000000);
        //__delay_us(strip_2);//wait for this period before switching back to strip 1
}
*/