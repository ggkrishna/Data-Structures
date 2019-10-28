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
};

int main(void)
{
	struct student *rolls=NULL;
	while(10)
	{

// creating a record in students table
		int sno;
		char sname[50];
		printf("\n allocated memory for string %p", sname);

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

// adding the pointer at the end of the linked list

		if(rolls)
		{

			for(struct student *ptr = rolls; ptr!=NULL; ptr=ptr-> next)
			if(ptr->next==NULL)
			{
				ptr-> next= rec;
				break;
			}
		}
		else
		{
			rolls=rec;
		}

	}



// Find length of the linked list	
// Find the serial number of the person whose name is "Raju" (searching)
// Add another record after "Raju"  (searching + addition )
// Change the name of a particular 

//durga17@iiserbpr.ac.in
}



