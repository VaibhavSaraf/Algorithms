#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int V, E;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> dist;

void dfs(int node, int height)
{
    visited[node] = true;
    dist[node] = height;
    for (auto child : adj[node])
    {
        if (!visited[child])
        {
            dfs(child, dist[node] + 1);
        }
    }
}
int main()
{
    OJ;
    cin >> V >> E;
    adj.resize(V + 1);
    dist.resize(V + 1);
    visited.resize(V + 1);
    fill(visited.begin(), visited.end(), 0);
    fill(dist.begin(), dist.end(), 0);
    int u, v;
    for (int i = 0; i <= V; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);
    for (auto it : dist)
        cout << it << " ";
    return 0;
}