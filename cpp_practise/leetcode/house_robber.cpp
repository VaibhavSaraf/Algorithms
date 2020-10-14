#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++) cin>>v[i];

    int dp[n+1];
    dp[0] = 0;
    dp[1] = v[0];
    for(int i=1;i<n;i++)
    {
        dp[i+1] = max(dp[i-1]+v[i],dp[i]);
    }
    cout<<dp[n]<<"\n";
}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
