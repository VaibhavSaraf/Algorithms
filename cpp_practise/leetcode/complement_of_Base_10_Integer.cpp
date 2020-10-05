#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int solve()
{
    int n;
    cin>>n;
    int result = 0;
    int power = 1;
    while(n>0)
    {
        result = result + (n%2 ^ 1) * power;
        power = power<<1;
        n = n>>1;
    }
    return result;
}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}