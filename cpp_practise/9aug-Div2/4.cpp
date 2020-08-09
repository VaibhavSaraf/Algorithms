#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define Time srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve()
{
    int m,n;
    cin>>m>>n;
    int matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int dp[m][n];
    memset(dp, 0, sizeof(dp));
    for (int i=1;i<m;i++)
    {
        dp[i][0] = matrix[i][0];
    }

    for (int i=0;i<n;i++)
    {
        dp[0][i] = matrix[0][i];
    }

    for (int i=1;i<m;i++)
    {
        for (int j=1;j<n;j++)
        {
            if (true)
            {
                dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}
int main()
{
    OJ;fast;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}