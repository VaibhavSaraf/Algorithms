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

bool compare(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    // OJ;
    fast;
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> v;

    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    ll sum = 0, maxi = 0, beg = 0, end = 0;
    while (end < n)
    {
        while (end < n && v[end].first - v[beg].first + 1 <= d)
        {
            sum += v[end].second;
            end++;
        }
        maxi = max(maxi, sum);
        sum -= v[beg].second;
        beg++;
    }
    cout << maxi;
    return 0;
}