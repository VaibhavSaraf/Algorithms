#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve(int open, int close, string tmp, vector<string> &ans)
{
    if (open == 0 && close == 0)
    {
        ans.push_back(tmp);
        return;
    }
    if (open != 0)
    {
        string t1 = tmp;
        t1.push_back('(');
        solve(open - 1, close, t1, ans);
        t1.pop_back();
    }
    if (open < close)
    {
        string t2 = tmp;
        t2.push_back(')');
        solve(open, close - 1, t2, ans);
        t2.pop_back();
    }
}
int main()
{
    OJ;
    int n;
    cin >> n;
    vector<string> ans;
    int open = n;
    int close = n;
    solve(open, close, "", ans);
    for (auto x : ans)
        cout << x << "\n";
    return 0;
}