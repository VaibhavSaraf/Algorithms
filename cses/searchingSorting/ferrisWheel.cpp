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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());

    ll i = 0, j = v.size() - 1, cnt = 0;
    while (i <= j)
    {
        if (v[j] > k)
            j--;
        if (v[i] + v[j] <= k)
        {
            i++;
            j--;
            cnt++;
        }
        else
        {
            cnt++;
            j--;
        }
    }
    // for (auto x : v)
    //     cout << x << " ";
    // cout << endl;
    cout << cnt << "\n";
    return 0;
}