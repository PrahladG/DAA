#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
  int data;
  struct node *next;
};
int hash(int key)
{
  return key%10;
}
int insert(struct node *ht[],int key)
{
  int index=hash(key);
  struct node *t=(struct node*)malloc(sizeof(struct node));
  t->data=key;
  t->next=NULL;
  if(ht[index]==NULL)
  {
    ht[index]=t;
  }
  else
  {
    struct node *q=ht[index];
    while(q->next!=NULL)
    {
      q=q->next;
    }
    q->next=t;
  }
}
void search(struct node *ht[],int key)
{
  int i,x;
  for(i=0;i<10;i++)
  {
    struct node *p=ht[i];
    while(p!=NULL)
    {
      if(p->data==key)
      {
        count=1;
        printf("found\n");
        x=1;
        break;
      }
      p=p->next;
    }
  }

}
void main()
{
  struct node *ht[10];
  int i;
  for(i=0;i<10;i++)
  {
    ht[i]=NULL;
  }
  	int p,n;

	printf("Enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the integer array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the integer to check sum\n");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
	 	insert(ht,a[i]);
	}
  	for(i=0;i<n;i++)
	{
		int j=p-a[i];

		search(ht,j);
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
