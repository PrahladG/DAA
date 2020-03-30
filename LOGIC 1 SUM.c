#include<stdio.h>
int main()
{
	int p,i,n;
	int count=0;
	printf("Enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the integer array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the integer to check sum\n");
	scanf("%d",&p);
	for(int k=0;k<n;k++)
		{
		for(int j=0;j<n;j++)
		{
			if(p==a[k]+a[j])
			{
				printf("%d=%d+%d\n",p,a[k],a[j]);
				count++;
			}
		}
		}
        if(count==0)
			{
			 printf("no such pair of integers exists\n");
			}
}




























