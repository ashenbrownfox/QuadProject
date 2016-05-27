/*
input.c
Authors: Joseph Alflen, Joshua Inniger, Ailun Shen
Follows C11 & GNU Coding Standards 
*/

#include <stdio.h>
#include "input.h"
#include "../Quad/quad.h"
#include <assert.h>

//grabs input from user via keyboard
void getInput(double *a, double *b, double *c)
{
	char bufa[5];
	char bufb[5];
	char bufc[5];
	int num_variables;
	int flag = 0; //0 = true, 1 = false	
	
// coefficient a
	do
	{
  		printf("Enter coefficient a: ");
		fgets(bufa, sizeof(bufa), stdin);

		if (!isdigit(bufa[0]) && bufa[0] != ".")
		{
			printf("not a number!\n");
			flag = 1;
		}
		else
			flag = 0;
	} while (flag == 1);
	sscanf(bufa, "%lf", &*a);	

// coefficient b
	do
	{
  		printf("Enter coefficient b: ");
		fgets(bufb, sizeof(bufb), stdin);

		if (!isdigit(bufb[0]) && bufb[0] != ".")
		{
			printf("not a number!\n");
			flag = 1;
		}
		else
			flag = 0;
	} while (flag == 1);
	sscanf(bufb, "%lf", &*b);

// coefficient C
	do
	{
  		printf("Enter coefficient c: ");
		fgets(bufc, sizeof(bufc), stdin);

		if (!isdigit(bufc[0]) && bufc[0] != ".")
		{
			printf("not a number!\n");
			flag = 1;
		}
		else
			flag = 0;
	} while (flag == 1);
	sscanf(bufc, "%lf", &*c);	
}
