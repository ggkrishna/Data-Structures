#include<stdio.h>
#include<stdlib.h>

// counter

int counter=0;

// Structure 
struct student
{
	int rank;
	
	struct student *left;
	struct student *right;
};

struct student* root=NULL; 

int add(int val)
{
	if(!root)
	{
		printf("\nTree is empty\n");
		struct student *root= malloc(sizeof(struct student));
		root->rank=val;
		root->left=NULL;
		root->right=NULL;
	}
	else
		printf("Tree is not empty");
	printf("from add frunction");
	return 0;

}

int search( int val)
{

	printf("from search");
	return 0;
}


int main(void)
{
int opt;
int sval;
int adval;
while(1)
{
printf("\n\n\n\n1. Search");
printf("\n2. Add");
printf("\n3. Delete");
printf("\n4. Find max");
printf("\n5. Find min");
printf("\n6. Exit\n");
printf("\n Choose your option from above list:  ");
scanf("%d",&opt);

switch(opt)
	{	

	case 1: printf("\n Search for what? ");
			scanf("%d",&sval);
			search(sval);
			break;
	case 2: printf("\n Add what? ");
			scanf("%d",&sval);
			add(adval);
			break;
	case 3: printf("\n ***3***");
			break;
	case 4: printf("\n ***4***");
			break;
	case 5: printf("\n ***5***");
			break;
	case 6: printf("\n ***Exit***\n");
			exit(0);

	default: printf("\n Invalid input");
			  break;

	}
}


}

