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
    ll a, b;
    cin >> a >> b;
    if (a > b)
    {
        if (a % 2 == 0)
            cout << (a * a - b + 1);
        else
            cout << ((a - 1) * (a - 1) + b);
    }
    else
    {
        if (b % 2 == 0)
            cout << ((b - 1) * (b - 1) + a);
        else
            cout << (b * b - a + 1);
    }
}
int main()
{
    fast;
    // OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}