#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int num, quo = 0, rem = 0;
    printf("Enter the number which you want to convert into octal number -\n");
    scanf("%d", &num);
    while (num >= 1)
    {
        quo = num / 8;
        rem = num % 8;
    }
    printf("%d\n", quo);
    printf("%d\n", rem);
    getch();
    return 0;
}