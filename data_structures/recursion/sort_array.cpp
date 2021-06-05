#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

void insert(vector<int> &arr, int temp)
{
    if (arr.size() == 0 || arr[arr.size() - 1] <= temp)
    {
        arr.push_back(temp);
        return;
    }
    int val = arr[arr.size() - 1];
    arr.pop_back();
    insert(arr, temp);
    arr.push_back(val);
}
void sort(vector<int> &arr)
{
    if (arr.size() == 0)
        return;
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sort(arr);
    insert(arr, temp);
}

int main()
{
    OJ;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;
    sort(arr);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}