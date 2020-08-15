#include <bits/stdc++.h>
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int sx, sy;
    cin >> sx >> sy;
    int a[n][m];
    bool b[n][m];
    memset(b, false, sizeof(b));
    int c = 0;
    // cout<<"dsf"<<"\n";
    int i = sx, j = sy;
    for (int k = 0; k < m * n; k++)
    {
        if (i > 0 && i <= n && j > 0 && j <= m && !b[i][j])
        {
            for (; i > 0; i--)
            {
                cout << i << " " << j << "\n";
                b[i - 1][j - 1] = true;
            }
        }
        if (i > 0 && i <= n && j > 0 && j <= m && !b[i][j])
        {
            for (; j > 0; j--)
            {
                cout << i << " " << j << "\n";
                b[i - 1][j - 1] = true;
            }
        }
        if (i > 0 && i <= n && j > 0 && j <= m && !b[i][j])
        {
            for (; i <= n; i++)
            {
                cout << i << " " << j << "\n";
                b[i - 1][j - 1] = true;
            }
        }
        if (i > 0 && i <= n && j > 0 && j <= m && !b[i][j])
        {
            for (; j <= n; j++)
            {
                cout << i << " " << j << "\n";
                b[i - 1][j - 1] = true;
            }
        }
    }
}

int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}