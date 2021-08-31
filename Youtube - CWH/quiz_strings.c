#include<stdio.h>
#include<string.h>

int main()
{
    char n1[50], n2[50];
    printf("Enter the name of two friends :\n");
    gets(n1);
    gets(n2);
    printf(strcat("%s is a friend of %s.\n",n1, n2));
    return 0;
}