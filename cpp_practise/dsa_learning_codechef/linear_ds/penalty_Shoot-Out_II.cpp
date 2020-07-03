#include <iostream>
#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
using namespace std;
int main()
{
    fast int tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll c_a(0), c_b(0);
        ll r_a(n), r_b(n);
        ll ptr = 0;
        for(ll i=0;i<2*n;i++)
        {
            if(i%2 == 0)
            {
                if(s[i]=='1')
                    c_a ++;
                r_a --;
            }
            else
            {
                if(s[i] == '1')
                    c_b ++;
                r_b --;
            }
            if(c_a-c_b>r_b || c_b-c_a>r_a)
            {
                ptr = i;
                break;
            }
        }
        if(ptr==0)
        {
            cout<<n*2<<endl;
        }
        else
        {
            cout<<ptr+1<<endl;
        }
    }

    return 0;
}
