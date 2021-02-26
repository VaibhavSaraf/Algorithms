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
    fast;
    // OJ;
    string s;
    cin >> s;
    int maxi = INT_MIN;
    int count = 0;
    char c = s[0];
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            count++;
        }
        else
        {
            maxi = max(maxi, count);
            count = 1;
            c = s[i];
        }
    }
    maxi = max(maxi, count);
    cout << maxi << "\n";
    return 0;
}