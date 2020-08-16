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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int c = 0;
    for (int i = 1; i < n-1; i++)
    {
        if(v[i-1]==1 && v[i]==0 && v[i+1]==1)
        {
            c++;
            v[i+1]=0;
        }
    }
    cout << c << "\n";
}
int main()
{
    // OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}