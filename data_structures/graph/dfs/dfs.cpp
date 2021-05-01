#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

/*
    0. Depth-first search (DFS) is an algorithm (or technique) for traversing a tree/graph.
    2. DFS uses stack OR we can use recursive approach.

    APPLICATIONS OF DFS
    0. To find minimum spanning tree and all pair shortest path tree.
    1. Detecting cycle in a graph
    2. Path finding
    3. Topological sorting
    4. To test graph is bipartite
    5. Find strongly connected component of a graph
    6. Maze related problems (find the shortest path)
*/

vector<vector<int>> adj;
int V; // vertices
int E; // Edges
vector<bool> visited;

void dfs(int v)
{
    cout << "->" << v;
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

void dfs_iterative(vector<vector<int>> &adj, int s)
{
    stack<int> stk;
    stk.push(s);
    visited[s] = true;
    while (!stk.empty())
    {
        int node = stk.top();
        stk.pop();
        cout << node << "->";
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (!visited[adj[node][i]])
            {
                stk.push(adj[node][i]);
                visited[adj[node][i]] = true;
            }
        }
    }
}

int main()
{
    OJ;
    cin >> V >> E; // no of vertices and edges
    visited.resize(V + 1);
    adj.resize(V + 1);
    for (int i = 0; i < E; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // printGraph(adj);
    // cout << "dfs: ";
    dfs(1);
    cout << endl;
    fill(visited.begin(), visited.end(), false);
    dfs_iterative(adj, 1);
    return 0;
}
