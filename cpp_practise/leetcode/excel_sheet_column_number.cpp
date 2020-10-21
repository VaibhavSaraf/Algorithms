#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int solve(string s)
{
    fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n = s.length();
    int x = 0;
    for (int i = 0; i < s.length(); i++)
        x += pow(26,i) * int(s[s.length() - 1 - i] - 'A' + 1);    
    return x;
}
int main()
{
    OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }

    return 0;
}