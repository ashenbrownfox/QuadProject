#include <math.h>
#include "mock_qsolve_sqrt.h"
#include "qsolve_sqrt.h"

static int    count = 0;
static int    flag  = -1;

// initialize to expect 1 call to the mock qsolve_sqrt() 
// expecting arguement lx within leps absolute error
// return    result    lsqrtx
void mock_setup_qsolve_sqrt(double a, double b, double c, bool *imagFlag, double *r1, double *r2) {
count = 0;
*imagFlag=0;
}

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

// Returns 0 if the corr4eft argument was passed and only one call was made.
// else there was a problem and retun 1
int mock_check_qsolve_sqrt(double a, double b, double c, bool *imagFlag, double *r1, double *r2) {
int	ret, result1, result2;
*r1 = result1;
*r2 = result2;
*imagFlag = flag;
if((flag == 0) && (count==1)) {
  ret = 0;
} else {
  ret = 1;
}
return ret; 
}

