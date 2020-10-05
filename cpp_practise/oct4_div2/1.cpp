#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve()
{
    vector<ll> v(3);
    for(int i=0;i<3;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int d = sqrt(pow(v[0],2)+pow(v[2]-v[1],2)) + 1;
    
    cout<<d<<"\n";

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    // OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}