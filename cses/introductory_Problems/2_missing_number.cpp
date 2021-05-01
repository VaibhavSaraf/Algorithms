#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll int
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // OJ;
    fast;
    int n;
    cin >> n;
    int ans = n;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        ans ^= x ^ i;
    }
    cout << ans << "\n";
    return 0;
}