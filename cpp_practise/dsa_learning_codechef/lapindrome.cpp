#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        string s;
        cin>>s;
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<(s.length()/2);i++)
        {
            arr[s[i]-'a']++;
        }
        int l;
        if(s.length()%2)
        {
            l = (s.length()/2)+1;
        }
        else
        {
            l = (s.length())/2;
        }
        // cout<<"l "<<l<<endl;
        for(int i=l;i<s.length();i++)
        {
            arr[s[i]-'a']--;
        }
        bool flag=true;
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)
                flag = false;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

    }





    return 0;
}