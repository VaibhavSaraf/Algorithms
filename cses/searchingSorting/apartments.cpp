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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> app(n);
    vector<ll> apr(m);
    for (ll i = 0; i < n; i++)
        cin >> app[i];
    for (ll j = 0; j < m; j++)
        cin >> apr[j];

    // map<int, int> mp;
    // for (int i = 0; i < m; i++)
    //     mp[b[i]]++;

    ll cnt = 0;
    ll papp = 0, papr = 0;
    sort(app.begin(), app.end());
    sort(apr.begin(), apr.end());
    while (papr < m && papp < n)
    {
        if (apr[papr] <= app[papp] + k && apr[papr] >= app[papp] - k)
        {
            cnt++;
            papr++;
            papp++;
        }
        else if (apr[papr] < app[papp] - k)
        {
            papr++;
        }
        else
        {
            papp++;
        }
    }
    cout << cnt << "\n";
    return 0;
}