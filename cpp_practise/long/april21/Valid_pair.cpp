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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b || b == c || c == a)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}