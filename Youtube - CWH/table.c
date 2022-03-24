#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int i = 1, num, p = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("\nTable of %d -\n", num);
    while (i <= 10)
    {
        p = i * num;
        printf("%d\n", p);
        i++;
    }
    getch();
    return 0;
}