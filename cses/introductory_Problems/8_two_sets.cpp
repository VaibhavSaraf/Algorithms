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
    vector<ll> a, b;
    if (n % 4 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 4 == 0 || i % 4 == 1)
                a.push_back(i);
            else
                b.push_back(i);
        }
        cout << "YES"
             << "\n";
        cout << a.size() << "\n";
        for (auto x : a)
            cout << x << " ";
        cout << "\n"
             << b.size() << "\n";
        for (auto x : b)
            cout << x << " ";
        cout << "\n";
    }
    else if (n % 4 == 3)
    {
        vector<ll> a, b;
        for (int i = 1; i <= n; i++)
        {
            if (i % 4 == 1 || i % 4 == 2)
                a.push_back(i);
            else
                b.push_back(i);
        }
        cout << "YES"
             << "\n";
        cout << a.size() << "\n";
        for (auto x : a)
            cout << x << " ";
        cout << "\n"
             << b.size() << "\n";
        for (auto x : b)
            cout << x << " ";
        cout << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
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