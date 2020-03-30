#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int GRAPH[20][20];
int visited[20];
int p();
int pickmin(int v);
int sdistance[20];
void update(int v,int destination);
void dijkstra(int v,int n1);
void insertedge(int a ,int b,int c);
int main()
{
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            GRAPH[i][j]=1000000;
        }
        visited[i]=0;
        sdistance[i]=1000000;
    }
    int n1,n2,a,b,c,d;
    printf("enter number of vertices");
    scanf("%d",&n1);
    printf("enter the number of edges");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
    {
        printf("enter the source,destination,weight");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        insertedge(a,b,c);
    }
    printf("enter the source");
    scanf("%d",&d);
    dijkstra(d,n1);
    for(int i=0;i<20;i++)
    {
        printf("%d %d %d\n",d,i,GRAPH[d][i]);
    }
}
void insertedge(int a,int b,int c)
{
    GRAPH[a][b]=c;
}
void dijkstra(int v,int n1)
{
    visited[v]=1;
    int min=1000000;
    int destination=-1;
    for(int i=0;i<20;i++)
    {
        if(GRAPH[v][i]<min)
        {
            destination=i;
            min=GRAPH[v][i];
        }
    }
    visited[destination]=1;
    update(v,destination);
    while(p()==1)
    {
        destination=pickmin(v);
        visited[destination]=1;
        update(v,destination);
    }

}
int p()
{
    int r=0;
    for(int i=0;i<20;i++)
    {
        if(visited[i]==0)
            r=1;
    }
    return r;
}
int pickmin(int v)
{
    int min=1000000;
    int d=-1;
    for(int i=0;i<20;i++)
    {
        if(GRAPH[v][i]<min&&visited[i]==0)
        {
            min=GRAPH[v][i];
            d=i;
        }
    }
    return d;
}
void update(int v,int destination)
   {
       for(int i=0;i<20;i++)
    {
        if(GRAPH[v][i]>GRAPH[v][destination]+GRAPH[destination][i])
        {
             GRAPH[v][i]=GRAPH[v][destination]+GRAPH[destination][i];
            sdistance[i]=GRAPH[v][destination]+GRAPH[destination][i];
        }
    }
   }
