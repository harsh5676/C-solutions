#include <stdio.h>
#include <conio.h>

int main()
{
    int k, num = 30;
    k = (num > 5 ? (num <= 10 ? 100 : 200) : 500);
    printf("%d\n", num);
    getch();
    return 0;
}