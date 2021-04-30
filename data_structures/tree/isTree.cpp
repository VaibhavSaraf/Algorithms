#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int V, E;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int node)
{
    visited[node] = true;
    for (auto child : adj[node])
    {
        if (!visited[child])
            dfs(child);
    }
}

int main()
{
    // OJ;
    cin >> V >> E;
    adj.resize(V + 1);
    visited.resize(V + 1, 0);
    int u, v;
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cc = 0;
    for (int i = 1; i <= V; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i);
            cc++;
        }
    }

    if (cc == 1 && V - 1 == E)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}