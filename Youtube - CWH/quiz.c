#include<stdio.h>

int main()
{
    char sub;
    printf("Enter the subjects in which you have passed:\n");
    scanf("%c", &sub);

    if (sub="maths")
    {
        printf("You have got gift of rs. 15.\n");
    }
    else if (sub="science")
    {
        printf("You have got gift of rs. 15.\n");
    }
    else if(sub="maths and science"){
        printf("You have got gift of rs.45.\n");
    }
    else{
        printf("Invalid Input");
    }
    
    
    
    
    return 0;
}