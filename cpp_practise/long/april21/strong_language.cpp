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

int main()
{
    // OJ;
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int count = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                count++;
                maxi = max(maxi, count);
            }
            else
            {
                count = 0;
            }
        }
        if (maxi >= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}