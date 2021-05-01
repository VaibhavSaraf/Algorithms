// https://www.spoj.com/problems/TOPOSORT/
#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

vector<int> adj[100001];
int in[100001];
vector<int> result;

bool kahn(int n)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
            pq.push(i);
    }
    while (!pq.empty())
    {
        int curr = pq.top();
        result.push_back(curr);
        pq.pop();
        for (int node : adj[curr])
        {
            in[node]--;
            if (in[node] == 0)
                pq.push(node);
        }
    }
    return result.size() == n;
}

int main()
{
    // OJ;
    int V, E, x, y;
    cin >> V >> E;
    for (int i = 1; i <= E; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        in[y]++;
    }
    if (kahn(V))
    {
        for (auto it : result)
            cout << it << " ";
    }
    else
        cout << "Sandro fails.";

    return 0;
}