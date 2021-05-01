#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int V, E;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> d,p; // d for depth, p for parent

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    p[s] = -1;
    while (!q.empty())
    {
        s = q.front();
        q.pop();
        cout << s << "->";
        for (int i = 0; i < adj[s].size(); i++)
        {
            if (!visited[adj[s][i]])
            {
                q.push(adj[s][i]);
                visited[adj[s][i]] = true;
                d[i] = d[s] + 1;
                p[i] = s;
            }
        }
    }
}

int main()
{
    OJ;
    cin >> V >> E;
    visited.resize(V + 1);
    d.resize(V+1);
    p.resize(V+1);

    adj.resize(V + 1);
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    return 0;
}