#include <stdio.h>
#include <math.h>
int main()
{
    double lemda,theta,d;
    printf ("Enter lemda:");
    scanf ("%lf",&lemda);
    printf ("Enter theta:");
    scanf ("%lf",&theta);
    printf ("Enter d:");
    scanf ("%lf",&d);
    d=d*1000; //convert in nm
    double x =sin(theta);
    double m=((d*x)/lemda );
    if (lemda>=380 && lemda <=750)
        printf ("%.4lf\n",m);
    else
        printf ("Out of the range.Please enter a valid number\n");


    return 0;
}
