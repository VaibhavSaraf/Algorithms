#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        string cw,tc,bf,ch,in,nin;
        cw = "CONTEST_WON";
        tc = "TOP_CONTRIBUTOR";
        bf = "BUG_FOUND";
        ch = "CONTEST_HOSTED";
        in = "INDIAN";
        nin = "NON_INDIAN";
        int n;
        cin>>n;
        int ans = 0;
        string y;
        cin>>y;
        while(n--)
        {
            string s;
            cin>>s;
            if(s==cw)
            {
                int x;
                cin>>x;
                ans = ans + 300;
                if(x<20)
                {
                    ans = ans + 20 - x;
                }
                else
                {
                    continue;
                }
            }
            else if(s == bf)
            {
                int z;
                cin>>z;
                ans = ans + z;
            }
            else if(s==tc)
            {
                ans = ans + 300;
            }
            else
            {
                ans = ans + 50;
            }           
        }
        if(y==in)
        {
            cout<<ans/200<<"\n";
        }
        else
        {
            cout<<ans/400<<"\n";
        }
    }
    return 0;
}