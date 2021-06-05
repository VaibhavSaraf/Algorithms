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
void solve()
{
    int i, j, n, m;
}
int main()
{
    OJ;
    int n = 4;
    int cnt = 0;
    int mask = 1;
    while (n > mask)
    {
        if (n & mask)
            cnt++;
        mask = mask >> 1;
    }
    cout << cnt << "\n";

    return 0;
}