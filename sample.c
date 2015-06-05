/*
 * File:   7seglib.c
 * Author: Gustavo do Nascimento Heinz (mob.app@hotmail.com)
 *
 * Created on 23 de Maio de 2015, 14:03
 */

#include <stdio.h>			//
#include <stdlib.h>			//
#include <stdint.h>			//
#include <xc.h>				//
#include "7seglibmain.h"                //yes, to use the holly "print_sevenseg();" function you may need it into ur project... lolz

#pragma config FOSC  = HS	//Oscillator Selection bits (HS oscillator)
#pragma config WDTE  = OFF	//Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON	//Power-up Timer Enable bit (PWRT enabled)
#pragma config BOREN = ON	//Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP   = OFF	//Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD   = OFF	//Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT   = HALF	//Flash Program Memory Write Enable bits (0000h to 0FFFh write-protected; 1000h to 1FFFh may be written to by EECON control)
#pragma config CP    = OFF      //Flash Program Memory Code Protection bit (Code protection off)

#define _XTAL_FREQ   8000000 	//

void main()
{
    TRISA = 0, TRISB = 0, TRISC = 0, TRISD = 0;
    PORTA = 0, PORTB = 0, PORTC = 0, PORTD = 0;
    
    int c = 0;
    while(9 > c)
    {
        print_sevenseg(c++, NULL, NULL, "B");
        for(int i = 0; i <= 99; i++)
        {
            print_sevenseg(i, NULL, "C", "D");
            __delay_ms(60);
        }
        //print_sevenseg(NULL, 0.9, "B", "C");
    }
    //mov al, [c]
    //push al
    //pop al
    while(1);
}
/*<=========//delete me for a better view... dah...

    //if you don't need a param, just leave it as NULL when you use the function.
    print_sevenseg(int number, float compnumb, char *port1, char *port2);

    int number,     //put the integer number you want(between 0~99),
                    //leave it as NULL if you don't want a decimal number.

    float compnumb, //put the floating number you want(between 0.0~9.9),
                    //leave it as NULL if you don't want a floating number.

    char *port1,    //set the primary ports(for numbers above 9).

    char *port2     //set the secondary ports(for numbers till 9).

    //for pins, check the example at end of 7seglib.h file. ;)
    /**/