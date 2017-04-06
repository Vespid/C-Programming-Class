#include <stdio.h>
#include <math.h>
double Intgr(double m, int n, double A, double a, double b);
double func(double x, double m, int n, double A);
double nfact(int n);
main()
{
double m,A,a,b;
int n;
printf("Enter the exponenets (double)m and (int)n in f(x):");
scanf("%lf %d",&m,&n);
printf("\nEnter the coeficient A in f(x): ");
scanf("%lf",&A);
printf("\nEnter the bounds for the integration interval a < b :");
scanf("%lf %lf",&a,&b);
printf("\nThe value of the integral is %.4f\n\n",Intgr(m,n,A,a,b));
}
double Intgr(double mf, int nf, double Af, double af, double bf)
{
int o,t;
double x,ah,int1,int2,int3,int4=0.,xf;
printf("\nIntegrate f(x) on [a,b]\nEnter the number of trapezoids: ");
scanf("%d",&t);
x=(bf-af)/t;
ah=af;
for(o=0;o<=t-1;o++)
{
int1=func(ah,mf,nf,Af);
ah+=x;
int2=func(ah,mf,nf,Af);
int3=(int1+int2)*x/2;
int4+=int3;
}
return int4;
}
double func(double xf, double mf, int nf, double Af)
{
return Af-cos(mf*xf)+(Af*pow(xf,mf))/nfact(nf);
}
double nfact(int nf)
{
if(nf==1)return 1;
else return nf*nfact(nf-1);
}
