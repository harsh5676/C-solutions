/*
An important program for NASA to properly launch
America's spacecraft.
*/

#include <stdio.h>

void main()
{
    int start;
    long delay;
    /*
    This loop ensures the user type in a proper value
    */
    do
    {
        printf("Please enter the number to start\n");
        printf("the countdown (1 to 100): ");
        scanf("%i", &start);
    } while (start < 1 || start > 100);

    /* The countdown loop */

    do
    {
        printf("T-minus %i\n", start);
        start--;
        for (delay = 0; delay < 100000; delay++)
            ; // delay loop
    } while (start > 0);

    printf("Zero!\nBlast off!\n");
}