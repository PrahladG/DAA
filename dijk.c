#include<stdio.h>
#include<stdlib.h>
int visited[20];
void dijkstra(int n1,int n2);
void addedge(int n1,int n2,int n3,int n4);
int GRAPH[20][20];
int SDISTANCE[20][20];
int p(int v);
int main()
{
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            GRAPH[i][j]=1000000;
        }
        visited[i]=0;
    }
    int n1,n2,n3,n4,a,b,c;
    printf("enter the number of vertices");
    scanf("%d",&n1);
    printf("enter the number of edges");
    scanf("%d",&n2);
    for (int i=0;i<n2;i++)
    {
        printf("enter the source,destination,weight");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        GRAPH[a][b]=c;
    }
    printf("enter the source");
    scanf("%d",&n3);
    dijkstra(n3,n1);
    for(int i=1;i<n1;i++)
    {
        printf("vertex %d:distance %d\n",i,GRAPH[n3][i]);
    }
}
void dijkstra(int n1,int n2)
{
    int min=1000000;
    int index=-1;
    for(int i=0;i<20;i++)
    {
        if(GRAPH[n1][i]<min)
        {
            min=GRAPH[n1][i];
            index=i;
        }
    }
addedge(n1,index,min,n2);
}
void addedge(int n1,int n2,int n3,int n4)
{
    GRAPH[n1][n2]=n3;
    for(int i=0;i<20;i++)
    {
        if((GRAPH[n1][i])>((GRAPH[n1][n2])+(GRAPH[n2][i])))
        {
            GRAPH[n1][i]=GRAPH[n1][n2]+GRAPH[n2][i];
        }
    }
    visited[n1]=1;
    visited[n2]=1;
for(int k=0;k<20;k++)
{
 if(p(n4)==1)
{
int min =1000000;
int index=-1;
for(int i=0;i<20;i++)
{
    if(GRAPH[n1][i]<min&&visited[i]==0)
    {
        min=GRAPH[n1][i];
        index=i;
    }

}
    for(int i=0;i<20;i++)
    {
        if((GRAPH[n1][i])>((GRAPH[n1][index])+(GRAPH[index][i])))
        {
            GRAPH[n1][i]=GRAPH[n1][index]+GRAPH[index][i];
        }
    }
    visited[index]=1;
}
}
}
int p(int v)
{
    int a=0;
    for(int i=0;i<v;i++)
    {
        if(visited[i]==0)
        {
            a=1;
        }
    }
    return a;
}
