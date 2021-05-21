#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

void merge(int arr[], int start, int mid, int end)
{
    int left[mid - start + 1];
    int right[end - mid];

    for (int i = 0; i < mid - start + 1; i++)
    {
        left[i] = arr[start + i];
    }
    for (int i = 0; i < end - mid; i++)
    {
        right[i] = arr[i + mid + 1];
    }

    int l = 0;
    int r = 0;
    int index = start;

    while (l < mid - start + 1 && r < end - mid)
    {
        if (left[l] <= right[r])
        {
            arr[index] = left[l];
            l++;
            index++;
        }
        else
        {
            arr[index] = right[r];
            r++;
            index++;
        }
    }
    while (l < mid - start + 1)
    {
        arr[index] = left[l];
        index++;
        l++;
    }
    while (r < end - mid)
    {
        arr[index] = right[r];
        index++;
        r++;
    }
}
void mergesort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
int main()
{
    OJ;
    int n;
    cin >> n;
    int arr[n];
    for (int &x : arr)
        cin >> x;
    mergesort(arr, 0, n - 1);
    for (int &x : arr)
        cout << x << " ";
    return 0;
}