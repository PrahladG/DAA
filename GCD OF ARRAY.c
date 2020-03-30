#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int gcd(int a, int b); 
int divarr(int p,int q);
//global variables
int a[100];
int main()
{
    int n,x,y;
    printf("\nEnter no. of nuumbers: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[i]=x;
    }
    printf("\nThe gcd is: %d \n",divarr(0,n-1));    
    return 0;

}
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int divarr(int p,int q)
{
    
     if(p<q)
     {
        int m=(p+q)/2;
        int x=divarr(p,m);
        int y=divarr(m+1,q);
        return gcd(x,y);
     }
     else return a[p];
}

