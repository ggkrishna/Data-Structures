#include<stdio.h>
#include<stdlib.h>


struct node
{
	int number;
	struct node *next;
};

int main(void)
{

	struct node *numbers = NULL;
	while(1)
	{
		int num;
		printf("\nenter you number: ");
		scanf("%d", &num);
	
		if (num == 0)
		{
			break;	
		}
		
		struct node *n = malloc(sizeof(struct node));

		if(!n)
		{
			return 1;		
		}


		n-> number =num;
		n-> next = NULL;

		if(numbers)
		{
			for (struct node *ptr =numbers; ptr!=NULL; ptr=ptr->next)
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

}
