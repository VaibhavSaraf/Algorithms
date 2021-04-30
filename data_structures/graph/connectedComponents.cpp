#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int E, V;
vector<vector<int>> adj;
vector<bool> visited(V + 1, 0);
vector<int> comp;

void inputGraph()
{
    cin >> V >> E;
    adj.resize(V + 1);
    int u, v;
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void dfs(int node)
{
    visited[node] = true;
    comp.push_back(node);
    for (int i = 0; i < adj[node].size(); i++)
    {
        if (!visited[adj[node][i]])
            dfs(adj[node][i]);
    }
}
int cc;
void connectedComponents()
{
    cc = 0;
    fill(visited.begin(), visited.end(), 0);

    for (int i = 1; i < V + 1; i++)
    {
        if (!visited[i])
        {
            comp.clear();
            cc++;
            dfs(i);
            cout << "component: ";
            for (auto x : comp)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    cout << "No of cc: " << cc << "\n";
}

int main()
{
    OJ;
    inputGraph();
    connectedComponents();
    return 0;
}