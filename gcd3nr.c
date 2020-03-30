#include<stdio.h>
int main()
{
	int i,n1,n2,x;
	printf("Enter the two numbers\n");
	scanf("%d %d",&n1,&n2);
	if(n1<n2)
		x=n1;
	else
		x=n2;
	for(i=x;i>=0;i--)
	{
		if((n1%i==0) && (n2%i==0))
		{
			printf("the gcd is %d",i);
		    break;
		}

	}
	return 0;
}