/*

1. kms to miles
2. inches to foot
3. cms to inches
4. pound to kgs
5. inches to meters

*/

#include <stdio.h>

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeter = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character. q to quit\n  1. kms to miles\n  2. inches to foot\n  3. cms to inches\n  4. pound to kgs\n  5. inches to meters\n");
        scanf(" %c", &input);
        printf("The character is %c\n", input);

        switch (input)
        {

        case 'q':

            printf("Quitting the program...");
            goto end;
            break;

        case '1':

            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
            break;

        case '2':

            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%.2f Inches is equal to %.2f Foot\n\n\n", first, second);
            break;

        case '3':

            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%.2f Cms is equal to %.2f Inches\n\n\n", first, second);
            break;

        case '4':

            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%.2f Pound is equal to %.2f Kgs\n\n\n", first, second);
            break;

        case '5':

            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToMeter;
            printf("%.2f Inches is equal to %.2f Meter\n\n\n", first, second);
            break;

        default:

            break;

        }
    }

end:

    return 0;
    
}
