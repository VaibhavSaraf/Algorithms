// find count of an element in sorted list

#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int count(vector<int> &nums, int k)
{
    int low = 0;
    int high = nums.size();
    int first = -1;
    int last = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == k)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    low = 0;
    high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == k)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return last - first;
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
        if(count(v,k))
        {
            cout << count(v, k) + 1 << "\n";
        }
        else
        {
            cout << count(v, k)<< "\n";
        }
        
        
    }
    return 0;
}