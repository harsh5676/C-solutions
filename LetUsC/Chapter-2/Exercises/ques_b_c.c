#include <stdio.h>

int main()
{
    float s, c, a, b, y;
    a = 2.2;
    b = 0.0;
    c = 4.1;
    y = 3.0;
    s = c + a * y * y / b;
    printf("%f", s);    /* Division by 0.0 cannot take place. */
    
    return 0;
}