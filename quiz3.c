#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
int o=0,k,g,d;
FILE *input1, *input2, *output1, *output2, *input3;
char student[81],name[41],surname[41],a[21];
double grade[4],s=99,l=0.,max,min,av,c;
input1=fopen("q3in1.dat","r");
input2=fopen("q3in2.dat","r");
output1=fopen("q3out1.dat","w");
if(input1==NULL||input2==NULL||output1==NULL)
{
printf("file does not exist\n");
exit(1);
}
while(fgets(student,81,input2)!=NULL)
{
o++;
sscanf(student,"%s %s",name,surname);
printf("\nStudent %s",surname);
fprintf(output1,"Student %s",surname);
fscanf(input1,"%lf %lf %lf %lf",&grade[1],&grade[2],&grade[3],&grade[4]);
av=(grade[1]+grade[2]+grade[3]+grade[4])/4;
d=strlen(surname);
for(g=0;g<=10-d;g++)
{
printf(" ");
fprintf(output1," ");
}
printf("average is %.1f",av);
fprintf(output1,"average is %.1f\n",av);
}
printf("\n\nTotal number of students: %d\n\n",o);
fprintf(output1,"\nTotal number of students: %d\n\n",o);
fclose(input1);
fclose(input2);
fclose(output1);
input3=fopen("q3out1.dat","r");
output2=fopen("q3out2.dat","w");
if(input3==NULL||output2==NULL)
{
printf("file does not exist\n");
exit(1);
}
for(k=0;k<o;k++)
{
fscanf(input3,"%s %s %s %s %lf",a,surname,a,a,&c);
if (c>l)
l=c;
if (c<s)
s=c;
}
printf("Maximum average is %.1f\nMinimum average is %.1f\n\n",l,s);
fprintf(output2,"Maximum average is %.1f\nMinimum average is %.1f\n\n",l,s);
fclose(input3);
fclose(output2);
}
