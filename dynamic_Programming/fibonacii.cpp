#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
ll dp[100001];
// Memoization
ll fibo(ll n)
{
    if (dp[n] < 0)
    {
        if (n <= 1)
            dp[n] = n;
        else
            dp[n] = fibo(n - 1) + fibo(n - 2);
    }
    return dp[n];
}
// tabulation
ll fiboT(ll n)
{
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    OJ;
    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;
    fiboT(n);
    for (int i : dp)
    {
        cout << i << "\n";
    }
    return 0;
}