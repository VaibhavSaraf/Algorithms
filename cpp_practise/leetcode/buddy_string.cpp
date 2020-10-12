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
bool buddyStrings(string A, string B)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    if (A.length() != B.length())
        return false;
    int f = -1, s = -1;
    if (A == B)
    {
        int cnt[26];
        memset(cnt, 0, sizeof(cnt));

        for (int i = 0; i < A.length(); i++)
            cnt[A[i] - 'a']++;

        for (int c : cnt)
            if (c > 1)
                return true;
        return false;
    }
    else
    {

        for (int i = 0; i < A.length(); i++)
        {
            if (A[i] != B[i])
            {
                if (f == -1)
                    f = i;
                else if (s == -1)
                    s = i;
                else
                    return false;
            }
        }
    }
    return (s != -1 && A[f] == B[s] && A[s] == B[f]);
}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << buddyStrings(a, b) << "\n";
    }
    return 0;
}