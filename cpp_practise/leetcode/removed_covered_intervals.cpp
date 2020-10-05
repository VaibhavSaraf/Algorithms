#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int solve()
{
    int n;
    cin>>n;
    int a, b;
    vector<vector<int>> intervals(n,vector<int>(2));
    for(int i=0;i<n;i++)
    {
        cin>>intervals[i][0];
        cin>>intervals[i][1];
    }
    sort(intervals.begin(),intervals.end(),[](const vector<int>& a,const vector<int>& b){
        if(a[0]<b[0])
            return true;
        if(a[0]==b[0])
            return a[1]>b[1];
    });

    int count = 0;
    int end,prev_end=0;
    for(auto x : intervals)
    {
        end = x[1];
        if(prev_end<end)
        {
            count++;
            prev_end = end;
        }
    }
    return count;
    
}
int main()
{
    OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}