#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 4, j = -1, k = 0, w, x, y, z;
    w = i || j || k;
    x = i && j && k;
    y = i || j && k;
    z = i && j || k;
    printf("w = %d x = %d y = %d z = %d\n", w, x, y, z);
    getch();
    return 0;
}