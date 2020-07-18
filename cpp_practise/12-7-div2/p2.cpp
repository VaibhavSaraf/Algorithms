#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int prevVal = INT_MIN;
        enum
        {
            Ascending,
            Descending
        } direction = Ascending;
        int ans=-1;
        for (int i = 0; i < n; i++)
        {
            int curVal = arr[i];
            if (prevVal < curVal)
            {
                direction = Ascending;
            }
            else if (prevVal > curVal)
            {
                if (direction != Descending)
                {
                    // cout << "peak at index " << i - 1 << ": " << prevVal << endl;
                    ans = i-1;
                    direction = Descending;
                    if(ans==0 || ans == n-1)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                    
                }
            }

            prevVal = curVal;
        }
        if(ans==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<ans<<" "<<ans+1<<" "<<ans+2<<endl;
        }
    }
    return 0;
}