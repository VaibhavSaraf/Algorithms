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
bool solve()
{
    ll a, b;
    cin >> a >> b;
    if ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a && (2 * b - a) / 3 + (2 * a - b) / 3 == (a + b) / 3)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    // OJ;
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        if (solve())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}