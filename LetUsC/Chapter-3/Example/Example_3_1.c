/* While purchasing certain items, a discount of 10% is offered if the quantity purchased is more then 1000. If quantity and price per item are input through the keyboard, write a program to calculate the total expenses. */

/* Calculation of total expenses */
#include <stdio.h>

int main()
{
    int qty, dis;
    float rate, tot;
    printf("Enter quantity and rate -");
    scanf("%d%f", &qty, &rate);
    if(qty > 1000)
        dis = 10;
    else 
        dis = 0;
    tot = (qty * rate) - (qty * rate * dis / 100);
    printf("Total expenses = Rs. %f\n", tot);
    return 0;
}