#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
ll c = 0;
void solve(int source, int destination, int helper, int n)
{
    c++;
    if (n == 1)
    {
        cout << "moving " << n << " from " << source << " to " << destination << "\n";
        return;
    }
    solve(source, helper, destination, n - 1);
    cout << "moving " << n << " from " << source << " to " << destination << "\n";
    solve(helper, destination, source, n - 1);
}
int main()
{
    int n;
    cin >> n;
    int source = 1, destination = 3, helper = 2;
    solve(source, destination, helper, n);
    cout << "count: " << c << "\n";
    return 0;
}