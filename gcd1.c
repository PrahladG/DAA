#include<stdio.h>

int gcd(int a,int b)
  {
  
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
  if(a>b)
  {
  	gcd(a-b,b);
  }
  else
  {
  	gcd(a,b-a);
  }
  }

int main()
{
	printf("Enter the two numbers to find their gcd");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The gcd of the two numbers is %d",gcd(a,b));

}

