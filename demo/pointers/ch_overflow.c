#include <stdio.h>
#include<stdlib.h>

void main(void)
{

char ch[10];
char *st;

printf("\n enter your first name:");
scanf("%s",ch);
printf("\nyour first name is: %s",ch);
printf("\n*****************\n");

st=malloc(sizeof(char)*10);
printf("\n enter your second name:");
scanf("%s",st);
printf("\nyour second name is: %s",st);
printf("\n*****************\n");

free(st);

}
