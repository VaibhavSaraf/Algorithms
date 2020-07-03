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
        string s;
        cin >> s;
        int count = 0;
        int lenght = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='>')
            {
                count --;
            }
            else
            {
                count ++;
            }
            if(count == 0)
            {
                lenght = max(i+1,lenght);
            }
            if(count<0)
            {
                break;
            }
        }
        cout<<lenght<<"\n";
    }

    return 0;
}
