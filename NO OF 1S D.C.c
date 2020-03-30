#include<stdio.h>
#include<stdlib.h>
int count(int a[],int len);
int d=0;
int main()
{
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
int len=(sizeof a)/4;
printf("%d",count(a,len));
return 0;
}
int count(int a[],int len)
{
    if( len==1)
    {
        if(a[0]==1)
            return 1;
        else
            return 0;
    }
    else if(len%2==0)
    {
    int b[len/2];
    int c[len/2];
    for(int i=0;i<len/2;i++)
    {
        b[i]=a[i];
    }
    for(int i=len/2;i<len;i++)
    {
        c[i-(len/2)]=a[i];
    }
      return (count(b,(sizeof b)/4)+count(c,(sizeof c)/4));
      }
      else
      {
      int b[len/2];
      int c[(len/2)+1];
      for(int i=0;i<len/2;i++)
    {
        b[i]=a[i];
    }
    for(int i=len/2;i<len;i++)
    {
        c[i-(len/2)]=a[i];
    }
      return (count(b,(sizeof b)/4)+count(c,(sizeof c)/4));
      }

      }

