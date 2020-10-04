#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve()
{
    int a = 30;
    int b = 40;
    int c = 50;

    int p1 = a^b;
    int p2 = b^c;
    int p3 = c^a;

    cout<<(p1^p2)<<"\n";
    cout<<(p2^p3)<<"\n";
    cout<<(p3^p1)<<"\n";
}
int main()
{

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}