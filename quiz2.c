#include <stdio.h>
#include <math.h>
main()
{
        double x,y,e;
        int k;
        printf("\nEnter -1<x<1 : ");
        scanf("%lf",&x);
        y=2.5*log(1+x);
        printf("True value of Y = %.6f\n",y);
if(x==0.) printf("relative error is zero\n");
else
do
{
double Y=0.;
printf("\nEnter an integer 1-4; 0 to Exit\n");
scanf("%d",&k);
switch(k)
{
case 4:
Y=-pow(x,4)/4;
case 3:
Y=Y+pow(x,3)/3;
case 2:
Y=Y-pow(x,2)/2;
case 1:
Y=Y+x;
e=100*(Y*2.5-y)/y;
printf("%d term approximation\nApproximate y = %.6f \nRelative error = %.3f percent\n",k,Y*2.5,e);
case 0:
break;
default:
printf("unrecognized operator\n");
break;
}
}
while(k!=0);
}
