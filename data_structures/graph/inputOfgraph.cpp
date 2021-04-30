#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

/*
 * Types
 * 1. Undirected Graph
 * 2. Undirected Weighted Graph
 * 3. Directed Graph
 * 4. Directed Weighted Graph
 * 5. Tree 
*/

// Undirected graph Input

void undirectedGraph()
{
    int u, v, N, E;
    cin >> N >> E;           // vertices and edges
    vector<vector<int>> adj; // adjacency list
    adj.resize(N + 1);
    while (E--)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void undirectedWeightedGraph()
{
    int u, v, N, E, w;       // w for weight
    cin >> N >> E;           // vertices and edges
    vector<vector<pair<int,int>>> adj; // adjacency list
    adj.resize(N + 1);
    while (E--)
    {
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
}



int main()
{
    cout << "hello world\n";
    return 0;
}