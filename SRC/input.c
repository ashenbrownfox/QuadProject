/*
input.c
Authors: Joseph Alflen, Joshua Inniger, Ailun Shen
Follows C11 & GNU Coding Standards 
*/

#include <stdio.h>
#include "input.h"
#include "quad.h"

//grabs input from user via keyboard
void getInput(double *a, double *b, double *c)
{
  	printf("Enter coefficients a, b and c: ");
  	scanf("%lf%lf%lf",&*a,&*b,&*c);
}
