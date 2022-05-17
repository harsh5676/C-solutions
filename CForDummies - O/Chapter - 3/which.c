#include <stdio.h>
#include <conio.h>

void main()
{
    char key;

    printf("Press a key on your keyboard: ");
    key = getche();
    printf("\nYou pressed the '%c' key.\n", key);
    printf("Its ASCII value is '%i'.\n", key);
}