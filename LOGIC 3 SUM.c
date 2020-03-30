logic 3
#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
	struct node* lptr;
	int data;
	struct node* rptr;
};
// create an empty tree
struct node* tptr = NULL;
void insert(int x);
void inorder(struct node* ptr);
void search(int l);
void main()
{
int p,i,n;

	printf("Enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the integer array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the integer to check sum\n");
	scanf("%d",&p);
	for(int i=0;i<n;i++)
	{
		insert(a[i]);
	}
	for(int i=0;i<n;i++)
	{
		search(p-a[i]);
	  if(count==1)
			{
			break;
			}
	}
	if(count==0)
			{
			 printf("no such pair of integers exists\n");
			}

}
void insert(int x)
{
// create node
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->lptr = temp->rptr = NULL;
//	insert the first node
	if(tptr == NULL)
		tptr = temp;
// insert non-first node
	else
	{
		struct node* ptr = tptr;
		struct node* pptr = NULL;
		while(ptr != NULL)
		{
			pptr = ptr;
			if(x<ptr->data)
				ptr = ptr->lptr;
			else
				ptr = ptr->rptr;
		}
		if(x<pptr->data)
			pptr->lptr = temp;
		else
			pptr->rptr = temp;
	}
}
void inorder(struct node* ptr)
{
	if(ptr != NULL)
	{
		inorder(ptr->lptr);
		printf("%d ",ptr->data);
		inorder(ptr->rptr);
	}
}
void search(int l)
{
	struct node*p=tptr;
	while (p!=NULL)
	{
		if(p->data==l)
		{
			count=1;
			printf("there exists such integers\n");
		}
		if(l>(p->data))
		{
			p=p->rptr;
		}
		else
		{
			p=p->lptr;
		}
	}
}
