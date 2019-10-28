#include<stdio.h>

int main(void)
{
char *st="IISERBPR";
char str[10]="Hello";
str[3]='\0';
printf("%s\n",str);
printf("%d\n",sizeof(str));
printf("before-  *(st+3): %c\n",*(st+3));
*(st+3)='7';
printf("after- st: %s\n",st);
st=str;
*(st+3)='7';
printf("%s\n",st);
printf("\n");
}

