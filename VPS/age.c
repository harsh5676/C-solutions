#include <stdio.h>
#include <conio.h>

int main()
{
    int age;
    char gender;
    char name;
    printf("What is your age?\n");
    scanf("%d", &age);
    printf("What is your gender?(m/f)\n");
    scanf("%c", &gender);
    getchar();
    printf("What is your name?\n");
    scanf(" %[^\n]%*c", &name); // TODO: Very Important - To enter name with spaces.

    if (age >= 18)
    {
        printf("You are eligible.\n");
    }
    else
    {
        printf("You are not eligible.\n");
    }
    if (gender == 'm')
    {
        printf("Hey dude you are %d years old and your name is %s.\n", age, name);
    }
    else if (gender == 'f')
    {
        printf("Hey lady you are %d years old and your name is %s.\n", age, name);
    }
    else
    {
        printf("Invalid Choice!\n");
    }

    getch();
    return 0;
}