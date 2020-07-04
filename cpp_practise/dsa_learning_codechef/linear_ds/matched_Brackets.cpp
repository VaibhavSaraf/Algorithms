#include <iostream>
#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
using namespace std;
int main()
{
    fast int n;
    cin >> n;
    int s[n];
    int nestingDepth = 0, firstNestingDepth, lenghtMax = 0, firstLenghtMax = 0;
    stack<int> v;
    vector<int> t;
    t.push_back(0);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == 1)
        {
            v.push(1);
        }
        else
        {
            if (!v.empty())
            {
                v.pop();
            }
        }
        if (nestingDepth < v.size())
        {
            nestingDepth = v.size();
            firstNestingDepth = i + 1;
        }
        if (v.empty())
        {
            t.push_back(i + 1);
        }
    }
    for (int i = 0; i < t.size() - 1; i++)
    {

        if (lenghtMax < (t[i + 1] - t[i]))
        {
            lenghtMax = t[i + 1] - t[i];
            firstLenghtMax = t[i] + 1;
        }
    }
    if (t.size() == 1)
    {
        lenghtMax = 2;
        firstLenghtMax = 0;
    }
    // cout<<"nestingDepth: "<<nestingDepth<<"\n";
    // cout<<"firstNestingDepth: "<<firstNestingDepth<<"\n";
    // cout<<"lenghtMax: "<<lenghtMax<<"\n";
    // cout<<"firstLenghtMax: "<<firstLenghtMax<<"\n";
    cout << nestingDepth << " " << firstNestingDepth << " " << lenghtMax << " " << firstLenghtMax << "\n";
    return 0;
}