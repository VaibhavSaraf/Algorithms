#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        // int cr,cl,ptr;
        // cr=cl=ptr=0;
        int ptr = 0;
        char x[n];
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                x[ptr] = s[i];
                ptr++;
            }
            else
            {
                if(s[i]==')' && ptr==0)
                {
                    ans++;
                }
                else
                {
                    ptr--;
                }
                
            }
        }
        cout<<ans<<"\n";
    }
    
    
    
    return 0;
}