#include <vector>
#include <iostream>
using namespace std;

bool dfss(int source, int destination, vector<vector<int>>& adj, vector<bool>& visited)
{
	if (source == destination)
		return true;

	visited[source] = true;

	for (int neighbor : adj[source])
	{
		if (!visited[neighbor])
		{
			if (dfss(neighbor, destination, adj, visited))
				return true;
		}
	}

	return false;
}

bool validPath(int n, vector<vector<int>>& edges, int source, int destination)
{

	vector<vector<int>> adj(n);

	for (auto& e : edges) // edge[0]
	{
		int u = e[0];
		int v = e[1];
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<bool> visited(n, false);

	//node 0 -> visited[0]=true

	return dfss(source, destination, adj, visited);

}







//	int main()
//	{
//		int n = 8;
//	
//		vector<vector<int>> edges = {
//			{0,1},
//			{0,2},
//			{3,5},
//			{5,4},
//			{4,3}
//	
//		};
//	
//		int source = 0;
//		int destination = 4;
//	
//		if (validPath(n, edges, source, destination))
//			cout << "Path exists ✅" << endl;
//		else
//			cout << "No path ❌" << endl;
//	
//		return 0;
//	
//	
//	
//	}











