#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

struct edge
{
    int a;
    int b;
    int w;
};

edge ar[100000];
int par[10001];

bool comp(edge x, edge y)
{
    return x.w < y.w;
}

int find(int a)
{
    if (par[a] == -1)
        return a;
    else
        return par[a] = find(par[a]);
}
void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return;
    par[a] = b;
}

int main()
{
    OJ;
    int n, m, a, b, w;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        par[i] = -1;

    for (int i = 0; i < m; i++)
    {
        cin >> ar[i].a >> ar[i].b >> ar[i].w;
    }

    sort(ar, ar + m, comp);
    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        a = find(ar[i].a);
        b = find(ar[i].b);
        if (a != b)
        {
            sum += ar[i].w;
            merge(a, b);
        }
    }
    cout << sum << "\n";
}