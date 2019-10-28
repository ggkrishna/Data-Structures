#include<stdio.h>

void prtrec(n);

int main(void)
{

int num=543;

prtrec(num);
}



void prtrec(int n)
{


if(n<0)
{
printf("-");
n=-n;
}

if(n/10)
prtrec(n/10);
printf("%c",(char)n%10+'0');
}
