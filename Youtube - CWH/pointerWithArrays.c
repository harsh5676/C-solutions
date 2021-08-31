#include <stdio.h>

// Example 3 -

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d.\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[2][2] = {{56, 23}, {67, 35}};
    func3(arr);
    return 0;
}



// Example 2 -

// void func2(int *ptr)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value at %d is %d.\n", i, *(ptr + i));
//     }
//     *(ptr + 2) = 6554;

// }

// int main()
// {
//     int arr[] = {56, 23, 87, 94};
//     func2(arr);
//     func2(arr);
// }



// Example 1 -

// int func1(int array[])
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value at %d is %d.\n", i, array[i]);
//         array[0] = 986; // Very important point that if we change any value here, it gets reflected in main().
//     }

//     return 0;

// }

// int main()
// {
//     int arr[] = {67, 53, 45, 98};
//     printf("The value at index 0 is %d.\n", arr[0]);
//     func1(arr);
//     printf("The value at index 0 is %d.\n", arr[0]);
//     return 0;
// }