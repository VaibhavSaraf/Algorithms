#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int V, E;
vector<vector<int>> adj;
vector<bool> visited;
int maxD, maxNode;
void dfs(int node, int height)
{
    visited[node] = true;
    if (height > maxD)
        maxD = height, maxNode = node;

    for (auto child : adj[node])
    {
        if (!visited[child])
            dfs(child, height + 1);
    }
}

int main()
{
    // OJ;
    cin >> V;
    adj.resize(V + 1);
    visited.resize(V + 1, 0);
    int u, v;
    for (int i = 0; i < V - 1; i++)
    {
        cin >> u >>  v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    maxD = -1;
    dfs(1, 0);
    // cout << maxD << "\n";
    for (int i = 0; i < V + 1; i++)
        visited[i] = 0;
    // cout << maxNode << " ";
    maxD = -1;
    dfs(maxNode, 0);
    cout << maxD << "\n";

    return 0;
}