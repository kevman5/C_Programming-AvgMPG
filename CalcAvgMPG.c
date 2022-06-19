#include <stdio.h>
// Calculating each tank's MPG as well as the total MPG overall the tanks.
int main(void)
{
    double milesA, gallonA, avgtank, totaltank;




    while (gallonA != -1)
    {
        printf("Enter number of miles driven: (-1 to end)");
        scanf("%lf",&milesA);
        printf("Enter number of gallons used: (-1 to end)");
        scanf("%lf",&gallonA);
        avgtank = milesA / gallonA;
        printf("Average miles per gallon on this tank was: %f\n",avgtank);
        if (gallonA != -1)
        totaltank = milesA / gallonA;

    }

    printf("Your total average miles per gallon on all these tanks of gas was: %f\n",totaltank);
}
