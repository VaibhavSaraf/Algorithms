#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    

}
int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}