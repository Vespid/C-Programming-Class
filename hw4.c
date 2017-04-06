// need to scan x once from each interval
// regardless of case order
// -2 pts

#include <stdio.h>
#include <math.h>
main()
{
int o,m,g;
double a,b,c,x,y;
printf("Enter (double) A, B, C:\n");
scanf("%lf%lf%lf",&a,&b,&c);
do
{
printf("\nEnter (double) x:\n");
scanf("%lf",&x);
if(x<=-1. && o!=1)
{
y=a*x-b*pow(x,4)-c;
printf("Case 1\n");
o=1;
printf("x value is = %.4f and y value is = %.5f\n",x,y);
}
else if(-1.<x && x<2. && m!=1)
{
y=a*pow(x,2)+b*pow(x,3)-x/4;
printf("Case 2\n");
m=1;
printf("x value is = %.4f and y value is = %.5f\n",x,y);
}
else if(x>=2. && g!=1)
{
y=a*log10(x)-b/x+2*c;
printf("Case 3\n");
g=1;
printf("x value is = %.4f and y value is = %.5f\n",x,y);
}
else printf("Enter x from another interval!\n");
}
while(o+m+g<3);
printf("\n");
}
