#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector <ll> v;

void make(ll x)
{
    if(x>10000000000)
        return;

    if(x!=0)
        v.push_back(x);

    make(x*10 + 4);
    make(x*10 + 7);   
}
int main()
{
    ll ans = 0, num = 0;;
    make(num);
    ll n; cin>>n;
    for(auto i : v)
    {
        for(auto j : v)
        {
            if(i<=n && j<=n && i<=j)
            {
                if( __gcd(i,j) == 1)
                {
                    ans++;
                }
            }
        }
    }
    // for(auto xx : v)
    // {
    //     cout<<xx<<" ";
    // }
    // for(int i = 0;i<v.size();i++)
    //     cout<<v[i]<<" ";

    cout<<ans<<"\n";
    return 0;
}