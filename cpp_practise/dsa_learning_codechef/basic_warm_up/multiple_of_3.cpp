#include<iostream>
#define ll long long
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        ll n,d0,d1;
        cin>>n>>d0>>d1;
        ll s = (2*(d0+d1)) % 10 + (4*(d0+d1)) % 10 + (8*(d0+d1)) % 10 + (6*(d0+d1)) % 10;
        ll sum = d0+d1;
        n=n-2;
        if(n>0)
        {
            sum = sum + (d0 + d1)%10;
            n--;
        }
        sum = sum + (n/4) * s;
        n=n%4;
        int p = 2;
        while (n--)
        {
            sum = sum + p*(d0+d1)%10;
            p = (p*2)%10;
        }
        if(sum%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
   
    }

}