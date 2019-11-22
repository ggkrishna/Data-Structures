// Binary Search Tree implimentation in C
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int rank;
	struct student *left, *right, *parent;
}student;

student *tmp  = NULL;
student *temp;
student *node = NULL;
char direction;

student* new_node(student* nstd,int nrank)
{
	student *tstd = (student *)malloc(sizeof(student));
	tstd->rank = nrank;
	tstd->left = NULL;
	tstd->right = NULL;
	tstd->parent = nstd;
	printf("\n%d node created @ %p under %p", nrank,tstd,tstd->parent);
	return tstd;
}
void add_loc(int nrank)
{
if(nrank<node->rank)
{
	printf("\n%d is less than %d", nrank, node->rank);
	if(node->left)
	{
		node=node->left;
		add_loc(nrank);
	}
	else
		direction='l';
}

else if(nrank>node->rank)
{
	printf("\n%d is greater than %d", nrank, node->rank);
	if(node->right)
	{
		node=node->right;
		add_loc(nrank);
	}
	else
		direction='r';
}
else
	direction='s';
}
void search(student* tstd, int trank)
{
	if(tstd)
	{
		printf("\nsearching at %p where key is %d",tstd,tstd->rank);
	if(tstd->rank == trank)
		tmp = tstd;
	else if(tstd->rank > trank)
		search(tstd->left, trank);
	else if(tstd->rank < trank)
		search(tstd->right, trank);
	else
		tmp=NULL;
	}
}
student* minimum(student* node)
{
	for(;node->left;node=node->left);
	return node;
}
student* maximum(student* node)
{
	for(;node->right;node=node->right);
	return node;
}
int delete(student *node)
{
/*
1. Find the pointer/node which needs to be deleted
2. There arises three cases
		1. Node is completely free from both left and right
					Make the link(either left or right) from parent node NULL
						- make a temporary parent node.
						- find in which direction the node to be deleted is connected.
						- Make that connection NULL
		2. Node is having either left or right subtree


		3. Node is is having both right and left subtrees

*/
	printf("\n%d need to be deleted which is at %p", node->rank, node);
	student* temp=node->parent;
	printf("\n%d parent details - %p",node->rank,(node->parent));

	if((node->left==NULL) && (node->right==NULL))
		{
			if(temp->rank > node->rank)
				temp->left=NULL;
			else
				temp->right=NULL;
		}
	if((node->left==NULL) && (node->right))
		{
			if(temp->rank > node->rank)
			{
				temp->left=node->right;
				(node->right)->parent=temp;
			}
			else
			{
				temp->right=node->right;
				(node->right)->parent=temp;
			}
		}
		if((node->right==NULL) && (node->left))
			{
				if(temp->rank > node->rank)
				{
					temp->left=node->left;
					(node->right)->parent=temp;
				}
				else
				{
					temp->right=node->left;
					(node->left)->parent=temp;
				}
			}
		if((node->right)&&(node->left))
		{
			printf("\n %d has both left and right sub trees", node->rank);

			student* tmin=minimum(node->right);
			printf("\n Minimum of right subtree %d ",tmin->rank);
			node->rank=tmin->rank;
			delete(tmin);

		}

	//free(node);
	return 0;
}
void inorder(student *root)
{
	if (root != NULL)
	{
		inorder(root->right);
		printf("%d @ %p parent address:%p\n", root->rank, root,root->parent);
		inorder(root->left);
	}
}
int main()
{

int opt;
int sval=0;
int adval;
char ch;
int cnt;

student *root = NULL;

while(1)
{
printf("\n\n\n\n1. Add");
printf("\n2. Delete");
printf("\n3. Display Tree ");
printf("\n4. Search");
printf("\n5. Minimum");
printf("\n6. Maximum");
printf("\n7. Exit\n");
printf("\n Choose your option from above list:  ");
if(scanf("%d",&opt)!=1)
	break;
switch(opt)
	{
	case 1:
			do
			{
			printf("\n Add a new rank ");
			scanf("%d",&sval);
			if(sval>0)
			{
				if(root==NULL)
					root=new_node(NULL,sval);
				else
				{
					// printf("\nroot is not empty %p ",root);
					node=root;
					add_loc(sval);
					switch(direction)
					{
						case 'l': printf("\n     direction =%c",direction);
											printf("\n next location to add %d is left to %d",sval,node->rank);
											node->left=new_node(node,sval);
											break;
						case 'r':  printf("\n     direction =%c",direction);
											printf("\n next location to add %d is right to %d",sval,node->rank);
											node->right=new_node(node,sval);
											break;
						case 's': printf("\n%d already exists.", sval);
											break;
					}
				}
			}
			else
				printf("invalid rank");
			}while(sval>0);
			break;

	case 2: printf("\n Enter the key value to delete");
			scanf("%d",&sval);
			search(root,sval);
			if(tmp==root)
			{
				printf("\nRoot can't be deleted");
				break;
			}
			if(tmp)
				delete(tmp);
			else
				printf("\n key %d is not found",sval);
			break;

	case 3: printf("\n Display\n");
			if(root==NULL)
				printf("\nNothing to display from tree");
			inorder(root);
			break;

	case 4: printf("\n Search for what? ");
			scanf("%d",&sval);
			tmp=NULL;
			search(root,sval);
			if(tmp)
				printf("\n%d found @ %p", sval, tmp);
			else
				printf("\n %d is found nowhere in tree", sval);
			break;

	case 5:
			if(root)
				printf("\n Minimum : %d stored @ %p", minimum(root)->rank, minimum(root));
			else
				printf("\n Tree is Empty....How can I find minimum? ");
			break;

	case 6:
			if(root)
				printf("\n Maximum : %d stored @ %p", maximum(root)->rank, maximum(root));
			else
				printf("\n Tree is Empty....How can I find maximum?");
			break;

	case 7: printf("\n ***Exit***\n");
			exit(0);

	default: printf("\n Invalid input");
			  break;
	}
}

	return 0;
}
