
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N], size[N];
void make(int v)
{
    parent[v] = v;
    size[v] = 1;
}
int find(int v)
{
    if (v == parent[v])
        return parent[v];
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        // union by size
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        size[a] = size[a] + size[b];
    }
}

int main()
{
    int n, m;
    cin >> n >> m; // n->nodes & m->edges
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }
    sort(edges.begin(), edges.end());
    for (int i = 0; i < n; i++)
        make(i);
    int total_cost = 0;
    for (auto &edges : edges)
    {
        int wt = edges.first;
        int u = edges.second.first;
        int v = edges.second.second;
        if (find(u) == find(v))
            continue;
        Union(u, v);
        total_cost = total_cost + wt;
        cout << u << " " << v << "\n";
    }
    cout << total_cost;

    return 0;
}
