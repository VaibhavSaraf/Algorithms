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

ll sum(ll n)
{
    return n * (n + 1) / 2;
}
void solve()
{
    ll n;
    cin >> n;
    if ((sum(n) / 2) % 2 == 1)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        cout << "YES"
             << "\n";
            
        
    }
}
int main()
{

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}