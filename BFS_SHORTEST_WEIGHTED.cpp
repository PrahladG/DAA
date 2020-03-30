#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// data structure to store graph edges
struct Edge {
	int source, dest, weight;
};
class Graph
{
public:
	vector<vector<int>> adjList;
	Graph(vector<Edge> const &edges, int x, int N)
	{
		adjList.resize(3*N);
		for (auto &edge: edges)
		{
			int v = edge.source;
			int u = edge.dest;
			int weight = edge.weight;

			if (weight == 3*x)
			{
				adjList[v].push_back(v + N);
				adjList[v + N].push_back(v + 2 * N);
				adjList[v + 2 * N].push_back(u);
			}
			else if (weight == 2*x)
			{
				adjList[v].push_back(v + N);
				adjList[v + N].push_back(u);
			}
			else
				adjList[v].push_back(u);
		}
	}
};
void printPath(vector<int> const &predecessor, int v, int& cost, int N)
{
	if (v < 0)
		return;

	printPath(predecessor, predecessor[v], cost, N);
	cost++;

	// consider only nodes present in the graph
	if (v < N)
		cout << v << " ";
}

// Perform BFS on graph starting from vertex source
void BFS(Graph const& graph, int source, int dest, int N)
{
	vector<bool> discovered(3*N, false);
	discovered[source] = true;
	vector<int> predecessor(3*N, -1);
	queue<int> q;
	q.push(source);

	while (!q.empty())
	{
		int curr = q.front();
		q.pop();
		if (curr == dest)
		{
			int cost = -1;
			cout << "Least cost path between " << source << " and " <<
				dest << " is "; printPath(predecessor, dest, cost, N);
			cout << "having cost " << cost;
		}
		for (int v : graph.adjList[curr])
		{
			if (!discovered[v])
			{
				// mark it discovered and push it into queue
				discovered[v] = true;
				q.push(v);
				predecessor[v] = curr;
			}
		}
	}
}
