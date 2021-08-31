/* Program to receive values of latitude (L1, L2) and longitude (G2, G2) in degrees, of two places on the earth and output the distance between them in nautical miles */

#include <stdio.h>
#include <math.h>

int main()
{
    float lat1, lat2, lon1, lon2, d;

    /* Taking input from the user */
    
    printf("Enter the latitude and longitude of Place 1 - \n");
    scanf("%f%f", &lat1, &lon1);
    
    printf("\nEnter the latitude and longitude of Place 2 - \n");
    scanf("%f%f", &lat2, &lon2);

    /* Calculation */

    /* Converting the values entered by the user into radian values */

    lat1 = lat1 * 3.14 / 180;
    lat2 = lat2 * 3.14 / 180;
    lon1 = lon1 * 3.14 / 180;
    lon2 = lon2 * 3.14 / 180;

    d = 3963 * acos( sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1)); 

    /* Printing Values */

    printf("The distance between the following two places is %f NM (nautical miles).\n", d);

    return 0;
}