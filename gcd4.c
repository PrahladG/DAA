#include<stdio.h>
int gcd(int n1,int n2)
{
	int i,x,y;
	if(n1<n2)
		x=n1;'
   '
	else
		x=n2;
	for(i=x;i>=0;i--)
	{
		if((n1%i==0) && (n2%i==0))
		{
		    y=i;
        break;
		}
	}
  return y;
}

void main()
{
  int n,i,x,j;
  printf("Enter the number of numbers\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the numbers");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=0;j<n-1;j++)
  {
    x=gcd(a[j],a[j+1]);
    a[j+1]=x;
  }
  printf("%d is the gcd",a[n-1]);
}
