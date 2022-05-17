/* EHD - Erase That Hard Drive! */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define TRUE 1      // this is "true" in C
#define FALSE !TRUE // this is "not true"

int yorn(void);

void main()
{
    /* print impressive messages */
    printf("EHD - Erase Hard Drive Utility\n");
    printf("Version 3.2 (C) Brainsoft Inc.\n\n");
    printf("WARNING: This prigram might erase your hard drive!\n");
    printf("Continue? (Y/N): ");

    if (yorn())
        printf("You're gutsy, kid. Foolish, gutsy.\n");
    else
        printf("Whew! That was close!\n");
}

/*
The yorn() function returns TRUE if Y was pressed: FALSE for N
*/

int yorn()
{
    int done = FALSE;
    char c;

    while (!done) // loop while not done
    {
        c = toupper(getch());     // make uppercase
        if (c == 'Y' || c == 'N') // look for Y or N only
            done = TRUE;
    }
    printf("%c\n", c);

    if (c == 'Y')
        return (TRUE); // Y == TRUE
    return FALSE;      // N == FALSE
}