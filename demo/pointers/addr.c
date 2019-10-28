#include<stdio.h>

int main(void)
{

int x=100;


printf("\n d:%d\t sizeof_int :%d",&x,sizeof(x));
printf("\n ld:%ld\t sizeof_long_int :%d",&x, sizeof(long int));
printf("\n p:%p",&x);
printf("\n after dereference:%d",*&x);
printf("\n");

}



