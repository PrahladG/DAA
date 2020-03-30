#include<stdio.h>

int gcd(int a,int b)
  {
  
  while( a!=0 && b!=0 && a!=b)
  {
    if(a>b)
    {
      a=a-b;
    }
    else
      b=b-a;
  }
  if(a==0)
  {
    return b;
  }
  if(b==0)
  {
    return a;
  }
  if(a==b)
  {
    return a;
  }
  }

int main()
{
	printf("Enter the two numbers to find their gcd");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The gcd of the two numbers is %d",gcd(a,b));

} 