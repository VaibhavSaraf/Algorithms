#include <bits/stdc++.h>
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;
vector<int> ar[100001];
int vis[100001], subSize[100001];

int dfs(int node)
{
    vis[node] = 1;
    int curr = 1;

    for (int child : ar[node])
        if (vis[child] == 0)
        {
            curr += dfs(child);
        }

    return subSize[node] = curr;
}

int main()
{
    OJ;
    int n, a, b; // n = number of nodes

    cin >> n;
    for (int i = 1; i < n; i++) //for tree edges = n-1
        cin >> a >> b, ar[a].push_back(b), ar[b].push_back(a);

    //call dfs(1) when 1 is root , if another node is root than pass that node
    dfs(1);

    for (int i = 1; i <= n; i++)
        cout << "sub tree size of node " << i << " is " << subSize[i] << endl;
    return 0;
}