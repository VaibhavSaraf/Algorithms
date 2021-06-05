#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
vector<string> letterCasePermutation(string S)
{
    vector<string> ans;
    backtrack(S, 0, ans);
    return ans;
}

void backtrack(string S, int i, vector<string> &ans)
{
    if (i == S.size())
    {
        ans.push_back(S);
        return;
    }
    if (isalpha(S[i]))
    {
        S[i] = isupper(S[i]) ? tolower(S[i]) : toupper(S[i]);
        backtrack(S, i + 1, ans);
        S[i] = isupper(S[i]) ? tolower(S[i]) : toupper(S[i]);
    }
    backtrack(S, i + 1, ans);
}
int main()
{
    OJ;
    string s;
    cin >> s;
    vector<string> re = letterCasePermutation(s);
    for (auto x : re)
        cout << x << "\n";
    return 0;
}