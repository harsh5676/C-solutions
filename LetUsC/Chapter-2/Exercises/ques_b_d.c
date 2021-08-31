#include <stdio.h>

int main()
{
    float x, R;
    x = 3.5;
    R = x * x + 2 * x + 1 / 2 * x * x + x + 1;
    printf("%f", R);
    return 0;
}