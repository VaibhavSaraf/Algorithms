#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define Time srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

double round(double var)
{
    double value = int(var * 100 + 0.5);
    return (double)value / 100;
}

int main()
{
    // OJ;
    fast;
    int tt;
    cin >> tt;
    double k1, k2, k3, v, ans;
    while (tt--)
    {
        cin >> k1 >> k2 >> k3 >> v;
        ans = 100 / (k1 * k2 * k3 * v);
        if (round(ans) >= 9.58)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}