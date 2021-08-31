#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[55];
};

struct student harsh, rishit, aryan; // Global Variable

void printing()
{
    printf("Harsh got %d marks\n", harsh.marks);
    printf("Harsh's name is: %s\n", harsh.name);
    printf("Harsh's favourite character is: %c\n\n", harsh.fav_char);

    printf("Rishit got %d marks\n", rishit.marks);
    printf("Rishit's name is: %s\n", rishit.name);
    printf("Rishit's favourite character is: %c\n\n", rishit.fav_char);

    printf("Aryan got %d marks\n", aryan.marks);
    printf("Aryan's name is: %s\n", aryan.name);
    printf("Aryan's favourite character is: %c\n\n", aryan.fav_char);
}

int main()
{
    // struct student harsh, rishit, aryan; // Local Variable

    harsh.id = 1;
    rishit.id = 2;
    aryan.id = 3;

    rishit.marks = 466;
    harsh.marks = 389;
    aryan.marks = 356;

    rishit.fav_char = 'p';
    harsh.fav_char = 's';
    aryan.fav_char = 'y';

    strcpy(harsh.name, "Harshit Raj");
    strcpy(rishit.name, "Rishit Raj");
    strcpy(aryan.name, "Aryan Verma");

    printing();

    // printf("Harsh got %d marks\n", harsh.marks);
    // printf("Harsh's name is: %s\n", harsh.name);
    // printf("Harsh's favourite character is: %c\n\n", harsh.fav_char);

    // printf("Rishit got %d marks\n", rishit.marks);
    // printf("Rishit's name is: %s\n", rishit.name);
    // printf("Rishit's favourite character is: %c\n\n", rishit.fav_char);

    // printf("Aryan got %d marks\n", aryan.marks);
    // printf("Aryan's name is: %s\n", aryan.name);
    // printf("Aryan's favourite character is: %c\n\n", aryan.fav_char);
    
    return 0;
}