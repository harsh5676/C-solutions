#include <stdio.h>
#include <conio.h>

int main()
{
    int x = 10, y = 20;
    if(x >= 2 && y <= 50)      //   if(x >= 2 and y <= 50)     Wrong
        printf("%d\n", x);
    getch();
    return 0;
}