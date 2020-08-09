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
    int n, m;
    cin>>n>>m;
    char a[n][m];

    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>a[i][j];

    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    // }

    int c = 0;

    for(int i=0;i<n-1;i++)
    {
        if(a[i][m-1]=='R')
            c++;
    }

    for(int i=0;i<m-1;i++)
    {
        if(a[n-1][i]=='D')
            c++;
    }

    cout<<c<<endl;


}
int main()
{
    // OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        // cout<<endl;
    }
    return 0;
}