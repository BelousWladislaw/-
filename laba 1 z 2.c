#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
float x,y,z,S;
printf ("Enter x, y, z:");
scanf("%f %f %f", &x, &y, &z);
S=pow(fabs(cos(x)-cos(y)),1+2*pow(sin(y),2))*(1+z+pow(z,2)/2+pow(z,3)/3+pow(z,4)/4);
printf("S= %.5f\n", S);
return 0;
}

