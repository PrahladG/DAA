#include<stdio.h>

int main()

{
	printf("Enter the two numbers to find their gcd");
	int a,b,c;
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
		c=b;
		b=a%b;
		a=c;
	}
	printf("The gcd of the two numbers is %d",a);

}
