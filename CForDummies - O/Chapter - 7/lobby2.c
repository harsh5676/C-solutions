/* Theater lobby snack bar program */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Please make your treat selection:\n");
    printf("B - Beverage.\n");
    printf("C - Candy.\n");
    printf("H - Hot Dog.\n");
    printf("P - Popcorn.\n");
    printf("Your choice: ");

    /* Now you must figure out what they typed in. */

    c = toupper(getch()); // get input
    switch (c)            // find the key they pressed
    {
    case 'B': // Beverage
        printf("Beverage\nThat will be $2\n");
        break;

    case 'C': // Candy
        printf("Candy\nThat will be $1.50\n");
        break;

    case 'H': // Hot dog
        printf("Hot dog\nThat will be $4\n");
        break;

    case 'P': // Popcorn
        printf("Popcorn\nThat will be $3\n");
        break;

    default:
        printf("\nThat is not a proper selection.\n");
        printf("I'll assume you're just not hungry.\n");
        printf("Can I help whoever's next?\n");
    }
}