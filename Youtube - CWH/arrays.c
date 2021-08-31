#include <stdio.h>

int main()
{
    // 4th Example

    int marks[2][4] = {{23, 67, 83, 78},
                       {45, 98, 66, 58}};

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            // printf("The value of %d, %d element of the array is %d.\n", i, j, marks[i][j]);

            // The result will be in Matrix form
            printf("%d ", marks[i][j]);

        }

        printf("\n");

    }


    // 3rd Example

    // int marks[] = {45,28,65,89};

    //  for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of %d element of the array is %d.\n", i, marks[i]);
    // }


    // 2nd Example

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array.\n", i);
    //     scanf("%d", &marks[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of %d element of the array is %d.\n", i, marks[i]);
    // }


    // 1st Example

    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 44;
    // marks[1] = 54;
    // marks[2] = 34;
    // marks[3] = 94;
    // printf("Marks of student 2 is %d\n", marks[0]);

    return 0;
}
