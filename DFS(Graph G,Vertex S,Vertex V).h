void DFSSV(struct Graph G1,int s,int v)
{
    DFSV(s);
    if(Visited[v]==1)
        cout<<"There exists a Path";
    else
        cout<<"There does not exist a Path";
}
void DFSV(int i)
{
    int j;
    Visited[i]=1;
    cout<<i<<"->";
     for(j=0;j<20;j++)
    {
        if(G1.G[i][j]==1&&Visited[j]==0)
            DFSV(j);
    }

}
