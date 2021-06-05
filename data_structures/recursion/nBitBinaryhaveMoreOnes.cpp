#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve(int c0, int c1, string tmp, vector<string> &ans, int n)
{
    if (c1 >= c0 && c0 + c1 == n)
    {
        ans.push_back(tmp);
        return;
    }

    tmp.push_back('1');
    solve(c0, c1 + 1, tmp, ans, n);
    tmp.pop_back();
    if (c1 > c0)
    {
        tmp.push_back('0');
        solve(c0 + 1, c1, tmp, ans, n);
        tmp.pop_back();
    }
}
int main()
{
    OJ;
    int n;
    cin >> n;
    int c1 = 0;
    int c0 = 0;
    vector<string> ans;
    solve(c0, c1, "", ans, n);
    for (auto x : ans)
        cout << x << "\n";
    return 0;
}