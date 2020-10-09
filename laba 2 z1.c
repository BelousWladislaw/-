#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float x, y, r;
printf ( " enter x, y, r:" );
scanf ( "%f%f%f", &x, &y, &r );
if  ( x*x+y*y<=r*r )
 printf ("belong");
else 
if  ( x*x+y*y!=r*r )
 printf ("not belong");
}
