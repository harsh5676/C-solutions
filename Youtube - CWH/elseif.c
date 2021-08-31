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
    else if(age>=10)
    {
        printf("You are between 10 to 18 and you can vote for kids.\n");
    }
    else if(age>=3)
    {
        printf("You are between 3 to 10 and you can vote for babies.\n");
    }
    else{
        printf("You cannot vote!\n");
    }
    
    
    return 0;
}