/* YORN - a program to get a yes or no answer */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define TRUE 1      // this is "true" in C
#define FALSE !TRUE // this is "not true"

void main()
{
    char c;
    int done;

    printf("Enter your response, please:");
    done = FALSE; // no, we're not done looping

    while (!done) // loop while not done
    {
        printf("\nY for Yes or N for No: ");
        c = toupper(getch());
        if (c == 'Y' || c == 'N')
            done = TRUE;
    }
    printf("%c\n", c);
}