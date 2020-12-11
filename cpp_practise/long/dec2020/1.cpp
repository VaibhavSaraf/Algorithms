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
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int ans = 0;
    int count = 0;
    while(p>ans)
    {
        count++;
        if(d1<=count)
        {
            ans+=v1;
        }
        if(d2<=count)
        {
            ans+=v2;
        }
    }
    // deb(ans);
    cout<<count<<"\n";
}
int main()
{
    OJ;
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}