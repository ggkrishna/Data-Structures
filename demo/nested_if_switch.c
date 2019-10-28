#include<stdio.h>


int main(void)
{

int marks=55;
char grade;

if(marks>=40)
	if(marks<=60 )
		{
		grade ='B';
		printf("Second Class\n");
		}

	else
		{
		grade ='A';
		printf("First Class\n");
		}

else
	{
	grade='F';
	printf("Fail\n");
	}

switch(grade)
{
	case 'A': printf("Excellent\n");
		  //break;
	case 'B': printf("Good\n");
		 // break;
	case 'F': printf("Better luck next time\n");
}

printf("\nI am out of switch\n");

}

