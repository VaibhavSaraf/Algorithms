#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;

void solution(string s)
{
    stack<char> t;
    t.push('$');
    bool f = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 40 || s[i] == 123 || s[i] == 91)
        {
            t.push(s[i]);
        }
        else
        {
            if(s[i]==41 && t.top()==40)
            {
                f = true;
                t.pop();
            }
            else if(s[i]==125 && t.top()==123)
            {
                f = true;
                t.pop();
            }
            else if(s[i]==93 && t.top()==91)
            {
                f = true;
                t.pop();
            }
            else
            {
                f = false;
            } 
        }
    }
    if(f && t.top()=='$' && s.length()%2==0)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        solution(s);
    }
    // cout<<"(,) : "<<int('(')<<","<<int(')')<<"\n"; // (,) = 40,41
    // cout<<"{,} : "<<int('{')<<","<<int('}')<<"\n"; // {,} = 123,125
    // cout<<"[,] : "<<int('[')<<","<<int(']')<<"\n"; // [,] = 91,93
    return 0;
}