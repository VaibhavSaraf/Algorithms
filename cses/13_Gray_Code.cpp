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
    // OJ
    fast;
    ll n;
    cin >> n;
    vector<string> ans;
    ans.push_back("0");
    ans.push_back("1");

    for (int i = 2; i < (1 << n); i = i << 1)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            ans.push_back(ans[j]);
        }
        for (int j = 0; j < i; j++)
            ans[j] = "0" + ans[j];
        for (int j = i; j < 2 * i; j++)
            ans[j] = "1" + ans[j];
    }
    for (auto x : ans)
        cout << x << "\n";
    return 0;
}