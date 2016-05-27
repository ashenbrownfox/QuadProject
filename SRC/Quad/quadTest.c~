#include <stdio.h>
#include "quad.h"
#include <math.h>

double r1, r2;
bool imagFlag;

int main()
{
  	double a = 3.0, b = 4.0, c = 1.0;
	quad(a, b, c, &imagFlag, &r1, &r2);
	if (fabs(r1 - -.3333333) < 0.00001 && fabs(r2 - -1) < 0.00001)
	printf("PASS\n");
	else
	printf("FAIL\n");
	

	a = 1, b = 1, c = -4;
	quad(a, b, c, &imagFlag, &r1, &r2);
	if (fabs(r1 - 1.5615528128088303) < 0.00001 && fabs(r2 - -2.5615528128088303) < 0.00001)
	printf("PASS\n");
	else
	printf("FAIL\n");

	a = 4, b = 4, c = 8;
	quad(a, b, c, &imagFlag, &r1, &r2);
	if (imagFlag == true)
	printf("PASS\n");
	else
	printf("FAIL\n");

	a = 1, b = 1, c = 1;
	quad(a, b, c, &imagFlag, &r1, &r2);
	if (imagFlag == true)
	printf("PASS\n");
	else
	printf("FAIL\n");


	return 0;
}
