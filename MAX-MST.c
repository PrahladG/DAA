#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct edge
{
    int source;
    int destination;
    int weight;
};
int l;
void DFS(int v,int s,int visited[]);
int checkcycle(int v);
void insertionSort();
void addmst(int i);
struct edge array[20];
void addedge(int a,int b,int c,int d);
int GRAPH[20][20];
int GRAPHL[20][20];
int MST[20][20];
int main()
{
    int n1,n2,n3,n4;
    printf("enter number of edges");
    scanf("%d",&n1);
    for (int i=0;i<20;i++)
    {
        array[i].source=0;
        array[i].destination=0;
        array[i].weight=1000000;
    }
    for (int i=0;i<n1;i++)
    {
        printf("enter the source, destination,weight");
        scanf("%d",&n2);
        scanf("%d",&n3);
        scanf("%d",&n4);
        addedge(n2,n3,n4,i);
    }
    for (int i=0;i<20;i++)
    {
        printf("%d->%d,%d\n",array[i].source,array[i].destination,array[i].weight);
    }
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            GRAPH[i][j]=1000000;
            GRAPHL[i][j]=1000000;
        }
    }

    insertionSort();
    for(int i=0;i<20;i++)
    {
        addmst(i);
    }
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(GRAPH[i][j]!=1000000)
            {
                printf("%d->%d\n",i,j);
            }
        }
    }
}
void addedge(int a,int b,int c,int d)
{
    array[d].source=a;
    array[d].destination=b;
    array[d].weight=c;
}
void insertionSort()
{
   int i,j,a,b,c;
   for (i = 0; i < 20; i++)
{
       for (j = 0; j < 20-i-1; j++)
       {
           if (array[j].weight < array[j+1].weight)
           {
              a=array[j].source;
              b=array[j].destination;
              c=array[j].weight;
              array[j].source=array[j+1].source;
              array[j].destination=array[j+1].destination;
              array[j].weight=array[j+1].weight;
              array[j+1].source=a;
              array[j+1].destination=b;
              array[j+1].weight=c;
           }
       }
}
}
void addmst(int i)
{
    int a,b,c,d;
    a=array[i].source;
    b=array[i].destination;
    c=array[i].weight;
    GRAPH[a][b]=c;
    GRAPHL[a][b]=c;
    GRAPHL[b][a]=c;
    d=checkcycle(a);
    if(d==1)
    {
        GRAPH[a][b]=1000000;
        GRAPHL[a][b]=1000000;
        GRAPHL[b][a]=1000000;
    }
}
int checkcycle(int v)
{
    int visited[20];
l=0;
for(int i=0;i<20;i++)
{
    visited[i]=0;
}
DFS(v,-1,visited);
if(l==1)
{
return 1;
}
else return 0;
}
void DFS(int v,int parent,int visited[])
{
     int j;
     visited[v]=1;
     for(j=0;j<20;j++)
     {
         if(GRAPHL[v][j]!=1000000&&GRAPHL[j][v]!=1000000&&visited[j]==1&&j!=parent)
         {
             l=1;
             break;
         }
         else if(GRAPHL[v][j]!=1000000&&GRAPHL[j][v]!=1000000&&visited[j]!=1)
         {
             DFS(j,v,visited);
         }
     }
}

