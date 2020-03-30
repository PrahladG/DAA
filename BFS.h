void BFS(struct Graph G1)
{
    BFSv(rand()%v);
}
void BFSv(int start)
{
    vector<bool> visited(v, false);
    vector<int> q;
    q.push_back(start);
    visited[start] = true;
    int vis;
    while (!q.empty()) {
        vis = q[0];
        cout << vis << " ";
        q.erase(q.begin());
        for (int i = 0; i < v; i++) {
            if (adj[vis][i] == 1 && (!visited[i])) {
                q.push_back(i);
                visited[i] = true;
            }
        }
    }
}
