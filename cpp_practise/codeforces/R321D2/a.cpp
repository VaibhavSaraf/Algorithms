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

int main()
{
    // OJ;
    fast;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    ll count = 0;
    ll ans = INT_MIN;
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
            count++;
        }
        else
        {
            ans = max(ans, count);
            count = 0;
        }
    }
    ans = max(ans, count);
    cout << ans + 1;

    return 0;
}