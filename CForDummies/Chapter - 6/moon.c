/*
MOON.C
A program to see how much you'd weigh on the moon
*/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int weight;

    if (argc < 2) // no options typed
    {
        printf("This program requires you to type your\n");
        printf("weight after MOON, as in:\n");
        printf("MOON 175\n");
        exit(0); // quit the program right here
    }
    /*
    argv[1] contains the user's weight
    */
    weight = atoi(argv[1]); // get their weight
    weight /= 6;

    printf("On the moon, you would weigh %i pounds.\n", weight);
}