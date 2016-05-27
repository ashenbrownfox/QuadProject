#include <stdio.h>
#include <float.h>

int main()
{
	printf("The max value of a float is: %.10e \n", FLT_MAX);
	printf("The min value of a float is: %.10e \n", FLT_MIN);

	printf("The epsilon is: %.10e \n", FLT_EPSILON);

	printf("The number of digits in the mantissa (float) is: %d \n", FLT_MANT_DIG);

}


