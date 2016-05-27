#include <stdio.h>
#include <float.h>

int main()
{
	printf("The max number of decimal digits without change after rounding (float): %d \n", FLT_DIG);
	printf("The max number of decimal digits without change after rounding (double): %d \n", DBL_DIG);
	printf("The number of digits in the mantissa (double): %d \n", DBL_MANT_DIG);
	printf("The number of digits in the mantissa (float): %d \n", FLT_MANT_DIG);

}
