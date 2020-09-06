#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int Bsearch(vector<int> &nums, int k)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid;
    while (low <= high)
    {
        // mid = (high + low) / 2; // here (low + high) may overflow
        mid = low + (high-low)/2;
        if (nums[mid] == k)
        {
            return mid;
        }
        else if (nums[mid] > k)
        {
            high = mid - 1;
        }
        else if (nums[mid] < k)
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
        int k;
        cin >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << Bsearch(v, k);
    }
    return 0;
}