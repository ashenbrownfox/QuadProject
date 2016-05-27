#include <stdio.h>
#include "mock_output.h"
#include <assert.h>
#include <math.h>

//global variables for results (r1 and r2) and flag for imaginary numbers
double r1, r2;
bool imagFlag;

void printRoots(double r1, double r2, bool imagFlag)
{	
	assert(fabs(r1) - 1 < 0.00001);
	assert(fabs(r2) - 3 < 0.00001);

	printf("\nSuccess!");

}
