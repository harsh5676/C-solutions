/* Calculation of aggregate and percentage marks */

#include <stdio.h>
int main()
{
    int phy, che, math, eng, bio, agg;
    float per;
    printf("Enter the marks of the following subjects -\n\n");
    printf("Mathematics -\n");
    scanf("%d", &math);
    printf("Physics -\n");
    scanf("%d", &phy);
    printf("Chemistry -\n");
    scanf("%d", &che);
    printf("Biology -\n");
    scanf("%d", &bio);
    printf("English -\n");
    scanf("%d", &eng);
    agg = math + phy + che + bio + eng;
    per = agg / 5;
    printf("Aggregate Marks = %d\n", agg);
    printf("Percentage = %f\n",per);
    return 0;
}