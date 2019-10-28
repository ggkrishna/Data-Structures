
#include<stdio.h>


void main(void)
{

int arr[5]={1,2,3,4,5};
int *ar;
ar=&arr[3];
for(int i=0;i<10;i++)
printf("\n%d\t%d",i,ar[-i]);
printf("\n****************\n");
}
