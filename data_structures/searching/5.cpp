#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int rotated(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        if (nums[low] < nums[high])
        {
            return low;
        }

        int mid = low + (high - low) / 2;
        int next = (mid + 1) % nums.size();
        int prev = (mid - 1 + nums.size()) % nums.size();
        
        if(nums[next]>=nums[mid] && nums[prev]>=nums[mid])
        {
            return mid;
        }
        else if(nums[mid]<=nums[high])
        {
            high = mid - 1;
        }
        else if (nums[mid]>=nums[low])
        {
            low = mid + 1;
        }
    }
    return -1;
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << rotated(v)  << "\n";
    }
    return 0;
}