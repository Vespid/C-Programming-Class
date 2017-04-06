#include <stdio.h>
#include <math.h>
main()
{
        int k, a_k, f;
        double a=0.,b=0.;
        printf("\nPart (a):\n\n");
        printf("k\ta_k=k^3-2\n________________\n");
        for(k=0;k<=15;k++)
        {
                a_k=k*k*k-2;
                a+=a_k;
                printf("%2d\t%5d\n",k,a_k);
        }
        a=1.5*sqrt(a);
        printf("\nA = %.3f\n\n",a);
        printf("Part (b):\n\n");
        for(k=1;k<=15;k=k+2)
        {
                a=1./(k*k);
                b+=a;
        }
        printf("B = %.5f\n\n",b);
}
