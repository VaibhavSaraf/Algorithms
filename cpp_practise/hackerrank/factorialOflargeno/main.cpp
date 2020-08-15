#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define Time srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#define MAX 500
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int multiply(int x,int res[],int res_size)
{
    int carry = 0;
    for(int i=0;i<res_size;i++)
    {
        int prod = res[i]*x + carry;
        res[i] = prod % 10;
        carry = prod/10;
    }
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
void factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int res_size = 1;
    for(int x=2;x<=n;x++)
    {
        res_size = multiply(x,res,res_size);
    }
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }

}
int main()
{
    // OJ;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;cin>>n;
        factorial(n);
    }
    return 0;
}