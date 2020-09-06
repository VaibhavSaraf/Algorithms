// recursive code for binary tree

#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int Bsearch(vector<int> &nums,int k, int low, int high)
{
    int mid = low + (high-low)/2;
    if(nums[mid]==k)
    {
        return mid;
    }
    if(low>high)
    {
        return -1;   
    }
    else if(nums[mid]>k)
    {
        return Bsearch(nums,k,low,mid-1);
    }
    else if(nums[mid]<k)
    {
        return Bsearch(nums,k,mid+1,high);
    }
}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << Bsearch(v, k,0,n-1);
    }
    return 0;
}