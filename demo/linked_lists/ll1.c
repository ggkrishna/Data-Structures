#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int number;
	struct node *next;
}node;

int main(void)
{

	node *numbers = NULL;
	while(1)
	{
		int num;
		printf("\nenter you number: ");
		scanf("%d", &num);
	
		if (num == 0)
		{
			break;	
		}
		
		node *n = malloc(sizeof(node));

		if(!n)
		{
			return 1;		
		}


		n-> number =num;
		n-> next = NULL;

		if(numbers)
		{
			for (node *ptr =numbers; ptr!=NULL; ptr=ptr->next)
			if(ptr->next == NULL)
			{
				ptr->next=n;
				break;
			}
		}
		else
		{
			numbers=n;		
		}


	}	






//17105



}
