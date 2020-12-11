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
    ll a,b;
    cin>>a>>b;
    ll o1,e1;
    ll o2,e2;
    if(a%2)
    {
        o1 = a/2 + 1;
        e1 = a/2;
    }
    else
    {
        e1 = o1 = a/2;
    }
    if(b%2)
    {
        o2 = b/2 + 1;
        e2 = b/2;
    }
    else
    {
        e2 = o2 = b/2;
    }
    ll ans = e1*e2+o1*o2;
    cout<<ans<<"\n";
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