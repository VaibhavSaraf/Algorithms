#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    stack<int> st;

    for(int i=0;i<arr.size()-1;i++)
    {
        if(st.empty())
        {
            st.push(arr[i]);
        }
        

    }





}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}