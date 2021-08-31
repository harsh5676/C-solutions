#include <stdio.h>
#include <string.h>

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 9/2; i++)
    {
        // swap item arr[i] with arr[8-i]
        temp = arr[i];
        arr[i] = arr[8-i];
        arr[8-i] = temp;
    }
}

void arrayPrint(int arr[])
{
        for (int i = 0; i < 9; i++)
    {
        printf("The value of element %d is %d.\n", i, arr[i]);
    }
}

int main()
{
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Before Reversing the array :\n");
    arrayPrint(list);

    // for (int i = 0; i < 9; i++)
    // {
    //     printf("The value of element %d is %d.\n", i, list[i]);
    // }

    arrayRev(list);
    printf("\nAfter Reversing the array :\n");
    arrayPrint(list);

    // for (int i = 0; i < 9; i++)
    // {
    //     printf("The value of element %d is %d.\n", i, list[i]);
    // }
    


    return 0;
}