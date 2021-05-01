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

void solve(string s)
{
    vector<string> v;
    sort(s.begin(), s.end());
    do
    {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << v.size() << "\n";
    for (auto x : v)
        cout << x << "\n";
}
int main()
{
    // OJ;
    fast;
    string s;
    cin >> s;
    solve(s);

    return 0;
}
