#include<bits/stdc++.h>
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
        for(int i=5;n/i>=1;i=5*i)
        {
            c = c + n/i;
        }
        cout<<c<<"\n";
    }
}