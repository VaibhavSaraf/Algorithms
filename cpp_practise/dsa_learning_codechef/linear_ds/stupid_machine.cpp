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
        ll n;
        cin >> n;
        ll arr[n];
        ll ans[n];
        
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll min = arr[0];
        ll count = min;
        for(ll i=1;i<n;i++)
        {
            if(arr[i]>min)
            {
                count = count + min;
            }
            else
            {
                min = arr[i];
                count = count + min;
            }
            
        }
        cout<<count<<endl;
    }

    return 0;
}
