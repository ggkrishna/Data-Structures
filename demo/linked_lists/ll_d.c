#include<stdio.h>
#include<stdlib.h>

// counter

int counter=0;

// Structure 
struct student
{
	int number;
	char *name;
	
	struct student *next;
	struct student *prev;
};

int main(void)
{
	struct student *rolls=NULL;
	while(10)
	{

// creating a record in students table
		int sno;
		char sname[50];
		printf("%p",sname);

		printf("\n Enter Student Number "); // student's number
		scanf("%d", &sno);
		if(sno==0)
		{
			printf("\nInvalid Student Number \n");
			break;
		}
		printf("\n Enter Student Name ");   // student's name
		scanf("%s", sname);
// creating a temperory structure pointer	allocating memory 

		struct student *rec= malloc(sizeof(struct student));
		if(!rec)
		{
		return 1;
		}
// pushing data into the temporary structure
 
		rec -> number = sno;
		rec -> name   = sname;
		rec -> next   = NULL;
		rec -> prev   = NULL;

// adding the pointer at the end of the linked list

		if(rolls)
		{
			rolls->prev = rec;
			rec -> next = rolls;
			rolls = rec;
			

		}
		else
		{
			rolls=rec;
		}

	}
	
	int count=0;
	for(struct student *ptr = rolls; ptr!=NULL; ptr=ptr-> next)
	{
	printf("Record Number %d", ++count);
	printf("\n %d", ptr->number);
	printf("\n %s", ptr->name);
	printf("\n***************\n");
	}

}



