#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

ll fun(ll q)
{
    if(q<=9)
        return q;
}


int main()
{

    ll t,q;
    cin>>t;
    while (t--)
    {
        cin>>q;
        cout<<fun(q)<<"\n";
    }
    
    
    return 0;
}