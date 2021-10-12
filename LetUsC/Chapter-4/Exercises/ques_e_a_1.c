/*
Using conditional operators determine:

Whether the character entered through the keyboard is a lowercase alphabet or not.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter a character -\n");
    scanf("%c", &ch);
    ch >= 97 && ch <= 122 ? printf("The entered character is a lowercase letter.\n") : printf("The entered character is not a lowercase letter.\n");
    getch();
    return 0;
}