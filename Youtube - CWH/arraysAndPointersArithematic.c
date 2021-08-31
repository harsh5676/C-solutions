#include<stdio.h>

int main()
{

    // Example - 3

    int arr[] = {341,26,33,46,58,69,67};
    printf("Value at position 4, of the array is %d\n", arr[3]);

    printf("The address of first element of the array is %d \n", &arr[0]); //OR
    printf("The address of first element of the array is %d \n", arr);

    printf("The address of second element of the array is %d \n", &arr[1]); // OR
    printf("The address of second element of the array is %d \n", arr + 1);

    printf("The address of third element of the array is %d \n", &arr[2]); // OR
    printf("The address of third element of the array is %d \n", arr + 2);

    // arr++ - This line will throw an error. arr is a constant so it cannot be incremented.

    printf("The value at address of first element of the array is %d \n", *(&arr[0])); //OR
    printf("The value at address of first element of the array is %d \n", arr[0]); //OR
    printf("The value at address of first element of the array is %d \n", *(arr));

    printf("The value at address of second element of the array is %d \n", *(&arr[1])); // OR
    printf("The value at address of second element of the array is %d \n", arr[1]); // OR
    printf("The value at address of second element of the array is %d \n", *(arr + 1));

    return 0;


// For Character Type (Example - 1)

    // char a = '3';
    // char *ptra = &a;
    // printf("%d\n", ptra);
    // ptra++;
    // printf("%d\n", ptra);
    // printf("%d", ptra - 2);

    // return 0;

// For Integer Type (Example - 2)

    // int a = 34;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d", ptra + 1);

    // return 0;

}