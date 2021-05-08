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

int main()
{
    // OJ;
    int n;
    cin >> n;
    set<int> ss;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ss.insert(x);
    }
    cout << ss.size() << "\n";
    return 0;
}