// C++ code to implement the approach
#include <bits/stdc++.h>
using namespace std;

void depth(vector<int> adj[], int src,
		bool visited[], int& cnt)
{
	visited[src] = true;
	cnt++;
	for (auto it : adj[src]) {
		if (!visited[it]) {
			depth(adj, it, visited, cnt);
		}
	}
}

int maxPairs(int N,
			vector<vector<int> >& edges)
{
	vector<int> adj[N];

	for (int i = 0; i < edges.size(); i++) {
		adj[edges[i][0]].push_back(
			edges[i][1]);
		adj[edges[i][1]].push_back(
			edges[i][0]);
	}
	int total = N * (N - 1) / 2;

	bool visited[N + 1] = { false };

	for (int i = 0; i < N; i++) {
		if (visited[i] == false) {
			int cnt = 0;

			depth(adj, i, visited, cnt);

			total -= (cnt * (cnt - 1) / 2);
		}
	}
	return total;
}

// Driver code
int main()
{
	int N = 7;
	vector<vector<int> > edges = {{0,2},{0,5},{2,4},{1,6},{5,4}};

	int result = maxPairs(N, edges);
	cout << result;
	return 0;
}
