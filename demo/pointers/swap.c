#include<stdio.h>

int main(void)
{

int x=100;
int y=200;
printf("\n************ Before swaping ***********");
printf("\nx=%d",x);
printf("\ny=%d",y);
swap(x,y);
printf("\n************ After swaping ***********");
printf("\nx=%d",x);
printf("\ny=%d",y);

/*
printf("\n************ swaping ***********");
printf("\nswap=%d\n",swap(x,y));
*/
printf("\n");

}

swap(x,y)
{

int tmp;

tmp=y;
y=x;
x=tmp;

printf("\n************ Inside swap() ***********");
printf("\nx=%d",x);
printf("\ny=%d",y);
return(x,y);
}
