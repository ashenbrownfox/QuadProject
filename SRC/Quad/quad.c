/*
quad.c
Authors: Joseph Alflen, Joshua Inniger, Ailun Shen
Follows C11 & GNU Coding Standards 
*/

#include <math.h> /* This is needed to use sqrt() function.*/
#include "quad.h"
#include <stdio.h>

void quad(double a, double b, double c, bool *imagFlag, double *r1, double *r2)
{
	double determinant = b*b-4*a*c;
	if (determinant>0)
  	{
      		*r1= (-b+sqrt(determinant))/(2*a);
      		*r2= (-b-sqrt(determinant))/(2*a);
		*imagFlag = false;
  	}
  	else if (determinant==0)
  	{
    		*r1 = *r2 = -b/(2*a);
		*imagFlag = false;
  	}
  	else
  	{
    		*r1= -b/(2*a);
    		*r2 = sqrt(-determinant)/(2*a);
		*imagFlag = true;
  	}

}
