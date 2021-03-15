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
    string s;
    cin >> s;
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < s.length(); i++)
        freq[s[i] - 'A']++;
    int odd_count = 0;
    char c;
    string s1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 == 1)
        {
            c = 'A' + i;
            odd_count++;
        }
    }
    if (odd_count > 1)
        cout << "NO SOLUTION\n";
    else
    {
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < freq[i] / 2; j++)
            {
                s1 += 'A' + i;
            }
        }
    }
    string s2(s1);
    reverse(s2.begin(), s2.end());
    if (odd_count == 1)
        s1 = s1 + c + s2;
    else
        s1 = s1 + s2;
    cout << s1 << "\n";
    return 0;
}