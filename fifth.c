#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter an Integer :\n");
    scanf("%d",&n);
    for(i=1;i<=(n+1)/2;i++)
    {
        for(k=1;k<i;k++)
            printf(" ");
        for(j=i;j<=n+1-i;j++)
            printf("%d",j);
        printf("\n");

    }
    for(i=1;i<=(n+1)/2;i++)
    {
        for(k=((n-1)/2)-i+1;k>0;k--)
            printf(" ");
        for(j=((n+1)/2)-i+1;j<=n+i+1-((n+1)/2)-1;j++)
            printf("%d",j);
        printf("\n");

    }

}
