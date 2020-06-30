#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll ans[n];
    sort(arr,arr+n);
    for(ll i=0;i<n;i++)
    {
        ans[i] = arr[i]*(n-i);
        // cout<<ans[i]<<" ";
    }
    sort(ans,ans+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    cout<<ans[n-1]<<endl;
}