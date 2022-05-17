/*
This program demonstrates signed and unsigned variables and how screwy they can be
*/

#include <stdio.h>

void main()
{
    unsigned char c;

    for (c = 0; c < 128; c++)
        printf("%i\t", c);
}