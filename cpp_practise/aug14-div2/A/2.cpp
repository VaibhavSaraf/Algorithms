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
    ll n;
    cin >> n;
    vector<ll> sides(n);
    for (ll i = 0; i < n; i++)
        cin >> sides[i];
    int result = 0;

    // fix the largest triangle side
    for (int i = sides.size() - 1; i >= 0; --i)
    {
        int start = 0;
        int end = i - 1;

        // start and end index defines the currently probed sides
        while (start < end)
        {
            // if we have largest side not smaller than sum of two others we need to try choosing bigger smallest side, so do ++start.
            if (sides[start] + sides[end] <= sides[i])
            {
                cout<<start+1<<" "<<end+1<<" "<<i+1<<"\n";
                return;
            }
            else
            {
                ++start;
                --end;
            }
        }
    }
    cout<<"-1"<<"\n";
    // cout<<result<<"\n";
}
int main()
{
    fast;
    // OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}