#include <stdio.h>
#include <stdlib.h>
main()
{
double s,c;
char f[255],l[255],k[99];
int n=0;
FILE *Sales,*Commission;
Sales=fopen("Sales.dat","r");
Commission=fopen("Commission.dat","w");
        if(Sales == NULL||Commission==NULL)
               {
                printf("file open failure\n");
                exit(1);
               }
while(fgets(k,99,Sales)!=NULL)
{
n++;
if(n%2!=0)
sscanf(k,"%s %s",f,l);
else
{
sscanf(k,"%lf",&s);
if(s<=30000)
c=s*.05;
else if(s>30000&&s<=50000)
c=.08*s;
else if(s>50000&&s<=90000)
c=.12*s;
else if(s>90000)
c=s*.15;
fprintf(Commission,"%s %s\nThe commission of Mr/Ms %s is %.2f, based on the sale of %.2f\n",f,l,l,c,s);
printf("%s %s\nThe commission of Mr/Ms %s is %.2f, based on the sale of %.2f\n",f,l,l,c,s);
}
}
fclose(Commission);
fclose(Sales);
}
