/**
 * Leetcode 53
    Given an integer array nums, find the contiguous subarray
    (containing at least one number) which has the largest sum and return its sum.

    Example:

    Input: [-2,1,-3,4,-1,2,1,-5,4],
    Output: 6
    Explanation: [4,-1,2,1] has the largest sum = 6.

*/



#include <iostream>
#include <vector>
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;
int main()
{
    OJ
    int n;
    cin>>n;
    vector <int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int maxi = v[0];
    int gmax = v[0];
    for(int i=1;i<n;i++)
    {
        maxi = max(v[i],maxi+v[i]);
        gmax = max(gmax,maxi);
    }
    cout<<gmax<<"\n";
    return 0;
}
