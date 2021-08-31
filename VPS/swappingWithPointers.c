#include <stdio.h>

swap(int *m, int *n) 
{
    int o;
    o = *m;
    *m = *n;
    *n = o; 
}

int main()
{
    int x, y;
    x = 5;
    y = 6;
    printf("Before Swapping x = %d, y = %d", x, y);
    swap(&x, &y);
    printf("\nAfter Swapping x = %d, y = %d", x, y);
    return 0;
}