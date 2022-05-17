/* Theater lobby snack bar program */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define TRUE 1        // This is true
#define FALSE !(TRUE) // This is not true

int main()
{
    char c;          // their choice
    int done;        // while loop ender
    float total = 0; // start their total at zero

    printf("Please make your treat selection:\n");
    printf("B - Beverage.\n");
    printf("C - Candy.\n");
    printf("H - Hot Dog.\n");
    printf("P - Popcorn.\n");
    printf("Your choice: ");

    /* Now you must figure out what they typed in. */

    done = FALSE;
    while (!done)
    {
        c = toupper(getch()); // get input
        switch (c)            // find the key they pressed
        {
        case 'B': // Beverage
            printf("Beverage\nThat will be $2\n");
            total += 2;
            break;

        case 'C': // Candy
            printf("Candy\nThat will be $1.50\n");
            total += 1.5;
            break;

        case 'H': // Hot dog
            printf("Hot dog\nThat will be $4\n");
            total += 4;
            break;

        case 'P': // Popcorn
            printf("Popcorn\nThat will be $3\n");
            total += 3;
            break;

        case '=': // done
            printf("= Total of $%.2f\n", total);
            printf("Please pay the cashier.\n");
            done = TRUE;
        } // end switch-case
    }     // end while
}