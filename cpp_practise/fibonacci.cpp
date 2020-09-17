#include<iostream>
#define ll long long 
using namespace std;

void fun(ll n)
{
    ll f = 0, g = 1;
    for(ll i=0;i<n;i++)
    {
        cout<<f<<" ";
        f = f + g; // 1 1 2 3 5 8 
        g = f - g; // 1 1 1 2 3 5
    }
}



int main()
{
    ll n;
    cin>>n;
    fun(n);
    return 0;
}