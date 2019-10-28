#include<stdio.h>


int main(void)
{

double f1=66456.90987;
float f2 = 66456.90987;


printf("\nf1= %f\n",f1);
printf("f2= %f\n",f2);

double f3=66.90987;
float f4 = 66.90987;

printf("\nf3= %f\n",f3);
printf("f4= %f\n",f4);

printf("\n%ld\n", sizeof(short int));

 short int si=1;
int i=0;
for(i=1;i<100;i++)
{
si=si+si*2;
printf("%d\t%d\n",i,si);
} 





 
}
