#include <iostream>
#include <vector>
using namespace std;
vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[n + i]);
    }
    return ans;
}
int main()
{
    vector<int> b = {2, 5, 1, 3, 4, 7};
    vector<int> a = shuffle(b, 3);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}