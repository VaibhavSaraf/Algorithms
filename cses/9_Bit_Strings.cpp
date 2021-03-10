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
#define MOD 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll x = 1;
    for (int i = 1; i <= n; i++)
    {
        x = (x * 2) % MOD;
    }
    cout << x << "\n";
}
int main()
{
    fast;
    // OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}