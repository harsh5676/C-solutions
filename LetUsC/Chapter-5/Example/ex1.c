#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int p, n, count;
    float r, si;
    count = 1;
    while (count <= 3)
    {
        printf("Enter the values of p, n and r - ");
        scanf("%d%d%f", &p, &n, &r);
        si = p * n * r / 100;
        printf("Simple Interest = Rs. %f\n", si);
        count = count + 1;
    }
    getch();
    return 0;
}