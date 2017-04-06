#include <stdio.h>
#define PI 3.141593
main()
{
        int k;
        double r,a,v,tr=0.,ta=0.,tv=0.,ar,aa,av;
        printf("\n");
        for(k=1;k<=15;k++)
        {
        r=.1*k;
        a=4*PI*r*r;
        v=4*PI*r*r*r/3;
        tv=v+tv;
        ta=a+ta;
        tr=r+tr;
        printf("Sphere (%2d)\tRadius = %4.1f\tArea = %7.3f\tVolume =  %7.3f\n",k,r,a,v);
}
        ar=tr/15;
        aa=ta/15;
        av=tv/15;
        printf("\n\nTotal Area = %7.3f\tTotal Volume = %7.3f\n\n\nAverage Radius = %7.3f\tAverage Area = %7.3f\tAverage Volume = %7.3f\n\n",ta,tv,ar,aa,av);
}
