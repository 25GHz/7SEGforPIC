/* 
 * File:   7seglib.h
 * Author: Gustavo do Nascimento Heinz (mob.app@hotmail.com)
 *
 * Created on 23 de Maio de 2015, 14:03
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <xc.h>

int SETport[1], fdef;
    //if you don't need a param, just leave it as NULL when you use the function.
extern void print_sevenseg(int number, float compnumb, char *port1, char *port2);

uint32_t SETscale[9] =
{
    0x0A, 0x14, 0x1E,
    0x28, 0x32, 0x3C,
    0x46, 0x50, 0x5A,
};

uint32_t numlib[20] =
{
    0xFC,   0x60,   0xDA,   0xF2,
    0x66,   0xB6,   0xBE,   0xE0,
    0xFE,   0xF6,   0xFC+1, 0x60+1,
    0xDA+1, 0xF2+1, 0x66+1, 0xB6+1,
    0xBE+1, 0xE0+1, 0xFE+1, 0xF6+1,
};
/*
        RC7 RC6 RC5 RC4 RC3 RC2 RC1 RC0
        a   b   c   d   e   f   g   p   PORTC   7seg
        1   1   1   1   1   1   1   1   255     8.
        1   1   1   1   1   1   1   0   254     8

        0000 0000 0
        0000 0001 1
        0000 0010 2
        0000 0011 3
        0000 0100 4
        0000 0101 5
        0000 0110 6
        0000 0111 7
        0000 1000 8
        0000 1001 9

        abcdefgp dec 7seg
        11111100 252 0
        01100000 96  1
        11011010 218 2
        11110010 242 3
        01100110 102 4
        10110110 182 5
        10111110 190 6
        11100000 224 7
        11111110 254 8
        11110110 246 9

        11111101 253 0.
        01100001 97  1.
        11011001 219 2.
        11110011 243 3.
        01100111 103 4.
        10110111 183 5.
        00111111 191 6.
        11100001 225 7.
        11111111 255 8.
        11100111 247 9.
*/