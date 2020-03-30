#include<stdio.h>
#include<stdlib.h>
int count(int n)
{
    if( n==1)
        return 1;
        else
      return (count(n/2)+count(n/2)+1);
      }
int main()
{
    printf("enter the number of discs for the tower \n");
    int n,a;
    scanf("%d",&n);
    a=count(n);
    printf("\n no of steps required to make the tower for \n disc 1 to disc 2 using disc 3 is %d ",a);
}
