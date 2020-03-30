#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter an Integer :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         for(k=0;k<=n-i-2;k++)
            printf(" ");
        for(j=n-i;j<=n;j++)
            printf("%d",j);
        printf("\n");

    }
}
