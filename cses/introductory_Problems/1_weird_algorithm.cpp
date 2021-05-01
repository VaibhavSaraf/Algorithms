#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve()
{
    long long int n;
    cin>>n;
    
    cout<<n<<" ";
    while (n!=1)
    {
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }
        else {
            n = 3*n + 1;
            cout<<n<<" ";
        }
    }
}
int main()
{
    // OJ;
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}