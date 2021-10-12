/*
Using conditional operators determine:

Whether a character entered through the keyboard is a special symbol or not.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)) ? printf("The character entered is a special symbol.\n") : printf("The character entered is not a special symbol.\n");
    getch();
    return 0;
}