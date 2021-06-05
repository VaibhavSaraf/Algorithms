#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve(vector<string> &ans, string s, string tmp, int i)
{
    if (i == s.length())
    {
        ans.push_back(tmp);
        return;
    }
    string t1 = tmp;
    string t2 = tmp;
    t1.push_back(char(toupper(s[i])));
    t2.push_back(s[i]);
    solve(ans, s, t2, i + 1);
    solve(ans, s, t1, i + 1);
}
int main()
{
    OJ;
    string s;
    cin >> s;
    vector<string> ans;
    solve(ans, s, "", 0);
    for (auto x : ans)
        cout << x << "\n";

    return 0;
}