bool isBipartite(vector<int> adj[], int v,
				vector<bool>& visited, vector<int>& color)
{
for (int u : adj[v]) {
    if (visited[u] == false) {
		visited[u] = true;
		color[u] = !color[v];
		if (!isBipartite(adj, u, visited, color))
				return false;
}
	else if (color[u] == color[v])
			return false;
}
	return true;
}
