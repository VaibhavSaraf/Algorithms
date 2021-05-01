#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solution()
{
    int n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION"
             << "\n";
        return;
    }
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
}

int main()
{
    // OJ;
    fast;
    solution();
    return 0;
}