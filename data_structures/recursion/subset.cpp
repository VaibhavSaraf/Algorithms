#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve(set<string> &ans, string s, string tmp, int i)
{
    if (i == s.length())
    {
        ans.insert(tmp);
        return;
    }
    solve(ans, s, tmp, i + 1);
    solve(ans, s, tmp + s[i], i + 1);
}
int main()
{
    OJ;
    string s;
    cin >> s;
    set<string> ans;
    solve(ans, s, "", 0);

    for (auto x : ans)
        cout << x << "\n";

    return 0;
}