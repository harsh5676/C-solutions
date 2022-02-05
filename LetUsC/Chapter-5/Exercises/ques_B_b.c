#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int n1, n2, n3, n = 1, i = 0;
    while (n <= 500)
    {
        // n = i;
        while (n != 0)
        {
            n = n % 10;
            n = n / 10;
            i = i + n * n * n;
            if (i == n)
            {
                printf("%d\n", n);
            }
        }

        n++;
    }

    getch();
    return 0;
}
