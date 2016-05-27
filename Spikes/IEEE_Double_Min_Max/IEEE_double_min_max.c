#include <stdio.h>
#include <float.h>

int main()
{
	printf("The max value of a double is: %.10e \n", DBL_MAX);
	printf("The min value of a double is: %.10e \n", DBL_MIN);

	printf("The epsilon is: %.10e \n", DBL_EPSILON);

	printf("The number of digits in the mantissa (double) is: %d \n", DBL_MANT_DIG);

}


