/* 
 * File:   7seglib.c
 * Author: Gustavo do Nascimento Heinz (mob.app@hotmail.com)
 *
 * Created on 23 de Maio de 2015, 14:03
 */

#include "7seglib.h"

//if you don't need a param, just leave it as NULL when you use the function.
void print_sevenseg(int number, float compnumb, char *port1, char *port2)
{
    if(number <= 9 && port2 != NULL)
    {
        if(port1 == "A")//good luck on 16F877A :P
            PORTA = 0;

        if(port1 == "B")
            PORTB = 0;

        if(port1 == "C")
            PORTC = 0;

        if(port1 == "D")
            PORTD = 0;

        if(port1 == "E")//good luck on 16F877A :P
            PORTE = 0;

        if(port2 == "A")//good luck on 16F877A :P
            PORTA = numlib[number];
        
        if(port2 == "B")
            PORTB = numlib[number];
        
        if(port2 == "C")
            PORTC = numlib[number];
        
        if(port2 == "D")
            PORTD = numlib[number];
        
        if(port2 == "E")//good luck on 16F877A :P
            PORTE = numlib[number];
    }
    else
        if((number > 9 && number <= 99) && (port1 != NULL && port2 != NULL))
        {
            if(((number - SETscale[0]) >= 0) && ((number - SETscale[0]) <= 9))
            {
                SETport[0] = numlib[1];
                SETport[1] = numlib[number - SETscale[0]];
            }

            if(((number - SETscale[1]) >= 0) && ((number - SETscale[1]) <= 9))
            {
                SETport[0] = numlib[2];
                SETport[1] = numlib[number - SETscale[1]];
            }

            if(((number - SETscale[2]) >= 0) && ((number - SETscale[2]) <= 9))
            {
                SETport[0] = numlib[3];
                SETport[1] = numlib[number - SETscale[2]];
            }

            if(((number - SETscale[3]) >= 0) && ((number - SETscale[3]) <= 9))
            {
                SETport[0] = numlib[4];
                SETport[1] = numlib[number - SETscale[3]];
            }

            if(((number - SETscale[4]) >= 0) && ((number - SETscale[4]) <= 9))
            {
                SETport[0] = numlib[5];
                SETport[1] = numlib[number - SETscale[4]];
            }

            if(((number - SETscale[5]) >= 0) && ((number - SETscale[5]) <= 9))
            {
                SETport[0] = numlib[6];
                SETport[1] = numlib[number - SETscale[5]];
            }

            if(((number - SETscale[6]) >= 0) && ((number - SETscale[6]) <= 9))
            {
                SETport[0] = numlib[7];
                SETport[1] = numlib[number - SETscale[6]];
            }

            if(((number - SETscale[7]) >= 0) && ((number - SETscale[7]) <= 9))
            {
                SETport[0] = numlib[8];
                SETport[1] = numlib[number - SETscale[7]];
            }

            if(((number - SETscale[8]) >= 0) && ((number - SETscale[8]) <= 9))
            {
                SETport[0] = numlib[9];
                SETport[1] = numlib[number - SETscale[8]];
            }

            if(port1 == "A")//good luck on 16F877A :P
                PORTA = SETport[0];

            if(port1 == "B")
                PORTB = SETport[0];

            if(port1 == "C")
                PORTC = SETport[0];

            if(port1 == "D")
                PORTD = SETport[0];

            if(port1 == "E")//good luck on 16F877A :P
                PORTE = SETport[0];

            if(port2 == "A")//good luck on 16F877A :P
                PORTA = SETport[1];

            if(port2 == "B")
                PORTB = SETport[1];

            if(port2 == "C")
                PORTC = SETport[1];

            if(port2 == "D")
                PORTD = SETport[1];

            if(port2 == "E")//good luck on 16F877A :P
                PORTE = SETport[1];
        }
        else
            if(number == NULL && (port1 != NULL && port2 != NULL && compnumb != NULL))
            {
                if(compnumb <= 0.9)
                {
                    if(compnumb == 0.0)
                        fdef = 0;

                    if(compnumb == 0.1)
                        fdef = 1;

                    if(compnumb == 0.2)
                        fdef = 2;

                    if(compnumb == 0.3)
                        fdef = 3;

                    if(compnumb == 0.4)
                        fdef = 4;

                    if(compnumb == 0.5)
                        fdef = 5;

                    if(compnumb == 0.6)
                        fdef = 6;

                    if(compnumb == 0.7)
                        fdef = 7;

                    if(compnumb == 0.8)
                        fdef = 8;

                    if(compnumb == 0.9)
                        fdef = 9;

                    SETport[0] = numlib[10];
                    SETport[1] = numlib[fdef];
                }

                if((compnumb <= 1.9) && (compnumb > 0.9))
                {
                    if(compnumb == 1.0)
                        fdef = 0;

                    if(compnumb == 1.1)
                        fdef = 1;

                    if(compnumb == 1.2)
                        fdef = 2;

                    if(compnumb == 1.3)
                        fdef = 3;

                    if(compnumb == 1.4)
                        fdef = 4;

                    if(compnumb == 1.5)
                        fdef = 5;

                    if(compnumb == 1.6)
                        fdef = 6;

                    if(compnumb == 1.7)
                        fdef = 7;

                    if(compnumb == 1.8)
                        fdef = 8;

                    if(compnumb == 1.9)
                        fdef = 9;

                    SETport[0] = numlib[11];
                    SETport[1] = numlib[fdef];
                }

                if((compnumb <= 2.9) && (compnumb > 1.9))
                {
                    if(compnumb == 2.0)
                        fdef = 0;

                    if(compnumb == 2.1)
                        fdef = 1;

                    if(compnumb == 2.2)
                        fdef = 2;

                    if(compnumb == 2.3)
                        fdef = 3;

                    if(compnumb == 2.4)
                        fdef = 4;

                    if(compnumb == 2.5)
                        fdef = 5;

                    if(compnumb == 2.6)
                        fdef = 6;

                    if(compnumb == 2.7)
                        fdef = 7;

                    if(compnumb == 2.8)
                        fdef = 8;

                    if(compnumb == 2.9)
                        fdef = 9;

                    SETport[0] = numlib[12];
                    SETport[1] = numlib[fdef];
                }

                if((compnumb <= 3.9) && (compnumb > 2.9))
                {
                    if(compnumb == 3.0)
                        fdef = 0;

                    if(compnumb == 3.1)
                        fdef = 1;

                    if(compnumb == 3.2)
                        fdef = 2;

                    if(compnumb == 3.3)
                        fdef = 3;

                    if(compnumb == 3.4)
                        fdef = 4;

                    if(compnumb == 3.5)
                        fdef = 5;

                    if(compnumb == 3.6)
                        fdef = 6;

                    if(compnumb == 3.7)
                        fdef = 7;

                    if(compnumb == 3.8)
                        fdef = 8;

                    if(compnumb == 3.9)
                        fdef = 9;

                    SETport[0] = numlib[13];
                    SETport[1] = numlib[fdef];
                }
                
                if((compnumb <= 4.9) && (compnumb > 3.9))
                {
                    if(compnumb == 4.0)
                        fdef = 0;

                    if(compnumb == 4.1)
                        fdef = 1;

                    if(compnumb == 4.2)
                        fdef = 2;

                    if(compnumb == 4.3)
                        fdef = 3;

                    if(compnumb == 4.4)
                        fdef = 4;

                    if(compnumb == 4.5)
                        fdef = 5;

                    if(compnumb == 4.6)
                        fdef = 6;

                    if(compnumb == 4.7)
                        fdef = 7;

                    if(compnumb == 4.8)
                        fdef = 8;

                    if(compnumb == 4.9)
                        fdef = 9;

                    SETport[0] = numlib[14];
                    SETport[1] = numlib[fdef];
                }

                if((compnumb <= 5.9) && (compnumb > 4.9))
                {
                    if(compnumb == 5.0)
                        fdef = 0;

                    if(compnumb == 5.1)
                        fdef = 1;

                    if(compnumb == 5.2)
                        fdef = 2;

                    if(compnumb == 5.3)
                        fdef = 3;

                    if(compnumb == 5.4)
                        fdef = 4;

                    if(compnumb == 5.5)
                        fdef = 5;

                    if(compnumb == 5.6)
                        fdef = 6;

                    if(compnumb == 5.7)
                        fdef = 7;

                    if(compnumb == 5.8)
                        fdef = 8;

                    if(compnumb == 5.9)
                        fdef = 9;

                    SETport[0] = numlib[15];
                    SETport[1] = numlib[fdef];
                }

                if((compnumb <= 6.9) && (compnumb > 5.9))
                {
                    if(compnumb == 6.0)
                        fdef = 0;

                    if(compnumb == 6.1)
                        fdef = 1;

                    if(compnumb == 6.2)
                        fdef = 2;

                    if(compnumb == 6.3)
                        fdef = 3;

                    if(compnumb == 6.4)
                        fdef = 4;

                    if(compnumb == 6.5)
                        fdef = 5;

                    if(compnumb == 6.6)
                        fdef = 6;

                    if(compnumb == 6.7)
                        fdef = 7;

                    if(compnumb == 6.8)
                        fdef = 8;

                    if(compnumb == 6.9)
                        fdef = 9;

                    SETport[0] = numlib[16];
                    SETport[1] = numlib[fdef];
                }

                if((compnumb <= 7.9) && (compnumb > 6.9))
                {
                    if(compnumb == 7.0)
                        fdef = 0;

                    if(compnumb == 7.1)
                        fdef = 1;

                    if(compnumb == 7.2)
                        fdef = 2;

                    if(compnumb == 7.3)
                        fdef = 3;

                    if(compnumb == 7.4)
                        fdef = 4;

                    if(compnumb == 7.5)
                        fdef = 5;

                    if(compnumb == 7.6)
                        fdef = 6;

                    if(compnumb == 7.7)
                        fdef = 7;

                    if(compnumb == 7.8)
                        fdef = 8;

                    if(compnumb == 7.9)
                        fdef = 9;

                    SETport[0] = numlib[17];
                    SETport[1] = numlib[fdef];
                }

                if((compnumb <= 8.9) && (compnumb > 7.9))
                {
                    if(compnumb == 8.0)
                        fdef = 0;

                    if(compnumb == 8.1)
                        fdef = 1;

                    if(compnumb == 8.2)
                        fdef = 2;

                    if(compnumb == 8.3)
                        fdef = 3;

                    if(compnumb == 8.4)
                        fdef = 4;

                    if(compnumb == 8.5)
                        fdef = 5;

                    if(compnumb == 8.6)
                        fdef = 6;

                    if(compnumb == 8.7)
                        fdef = 7;

                    if(compnumb == 8.8)
                        fdef = 8;

                    if(compnumb == 8.9)
                        fdef = 9;

                    SETport[0] = numlib[18];
                    SETport[1] = numlib[fdef];
                }

                if((compnumb <= 9.9) && (compnumb > 8.9))
                {
                    if(compnumb == 9.0)
                        fdef = 0;

                    if(compnumb == 9.1)
                        fdef = 1;

                    if(compnumb == 9.2)
                        fdef = 2;

                    if(compnumb == 9.3)
                        fdef = 3;

                    if(compnumb == 9.4)
                        fdef = 4;

                    if(compnumb == 9.5)
                        fdef = 5;

                    if(compnumb == 9.6)
                        fdef = 6;

                    if(compnumb == 9.7)
                        fdef = 7;

                    if(compnumb == 9.8)
                        fdef = 8;

                    if(compnumb == 9.9)
                        fdef = 9;

                    SETport[0] = numlib[19];
                    SETport[1] = numlib[fdef];
                }

                if(port1 == "A")//good luck on 16F877A :P
                    PORTA = SETport[0];

                if(port1 == "B")
                    PORTB = SETport[0];

                if(port1 == "C")
                    PORTC = SETport[0];

                if(port1 == "D")
                    PORTD = SETport[0];

                if(port1 == "E")//good luck on 16F877A :P
                    PORTE = SETport[0];

                if(port2 == "A")//good luck on 16F877A :P
                    PORTA = SETport[1];

                if(port2 == "B")
                    PORTB = SETport[1];

                if(port2 == "C")
                    PORTC = SETport[1];

                if(port2 == "D")
                    PORTD = SETport[1];

                if(port2 == "E")//good luck on 16F877A :P
                    PORTE = SETport[1];
            }
            else
                return;
}