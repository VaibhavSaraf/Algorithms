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
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return;
    }
    vector <int> v(n);
    int k = n;
    for(int i=0;i<n;i=i+2)
    {
        v[i]=k--;
    }
    int c = 1;
    for(int i=1;i<n;i=i+2)
    {
        v[i]=c++;
    }
    for(auto x : v)
        cout<<x<<" ";

}
int main()
{
    // OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}