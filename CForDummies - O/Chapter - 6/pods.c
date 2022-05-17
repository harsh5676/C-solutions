/*
This program displays the value 62 three different ways.
*/

#include <stdio.h>

#define PODS 62

void main()
{
    printf("You must send %i pods to San Francisco.\n", PODS);
    printf("You must send %o (O) pods to San Francisco.\n", PODS);
    printf("You must send %x (H) pods to San Francisco.\n", PODS);
    printf("You must send %X (H) pods to San Francisco.\n", PODS);
}