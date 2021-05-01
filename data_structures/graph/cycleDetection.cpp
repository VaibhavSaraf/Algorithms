#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int E, V;
vector<vector<int>> adj;
vector<bool> visited;

bool dfs(int node, int parant)
{
    visited[node] = true;
    for (int child : adj[node])
    {
        if (visited[child] == 0)
        {
            if (dfs(child, node) == true)
                return true;
        }
        else if (child != parant)
            return true;
    }
    return false;
}

int main()
{
    OJ;
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

    bool flag = false;

    for (int i = 1; i <= V; i++)
    {
        if (visited[i] == 0)
        {
            bool res = dfs(i, -1);
            if (res == true)
                flag = true;
        }
    }
    if (flag)
    {
        cout << "Cycle\n";
    }
    else
    {
        cout << "No Cycle\n";
    }

    return 0;
}