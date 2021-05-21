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
void solve()
{
    ll i, j, n, m;
    cin>>n>>m;
    vector<ll> arr(n);
    vector<char> dir(n);
    for(auto &x : arr) cin>>x;
    for(auto &x : dir) cin>>x;
    set<ll> l,r;
    for(i=0;i<n;i++)
    {
        if(dir[i]=='L')
            l.insert(arr[i]);
        else
            r.insert(arr[i]);
    }

    for(i=0;i<m;i++)
    {
        
    }





}
int main()
{
    fast;
    OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}