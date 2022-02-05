#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b); // scanf("%d%d", a, b);   // &(Ampersand) was missing while taking input.
    if (a > b)             // if(a > b);             // else becomes without an if statement and gives an error
        printf("This is a game\n");
    else
        printf("You have to play it\n");

    return 0;
}