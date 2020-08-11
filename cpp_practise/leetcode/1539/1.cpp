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
    int n, k;
    cin>>n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin>>v[i];
    cin>>k;
    bool arr[1001];
    memset(arr,false,sizeof(arr));

    for(int i=0;i<n;i++)
    {
        arr[v[i]] = true;
    }
    int i;
    for(i=1;i<1001;i++)
    {
        if(arr[i]==false)
        {
            deb(i);
            k--;
        }
        if(k==0)
            break;
    }
    cout<<i<<endl;
}
int main()
{
    OJ;fast;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}