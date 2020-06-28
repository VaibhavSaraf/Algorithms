#include <iostream>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
int main()
{
    fast
    int tt;
    cin>>tt;
    while(tt--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int a1 = n/x;
        // cout<<a1;
        while ((n-a1*x)<y)
        {
            a1--;
        }
        cout<<(a1*x+y)<<"\n";
    }
}