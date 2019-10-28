#include<stdio.h>

int swap();

int main(void)
{

int x=100;
int y=200;
printf("\n************ Before swaping ***********");
printf("\nx=%d",x);
printf("\ny=%d",y);
swap(&x,&y);
printf("\n************ After swaping ***********");
printf("\nx=%d",x);
printf("\ny=%d",y);

/*
printf("\n************ swaping ***********");
printf("\nswap=%d\n",swap(x,y));

*/


printf("\n");

}


int swap(int*x,int*y)
{

int tmp;

tmp=*x;
printf("\ntmp=%d",tmp);
*x=*y;
*y=tmp;

printf("\n%d\t%d",x,*x);

}
