/*
DECHEX, display ASCII, decimal and hex values
*/

#include <stdio.h>

void main()
{
    int x;

    printf("A   DEC\tHEX\tA DEC\tHEX\t");
    printf("A   DEC\tHEX\n");
    for (x = 32; x < 64; x++)
    {
        printf("%c  %3i\t%2X\t", x, x, x);
        printf("%c  %3i\t%2X\t", x + 32, x + 32, x + 32);
        printf("%c  %3i\t%2X\n", x + 64, x + 64, x + 64);
    }
}