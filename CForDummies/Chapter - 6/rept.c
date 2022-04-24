#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int x, r;
    char c;

    if (argc < 3) // no options typed
    {
        printf("This program requires two options:\n");
        printf("REPT c r\n");
        printf("C is the character to repeat and R is\n");
        printf("the number of times to repeat it.\n");
        exit(0); // quit the program right here
    }
    /*
    They typed in both options. argv[1] contains the character to repeat, and aargv[2] is the number of times to repeat it.
    */
    c = argv[1][0];    // get the character
    r = atoi(argv[2]); // get the repeat count

    for (x = 0; x < r; x++)
        putchar(c); // display the character
}