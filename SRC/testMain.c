#include <stdio.h>
#include <math.h> /* This is needed to use sqrt() function.*/
#include "testMain.h"
int main()
{
  	double a, b, c, determinant, r1,r2, real, imag;
	determinant = getInput();
  	return 0;
}


double getInput()
{
	double a, b, c, det;
  	printf("Enter coefficients a, b and c: ");
  	scanf("%lf%lf%lf",&a,&b,&c);
	det = quad(a,b,c);
	return 0.0;
}

double quad(double a, double b, double c)
{
	double determinant, r1,r2, real, imag;
	determinant = b*b-4*a*c;

	if (determinant>0)
  	{
      	r1= (-b+sqrt(determinant))/(2*a);
      	r2= (-b-sqrt(determinant))/(2*a);
		int x = out1(r1,r2);
  	}
  	else if (determinant==0)
  	{
    	r1 = r2 = -b/(2*a);
		int y = out2(r1,r2);
  	}
  	else
  	{
    	real= -b/(2*a);
    	imag = sqrt(-determinant)/(2*a);
		int z = out3(real,imag);
  	}
	return 0.0;
}

int out1(double r1, double r2)
{
	printf("Roots are: %.2lf and %.2lf \n",r1 , r2);
	return 0;
}

int out2(double r1, double r2)
{
	printf("Roots are: %.2lf and %.2lf \n",r1 , r2);
	return 0;
}

int out3(double real, double imag)
{
	printf("Roots are: %.2lf+%.2lfi and %.2lf-%.2lfi \n", real, imag, real, imag);
	return 0;
}
