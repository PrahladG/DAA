void DFSS(struct Graph G1,int s)
{
    DFSV(s);
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
