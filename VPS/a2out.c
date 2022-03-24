#include <stdio.h>
#include <conio.h>
int main()
{

    int num;
    int i;
    int maxi = 0;
    int minim = 0;
    int cont = 0;

    printf("\nQuantity of numbers?: ");
    scanf("%d", &num);
    while (num > 0)
    {
        printf("\nEnter number:");
        scanf("%d", &i);
        if (num > i)
            minim = i++;

        else if (i > num)
            maxi = i++;
        cont++;
    }

    printf("\nBiggest number is es: %d", maxi);
    printf("\nSmallest number is: %d", minim);
    getch();
    return 0;
}