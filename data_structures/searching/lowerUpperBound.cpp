#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int lowerBound(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int res, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            res = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return res;
}
int upperBound(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int res, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            res = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return res + 1;
}

int main()
{
    OJ;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << lowerBound(arr, n, k) << "\n";
    cout << upperBound(arr, n, k) << "\n";
    cout << -lowerBound(arr, n, k) + upperBound(arr, n, k) << "\n";
    return 0;
}