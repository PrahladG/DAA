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
	int n,i,result;
  printf("Enter the number of numbers\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the numbers");
   for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
   i=0;
   result=a[0];
  while(i<n-1)
  {
   result=gcd(result,a[i+1]);
   i++;
  }
  printf("the gcd of the numbers is %d",result);
}
