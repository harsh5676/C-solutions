// Declaration - Telling the compiler about the variable (No space reserved).
// Definitions - Declaration + Space reservation

#include <stdio.h>
#include <conio.h>
// #include "temp.c"

int myfunc(int a, int b)
{
    // auto int myVar;
    static int myVar;
    myVar ++;
    printf("The myVar is %d.\n", myVar);
    // myVar = a + b;
    return myVar;
}

// int myVar = 988;
int main()
{
    int myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    getch();
    return 0;
}