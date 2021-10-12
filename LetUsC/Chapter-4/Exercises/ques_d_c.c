/*
A certain grade of steel is graded according to the following conditions:

    (i)     Hardness must be greater than 50
    (ii)    Carbon content must be less than 0.7
    (iii)   Tensile strength must be greater than 5600

The grades are as follows:

Grade is 10 if all conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel. 
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float hard, carbon, tensile;
    printf("Enter the hardness value of the steel -\n");
    scanf("%f", &hard);
    printf("Enter the carbon content value(Max 1.5%%) in the steel -\n");
    scanf("%f", &carbon);
    printf("Enter the tensile strength of the steel -\n");
    scanf("%f", &tensile);

    if (hard > 50 && carbon < 0.7 && tensile > 5600)
        printf("Grade 10 Steel.\n");
    else if (hard > 50 && carbon < 0.7 && tensile <= 5600)
        printf("Grade 9 Steel.\n");
    else if (hard <= 50 && carbon < 0.7 && tensile > 5600)
        printf("Grade 8 Steel.\n");
    else if (hard > 50 && carbon >= 0.7 && tensile > 5600)
        printf("Grade 7 Steel.\n");
    else if (hard > 50 || carbon < 0.7 || tensile > 5600)
        printf("Grade 6 Steel.\n");
    else if (hard <= 50 && carbon >= 0.7 && tensile <= 5600)
        printf("Grade 5 Steel.\n");

    getch();
    return 0;
}