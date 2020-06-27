#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n;
        cin>>n;
        int arr [n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int c = 1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<arr[i+1])
            {
                arr[i+1]=arr[i];
            }
            else
            {
                c++;
            } 
        }
        cout<<c<<"\n";
    }
    
    
    
    
    return 0;
}