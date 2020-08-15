#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <vector>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ld long double
#define mod ((int)1e9 + 7)
#define pb push_back
#define ins insert
#define F first
#define S second
#define ins insert
#define pii pair<int, int>
#define lb lower_bound
#define ub upper_bound
#define usefile                       \
    freopen("input.txt", "r", stdin); \
    freopen("ou(tp)ut.txt", "w", stdout);
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
int exp(int x, int y, int p)
{
    int res = 1;
    while (y)
    {
        if (y % 2)
            res = (res * x % p) % p;
        x = (x * x) % p;
        y /= 2;
    }
    return res;
}
int expo(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y % 2)
            res = (res * x % mod) % mod;
        x = (x * x) % mod;
        y /= 2;
    }
    return res;
}
ll add(ll a, ll b) { return (a % mod + b % mod + mod) % mod; }
int sub(int a, int b) { return (a % mod - b % mod + mod) % mod; }
ll mul(ll a, ll b) { return ((a % mod) * (b % mod) + mod) % mod; }
int inv(int x) { return expo(x, mod - 2); }
#define time__(d)                                               \
    for (long blockTime = 0;                                    \
         (blockTime == 0 ? (blockTime = clock()) != 0 : false); \
         debug("%s time : %.4fs", d,                            \
               (double)(clock() - blockTime) / CLOCKS_PER_SEC))
int sv[2000006] = {0};
// int fact[1000006]={0};
// void facto() {fact[0]=1;fact[1]=1;for(int
// i=2;i<1000006;i++)fact[i]=(fact[i-1]*i)%mod;}
// # define maxx 100005
// void sve() {sv[0]=1;sv[1]=1;for(int i=2;i*i<maxx;i++){if(!sv[i]){for(int
// j=i*i;j<maxx;j+=i)sv[j]=1;}}}//0
// int ncr(int n,int r) {int res=1; res=fact[n];
// res=(res*(expo(fact[r],mod-2)))%mod; res=(res*(expo(fact[n-r],mod-2)))%mod;
// return res;} int npr(int n,int r) {int res=1; res=fact[n];
// res=(res*(expo(fact[n-r],mod-2)))%mod; return res;} using namespace
// __gnu_pbds; #define p_set tree< pair<int,int> ,  null_type ,
// less<pair<int,int>> ,  rb_tree_tag ,  tree_order_statistics_node_update>
// #define i_set tree< int ,  null_type ,  less< int > ,  rb_tree_tag ,
// tree_order_statistics_node_update>
using namespace std;
// #define N 1000006
#define inf 100000000000
ll a, b, c, d;
bool check()
{
    ll o = 0;
    if (a % 2)
        o++;
    if (b % 2)
        o++;
    if (c % 2)
        o++;
    if (d % 2)
        o++;
    if (o <= 1)
        return true;
    else
        return false;
}

int main()
{
    test
    {

        cin >> a >> b >> c >> d;


        if (check())
            cout << "Yes\n";
        else
        {
            if (a > 0 && b > 0 && c > 0)
            {
                a--;
                b--;
                c--;
                d += 3;
            }

            if (check())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}