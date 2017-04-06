#include <stdio.h>
#include <math.h>
main()
{
        double b,i,ar,n,mp,p,tp,f;
        printf("Enter the price (double):");
        scanf("%lf",&b);
        printf("\nprice = $%.2f\n\n\t\t\tMonthly Payments\n\nAnn. Int. Rate\t15-yr loan\t20-yr loan\t30-yr loan\n----------------------------------------------------------\n",b);
for(f=60;f<=80;f+=2)
{
ar=f*.001;
i=ar/12.;
printf("      %.4f\t",ar);
n=12.*15.;
p=pow(1.0 + i, n);
mp=b*i*p/(p-1);
printf("%.2f\t\t",mp);
n=12*20;
p=pow(1.0 + i, n);
mp=b*i*p/(p-1);
printf("%.2f\t\t",mp);
n=12*30;
p=pow(1.0 + i, n);
mp=b*i*p/(p-1);
printf("%.2f\n",mp);
}
printf("\n\n\n\t\t\tTotal Payment\n\nAnn. Int. Rate\tafter 15 yr\tafter 20 yr\tafter 30 yr\n------------------------------------------------------------\n"
);
for(f=60;f<=80;f+=2)
{
ar=f*.001;
i=ar/12.;
printf("      %.4f\t",ar);
n=12.*15.;
p=pow(1.0 + i, n);
mp=b*i*p/(p-1);
tp=n*mp;
printf("%.2f\t",tp);
n=12*20;
p=pow(1.0 + i, n);
mp=b*i*p/(p-1);
tp=n*mp;
printf("%.2f\t",tp);
n=12*30;
p=pow(1.0 + i, n);
mp=b*i*p/(p-1);
tp=n*mp;
printf("%10.2f\n",tp);
}
}
