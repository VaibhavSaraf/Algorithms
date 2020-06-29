#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int g;
        cin>>g;
        while (g--)
        {
            int n,p,q;
            int ans = 0;
            cin>>p>>n>>q;
            if(n%2)
            {
                if(p==q)
                {
                    ans = n/2;
                }
                else
                {
                    ans = n/2 + 1;
                }
            }
            else
            {
                ans = n/2;
            }
            cout<<ans<<"\n";
        }
        
    }
    return 0;
}