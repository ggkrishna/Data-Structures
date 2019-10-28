 



#include<stdio.h>

int factorial(int fact)
{

if(fact==0)
	return 1;
else
	return fact*factorial(fact-1);
}

int main(void)


{

int fact;
scanf("%d",&fact);
printf("\n factorial= %d", factorial(fact));
}




17092

17086

17015






