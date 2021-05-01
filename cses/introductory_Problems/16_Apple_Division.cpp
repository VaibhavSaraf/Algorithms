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
    vector<ll> arr(n);
    for (auto &v : arr)
        cin >> v;
    ll sum = 0;
    ll ans = INT_MAX;
    for (auto &v : arr)
        sum += v;
    for (ll i = 0; i < (1 << n); i++)
    {
        ll c = 0;
        for (ll j = 0; j < n; j++)
        {
            if (i & (1 << j))
                c += arr[j];
        }
        ll diff = abs(sum - 2 * c);
        ans = min(ans, diff);
    }
    cout << ans;
}
int main()
{
    // OJ;
    // int n;
    // cin >> n;
    // vector<ll> v(n);
    // for (int i = 0; i < n; i++)
    //     cin >> v[i];
    // ll sum = accumulate(v.begin(), v.end(), 0);
    // ll ans = INT_MAX;
    // for (ll i = 0; i < (1 << n); i++)
    // {
    //     ll c = 0;
    //     for (ll j = 0; j < n; j++)
    //         if (i & (1 << j))
    //             c += v[j];
    //     ll diff = abs(sum - 2 * c);
    //     ans = min(ans, diff);
    // }
    // cout << ans << "\n";
    solve();
    return 0;
}