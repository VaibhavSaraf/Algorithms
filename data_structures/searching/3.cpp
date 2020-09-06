/**
 * lower bound and upper bound in sorted array
*/

#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int lower_bound(vector<int> &nums,int k)
{
    int low = 0;
    int high = nums.size();
    int result = -1;
    while (low<=high)
    {
        int mid = low + (high-low)/2;
        if(nums[mid] == k)
        {
            result = mid;
            high = mid - 1;
        }
        else if(nums[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}
int upper_bound(vector<int> &nums,int k)
{
    int low = 0;
    int high = nums.size();
    int result = -1;
    while (low<=high)
    {
        int mid = low + (high-low)/2;
        if(nums[mid] == k)
        {
            result = mid;
            low = mid + 1;
        }
        else if(nums[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
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
        cout << lower_bound(v, k)<<"\n";
        cout << upper_bound(v, k)<<"\n";
    }
    return 0;
}