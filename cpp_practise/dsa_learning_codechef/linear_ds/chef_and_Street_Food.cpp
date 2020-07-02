#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n;
        cin>>n;
        
        int arr[n][3];
        int p;
        int ans = -1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
            if(arr[i][1]*arr[i][2]>ans)
            {
                p=i;
                ans=arr[i][1]*arr[i][2];
            }
        }
        if(n==1)
        {
            cout<<0<<endl;
            break;
        }
        cout<<ans/(n+1)<<endl;
    }
    
}