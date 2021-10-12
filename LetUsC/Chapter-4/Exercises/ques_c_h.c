#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 9;
    (n == 9 ? printf("Correct\n") : printf("Wrong\n")); //  (n == 9 ? printf("Correct\n"); : printf("Wrong\n"););   Wrong ; must not be used outside printf().
    getch();
    return 0;
}