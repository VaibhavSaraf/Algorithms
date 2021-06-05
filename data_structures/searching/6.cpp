#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int findCount(vector<int> &arr, int x)
{
    int l = 0;
    int h = arr.size();
    int res1 = -1, res2 = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == x)
        {
            res1 = mid;
            h = mid - 1;
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    l = 0;
    h = arr.size();
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == x)
        {
            res2 = mid;
            l = mid + 1;
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    // cout<<res2<<" " << res1<<" ";
    if (res1 == -1 && res2 == -1)
        return 0;
    return res2 - res1 + 1;
}

int main()
{
    OJ;
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findCount(arr, k) << "\n";

    return 0;
}
