#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        long long n;
        cin>>n;
        
        long long arr[n][3];
        long long p;
        long long ans = -1;
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
            if((arr[i][1]/(arr[i][0]+1))*arr[i][2]>ans)
            {
                p=i;
                ans=(arr[i][1]/(arr[i][0]+1))*arr[i][2];
            }
        }
        cout<<ans<<endl;
    }
    
}