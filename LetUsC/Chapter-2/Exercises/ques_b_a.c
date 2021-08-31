#include <stdio.h>

int main()
{
    int a, b, x, y, ans;
    a = 3;
    b = 2;
    x = 5;
    y = 4;
    ans = 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y; 
    printf("%d", ans);
    return 0;
}