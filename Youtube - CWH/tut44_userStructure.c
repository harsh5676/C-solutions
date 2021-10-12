/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

#include <stdio.h>
#include <conio.h>

struct driver
{
    char name[30], dlicno[20], route[20];
    int avg_dis;
} d[100];

int main()
{
    int n = 0, i;
    printf("Enter the number of drivers you want information of -\n");
    scanf("%d", &n);
    // struct driver d[3];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter the details of Driver No. %d -\n", i + 1);
        printf("Enter the name of the driver -\n");
        scanf("%s", &d[i].name);
        printf("Enter the driving license number -\n");
        scanf("%s", &d[i].dlicno);
        printf("Enter the route name -\n");
        scanf("%s", &d[i].route);
        printf("Enter the average distance travelled(in kms) -\n");
        scanf("%d", &d[i].avg_dis);
    }

    for (i = 0; i < n; i++)
    {
        printf("\nDetails of Driver No. %d -\n", i + 1);
        printf("Name of the driver - %s\n", d[i].name);
        printf("Driving license number - %s\n", d[i].dlicno);
        printf("Route name - %s\n", d[i].route);
        printf("Average distance travelled(in kms) - %d\n", d[i].avg_dis);
    }

    getch();
    return 0;
}