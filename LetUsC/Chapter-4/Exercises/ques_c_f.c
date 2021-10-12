#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 10, j;
    (i >= 5) ? (j = 10) : (j = 15); //      i >= 5 ? j = 10 : j = 15; Error
    printf("%d%d\n", i, j);
    getch();
    return 0;
}