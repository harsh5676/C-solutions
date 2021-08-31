#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("You have entered %d as your age.\n", age);
    if (age>=18)
    {
        printf("You can vote!\n");
    }
    else{
        printf("You cannot vote!\n");
    }
    
    
    return 0;
}