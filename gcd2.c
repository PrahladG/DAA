#include<stdio.h>

int gcd(int a,int b)
{
if(b==0)
{
 return a;
}
else
{
	return gcd(b,a%b);
}
}

int main()

{
	printf("Enter the two numbers to find their gcd");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The gcd of the two numbers is %d",gcd(a,b));

} 