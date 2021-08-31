// 1. FUNCTION WITH ARGUMENTS AND RETURN VALUE

// #include<stdio.h>

// int sum(int a, int b); // Function Prototype

// int main()
// {
//     int a, b, c;
//     a = 9;
//     b = 87;
//     c = sum( a, b );
//     printf( "The sum is %d. \n", c );
//     return 0;
// }

// int sum(int a, int b){
//     return a + b;
// }



// 2. FUNCTION WITH ARGUMENTS AND WITHOUT RETURN VALUE

// #include<stdio.h>

// int sum(int a, int b); // Function Prototype

// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", '*');
//     }

// }

// int main()
// {
//     int a, b, c;
//     a = 9;
//     b = 87;
//     c = sum( a, b );
//     printstar(7);
//     // printf( "The sum is %d. \n", c );
//     return 0;
// }

// int sum(int a, int b){
//     return a + b;
// }



// 3. FUNCTION WITHOUT ARGUMENTS AND WITH RETURN VALUE

// #include<stdio.h>

// int sum(int a, int b); // Function Prototype

// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", '*');
//     }

// }


// int takenumber(){
//     int i;
//     printf("Enter a number.\n");
//     scanf( "%d", &i);
//     return i;
// }

// int main()
// {
//     int a, b, c;
//     a = 9;
//     b = 87;
//     // c = sum( a, b );
//     c = takenumber();
//     // printstar(7);
//     // printf( "The sum is %d. \n", c );
//     printf("The number entered is %d. \n", c);
//     return 0;
// }

// int sum(int a, int b){
//     return a + b;
// }



// 4. FUNCTION WITHOUT ARGUMENTS AND WITHOUT RETURN VALUE (INCOMPLETE)

#include<stdio.h>

int sum(int a, int b); // Function Prototype

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }

}


int takenumber(){
    int i;
    printf("Enter a number.\n");
    scanf( "%d", &i);
    return i;
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    // c = sum( a, b );
    c = takenumber();
    // printstar(7);
    // printf( "The sum is %d. \n", c );
    printf("The number entered is %d. \n", c);
    return 0;
}

int sum(int a, int b){
    return a + b;
}



