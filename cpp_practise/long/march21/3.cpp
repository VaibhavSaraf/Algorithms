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

void solve()
{
    ll x;
    cin >> x;
    ll s = 0, m = 1;
    while (x >= s)
    {
        s = pow(2, m);
        m++;
    }
    ll t1 = pow(2, m - 2) - 1;
    ll t2 = s - x;
    cout << t1 * (t1 + t2) << "\n";
}
int main()
{
    // OJ;
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}