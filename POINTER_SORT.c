#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int *p[100];
void pointersort(int n1,int count);
int main()
{
    int n1,n2,n3,n4;
    int count=0;
    printf("enter the number of arrays");
    scanf("%d",&n1);
    int a[n1][100];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<100;j++)
        {
            a[i][j]=1000000;
        }
    }
    for(int i=0;i<n1;i++)
    {
        printf("enter the number of numbers");
        scanf("%d",&n2);
        printf("enter the numbers");
        for(int j=0;j<n2;j++)
        {
            scanf("%d",&a[i][j]);
            count++;
        }
    }
    for(int i=0;i<n1;i++)
    {
        p[i]=&a[i][0];
    }
    /*for(int i=0;i<n1;i++)
    {
        int j=0;
        while(*(p[i])!='\0'&&*(p[i])!=1000000)
        {
            printf("%d\n",*(p[i]));
            p[i]++;
        }
    }*/
    pointersort(n1,count);
}
void pointersort(int n1,int count)
{
    int min;
    int index;
    int c=0;
    while(c!=count)
    {
    min=*p[0];
    index=0;
    for(int i=0;i<n1;i++)
    {
        if(*(p[i])!='\0')
        {
        if(*(p[i])<min)
        {
            min=*(p[i]);
            index=i;
        }
        }
    }
    printf("%d\n",min);
    *p[index]++;
    c++;
    }
}
