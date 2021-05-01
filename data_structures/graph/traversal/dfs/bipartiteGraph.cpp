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
int V, E;
vector<vector<int>> adj(2001);
vector<bool> visited(2001);
vector<int> color(2001);

bool dfs(int node, int c)
{
    visited[node] = true;
    color[node] = c;
    for (int child : adj[node])
    {
        if (visited[child] == false)
        {
            if (dfs(child, c ^ 1) == false)
                return false;
        }
        else if (color[node] == color[child])
            return false;
    }
    return true;
}

int main()
{
    // OJ;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        cin >> V >> E;
        for (int i = 1; i <= V; i++)
            adj[i].clear(), visited[i] = 0;
        int u, v;
        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool flag = true;

        for (int i = 1; i <= V; i++)
        {
            if (visited[i] == false)
            {
                bool res = dfs(i, 0);
                if (!res)
                {
                    flag = false;
                }
            }
        }
        cout << "Scenario #" << i + 1 << ":"
             << "\n";
        if (flag)
        {
            cout << "No suspicious bugs found!\n";
        }
        else
        {
            cout << "Suspicious bugs found!\n";
        }
    }
    return 0;
}