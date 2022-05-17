#include <stdio.h>
#include <dos.h>

// void main()
// {
//     int major, minor;
//     union REGS regs; // required for making DOS calls

//     regs.h.al = 1;             // Get version number
//     regs.h.ah = 0x30;          // Get version function 30h
//     int86(0x21, &regs, &regs); // Call DOS
//     major = regs.h.al;         // Get major version no.
//     minor = regs.h.ah;         // Get minor version no.

//     printf("This is DOS version %i, release %i\n", major, minor);
// }

void main()
{
    printf("This is DOS version %i,\ release %i\n", _osmajor, _osminor);
}