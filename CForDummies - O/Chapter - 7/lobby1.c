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
    if (c == 'B')         // Beverage
        printf("Beverage\nThat will be $2\n");
    else if (c == 'C') // Candy
        printf("Candy\nThat will be $1.50\n");
    else if (c == 'H') // Hot dog
        printf("Hot dog\nThat will be $4\n");
    else if (c == 'P') // Popcorn
        printf("Popcorn\nThat will be $3\n");
    else
    {
        printf("\nThat is not a proper selection.\n");
        printf("I'll assume you're just not hungry.\n");
        printf("Can I help whoever's next?\n");
    }
}