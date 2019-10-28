#include<stdio.h>

int main(void)
{

int i=0;

printf("one\n");
lbl:
i++;
printf("two\n");
printf("three\n");
if (i<4)
goto lbl;
printf("Four\n");

printf("Five\n");
printf("Six\n");
}
