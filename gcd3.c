#include<stdio.h>

int gcd(int a,int b,int i)
{
	if((a%i)==0 && (b%i)==0)
	{
		return i;
	}
	else{
		i--;
	   gcd(a,b,i);
        }
	
	
}


int main()

{
	printf("Enter the two numbers to find their gcd");
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
	printf("The gcd of the two numbers is %d",gcd(a,b,b)); 
    }
    else if(b>a){
	printf("The gcd of the two numbers is %d",gcd(a,b,a));
   } 
   
} 