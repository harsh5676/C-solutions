/*
The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms) to the square of the height (in meters). Write a program that receives weight and height, calculates the BMI, and reports the BMI category as per the following table:

BMI Category            BMI

Starvation              < 15
Anorexic                15.1 to 17.5
Underweight             17.6 to 18.5
Ideal                   18.6 to 24.9
Overweight              25 to 25.9
Obese                   30 to 30.9
Morbidly Obese          >= 40
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float weight, height, bmi;
    printf("Enter your weight (in kilograms) -\n");
    scanf("%f", &weight);
    printf("Enter your height (in meters) -\n");
    scanf("%f", &height);

    bmi = weight / pow(height, 2);

    printf("Your BMI is %.2f.\n", bmi);

    if (bmi < 15)
        printf("Your BMI Category is Starvation.\n");
    else if (bmi <= 17.5)
        printf("Your BMI Category is Anorexic.\n");
    else if (bmi <= 18.5)
        printf("Your BMI Category is Underweight.\n");
    else if (bmi <= 24.9)
        printf("Your BMI Category is Ideal.\n");
    else if (bmi <= 25.9)
        printf("Your BMI Category is Overweight.\n");
    else if (bmi < 40)
        printf("Your BMI Category is Obese.\n");
    else if (bmi >= 40)
        printf("Your BMI Category is Morbidly Obese.\n");

    getch();
    return 0;
}