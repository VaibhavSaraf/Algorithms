#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

vector<vector<int>> adj;
int V; // vertices
int E; // Edges
vector<bool> visited;

void dfs(int v)
{
    cout << v << " ";
    visited[v] = true;
    for (int u : adj[v])
    {
        if (!visited[u])
        {
            dfs(u);
        }
    }
}

void printGraph(vector<vector<int>> adj)
{
    for (int i = 0; i < adj.size(); i++)
    {
        cout << i << ": ";
        for (auto x : adj[i])
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}

int main()
{
    OJ;
    cin >> V >> E; // no of vertices and edges
    visited.resize(V);
    adj.resize(V + 1);
    for (int i = 0; i < E; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // printGraph(adj);
    dfs(0);
    return 0;
}
