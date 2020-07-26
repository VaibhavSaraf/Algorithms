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

void solve()
{
    string sup = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string s[n+1];
    int m = *max_element(a, a + n);
    for(int i=0;i<n;i++)
    {
        if(a[i])
        {
            s[0] = sup.substr(0,1);
            s[i+1] = sup.substr(0,a[i]+i);
        }  
    }

    for (int i = 0; i < n + 1; i++)
    {
        cout << s[i] << "\n";
    }
}

int main()
{
    OJ
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}