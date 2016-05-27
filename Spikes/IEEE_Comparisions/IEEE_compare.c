//spike for testing the comparison of various floating point values
int main() {
//variables for testing
double a,b,c,d,e,f,g,h,i,j,k;

//assign variables different values and print/compare
a=0;
b=1;
//c=1/0; Floating Point exception (core dumped)
d=0/1;
e=1/3;
f=3/2;
g=1.11111111;
h=1.11111112;
i=1.5;
j=.88888888888888888888888888888888;
k=.888888888888888888888888888888881;


printf("%f\n",a);
printf("%f\n",b);
printf("%f\n",c);
printf("%f\n",d);
printf("%f\n",e);
printf("%f\n",f);
printf("%f\n",g);
printf("%f\n",h);
printf("%f\n",i);

printf("\na=0, if (a == 0.0):\n");
if (a == 0.0)
printf("equal\n\n");
else
printf("not equal");

printf("f=3/2, if (f == 1.5):\n");
if (f == 1.5)
printf("equal\n\n");
else
printf("not equal\n\n");

printf("i=1.5, if (i == 1.5):\n");
if (i == 1.5)
printf("equal\n\n");
else
printf("not equal\n\n");

printf("g=1.11111111, h=1.11111112 if (g == h):\n");
if (g == h)
printf("equal\n\n");
else
printf("not equal\n\n");


printf("j=.88888888888888888888888888888888, k=.888888888888888888888888888888881, if (j ==k):\n");
if(j == k)
printf("equal\n\n");
else
printf("not equal\n\n");

return 0;
}
