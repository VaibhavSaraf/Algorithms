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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    bool f = 0;
    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 - v[i] < 0)
        {
            f = 1;
            break;
        }
        c += i + 1 - v[i];
    }
    if (f == 1)
    {
        cout << "Second\n";
    }
    else
    {
        if (c % 2 == 1)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
    }
}
int main()
{
    // OJ;
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}