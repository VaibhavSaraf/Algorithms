/*
We are given a row-wise sorted matrix of size r*c, we need to find the median of the matrix given. It is assumed that r*c is always odd.
Examples: 

Input : 1 3 5
        2 6 9
        3 6 9
Output : Median is 5
If we put all the values in a sorted 
array A[] = 1 2 3 3 5 6 6 9 9)

Input: 1 3 4
       2 5 6
       7 8 9
Output: Median is 5
*/

#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main()
{
    OJ;
    int r, c;
    cin >> r >> c;
    cout << r << c << "\n";
    vector<vector<int>> arr(r, vector<int>(c));

    for (auto &i : arr)
    {
        for (auto &j : i)
        {
            cin >> j;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    //------------------------------------------------------

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for (int i = 0; i < r; i++)
    {
        mini = min(mini, arr[i][0]);
        maxi = max(maxi, arr[i][c - 1]);
    }
    cout << mini << " " << maxi << " ";

    int mid;
    int desired = (r * c + 1) / 2;
    int cnt = 0;
    while (mini < maxi)
    {
        mid = mini + (maxi - mini) / 2;
        cnt = 0;
        for (int i = 0; i < r; i++)
        {
            cnt += upper_bound(arr[i].begin(), arr[i].end(), mid) - arr[i].begin();
        }
        if (cnt < desired)
        {
            mini = mid + 1;
        }
        else
        {
            maxi = mid;
        }
    }
    // return mini;
    cout << "median: " << mini << "\n";

    return 0;
}