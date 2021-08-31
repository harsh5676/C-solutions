/*

1. kms to miles
2. inches to foot
3. cms to inches
4. pound to kgs
5. inches to meters

*/

#include <stdio.h>

float kmsToMiles(float number1)
{
    float conversion1;
    conversion1 = number1 * 0.621371;
    return conversion1;
}

float inchesToFoot(float number2)
{
    float conversion2;
    conversion2 = number2 * 0.0833333;
    return conversion2;
}

float cmsToInches(float number3)
{
    float conversion3;
    conversion3 = number3 * 0.393701;
    return conversion3;
}

float poundToKgs(float number4)
{
    float conversion4;
    conversion4 = number4 * 0.453592;
    return conversion4;
}

float inchesToMeter(float number5)
{
    float conversion5;
    conversion5 = number5 * 0.0254;
    return conversion5;
}

float main()
{
    int s, o;
    float num;

    start:

    printf("Enter the number to convert - \n");
    scanf("%f", &num);

    printf("Press 1 to convert it from Kms to Miles\n");
    printf("Press 2 to convert it from Inches to Foot\n");
    printf("Press 3 to convert it from Cms to Inches\n");
    printf("Press 4 to convert it from Pound to Kgs\n");
    printf("Press 5 to convert it from Inches to Meter\n");

    scanf("%d",&s);
    if (s==1)
    {
        printf("The converted value of %.2f is %.2f.\n", num, kmsToMiles(num));
    }
    else if (s==2)
    {
        printf("The converted value of %.2f is %.2f.\n", num, inchesToFoot(num));
    }
    else if (s==3)
    {
        printf("The converted value of %.2f is %.2f.\n", num, cmsToInches(num));
    }
    else if (s==4)
    {
        printf("The converted value of %.2f is %.2f.\n", num, poundToKgs(num));
    }
    else if (s==5)
    {
        printf("The converted value of %.2f is %.2f.\n", num, inchesToMeter(num));
    }

    printf("\nTo continue the program press 1.\n To exit press 0\n");
    scanf("%d", &o);
    if (o==1)
    {
        goto start;
    }
    else if (o==0)
    {
        goto end;
    }
    
    end:
    
    return 0;
    
    
}