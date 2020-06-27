#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        int c = 0;
        int p = n;
        while(p!=0)
        {
            p=p/10;
            c++;
        }
        int ans = 0;
        for(int i=c-1;i>=0;i--)
        {
            ans = ans + (n%10)*pow(10,i);
            n = n/10;
        }
        cout<<ans<<endl;
    }
}