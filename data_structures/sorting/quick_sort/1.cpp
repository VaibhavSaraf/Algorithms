#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int partitionIndex = low;

    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(arr[partitionIndex], arr[high]);
    return partitionIndex;
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(arr, low, high);
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
    }
}

int main()
{
    OJ;
    int n;
    cin >> n;
    int arr[n];
    for (int &i : arr)
        cin >> i;

    // for (int i : arr)
    //     cout << i << " ";

    quick_sort(arr, 0, n - 1);

    for (int i : arr)
        cout << i << " ";

    return 0;
}