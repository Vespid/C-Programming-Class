#include <stdio.h>
#include <math.h>
main()
{
int n,o,f,g;
double a,b,x,i,ah,int1,int2,int3,int4;
do
{
printf("a and b:");
scanf("%lf%lf",&a,&b);
do
{
printf("Enter the number of trapezoids:\n");
scanf("%d",&n);
x=(b-a)/n;
ah=a;
// need to reset int4 to zero before using trapezoidal rule for a different n_trap
// -1pt
for(o=0;o<=n-1;o++)
{
int1=1.5*exp(sin(2*ah))-0.5*pow(ah,2);
ah+=x;
int2=1.5*exp(sin(2*ah))-0.5*pow(ah,2);
int3=(int1+int2)*x/2;
int4+=int3;
}
printf("n_trap =%d\tdel_x =%f\nIntegral = %f\n\nDo you want new n_trap: y=1/n=0\n",n,x,int4);
scanf("%d",&f);
}
while (f !=0);
printf("\nDo you want new a and b: y=1 or n=0\n");
scanf("%d",&g);
}
while(g ==1);
}
