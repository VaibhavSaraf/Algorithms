#include <iostream>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

void insertion_sort(int arr[], int n)
{
    int value;
    int index;
    for (int i = 1; i < n; i++)
    {
        value = arr[i];
        index = i;
        while (index > 0 && arr[index - 1] > value)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
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

    insertion_sort(arr, n);

    for (int x : arr)
        cout << x << " ";

    return 0;
}