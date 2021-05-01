// https://www.spoj.com/problems/PPATH/
#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

vector<int> adj[100001];
vector<int> primes;
int dist[100001], vis[100001];

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool isValid(int a, int b)
{
    int cnt = 0;
    while (a > 0)
    {
        if (a % 10 != b % 10)
        {
            cnt++;
        }
        a /= 10, b /= 10;
    }
    if (cnt == 1)
        return true;
    return false;
}

void buildGraph()
{
    for (int i = 1000; i <= 9999; i++)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }
    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = i + 1; j < primes.size(); j++)
        {
            int a = primes[i];
            int b = primes[j];
            if (isValid(a, b))
            {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }
    }
}

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    dist[src] = 0;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int child : adj[curr])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                dist[child] = dist[curr] + 1;
            }
        }
    }
}

int main()
{
    // OJ;
    int t, a, b;
    cin >> t;
    buildGraph();
    while (t--)
    {
        cin >> a >> b;
        for (int i = 1000; i <= 9999; i++)
            dist[i] = -1, vis[i] = 0;
        bfs(a);
        if (dist[b] == -1)
            cout << "Impossible"
                 << "\n";
        else
            cout << dist[b] << endl;
    }

    return 0;
}