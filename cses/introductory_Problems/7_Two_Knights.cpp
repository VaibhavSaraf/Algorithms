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
ll solve(ll n)
{
    return (n - 1) * (n + 4) * (n * n - 3 * n + 4) / 2;
}
int main()
{
    fast;
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << solve(i) << "\n";
    }

    return 0;
}