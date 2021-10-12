#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 10, j = 20;
    if((i = 5) && (j = 10))                 //  if(i = 5) && if (j = 10)    Wrong
        printf("Have a nice day.\n");
    getch();
    return 0;
}