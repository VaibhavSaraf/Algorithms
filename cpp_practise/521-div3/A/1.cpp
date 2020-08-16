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
    ll a,b,k;
    cin>>a>>b>>k;
    ll ans = 0;
    ans = (a - b)*(k/2);
    ans  = (k%2) ? ans + a : ans;
    
    // if(k%2)
    // {
    //     ans = a*(k/2) - b*(k/2) + a;
    // }
    // else
    // {
    //     ans = a*(k/2) - b*(k/2);
    // }
    cout<<ans<<"\n";
}
int main()
{
    // OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}