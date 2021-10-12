/*
In digital world colors are specified in Red - Green - Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255. In print publication the colors are mentioned in Cyan - Magenta - Yellow - Black (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:

White = Max (Red / 255, Green / 255, Blue / 255)

Cyan = ((White - Red / 255) / White)

Magenta = ((White - Green / 255) / White)

Yellow = ((White - Blue / 255) / White)

Black = 1 - White 

Note thet if the RGB values are all 0, then the CMY values are all 0 and the K is 1.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float red, green, blue;
    float cyan, magenta, yellow, black, white;
    float max;
    printf("Enter the RGB(Red, Green, Blue) color values -\n");
    scanf("%f%f%f", &red, &green, &blue);
    if (red == 0 && green == 0 && blue == 0)
    {
        cyan = magenta = yellow = 0;
        black = 1;
    }
    else
    {
        red = red / 255;
        green = green / 255;
        blue = blue / 255;

        max = red;

        if (green > max)
            max = green;
        if (blue > max)
            max = blue;

        white = max;

        cyan = (white - red) / white;
        magenta = (white - green) / white;
        yellow = (white - blue) / white;
        black = 1 - white;
    }

    printf("The value of CMYK = %.2f, %.2f, %.2f, %.2f\n", cyan, magenta, yellow, black);

    getch();
    return 0;
}