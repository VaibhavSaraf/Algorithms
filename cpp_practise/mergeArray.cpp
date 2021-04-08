/* 
there are two sorted array let's say A and B, 
and we need to merge both the arrays in one sorted array.
and if there exists some zero's in any array 
then u need to discard all the zero's in the output array.
A=[1,2,3,0,0,0] 
B=[2,5,6]

how will you do this problem using vector's functions?
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

bool comp(int i)
{
    return i == 0;
}

int main()
{
    OJ;
    int n1, n2; // size of array
    cin >> n1 >> n2;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    // for (auto x : v1)
    //     cout << x << " ";

    vector<int> ans(n1 + n2);

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), ans.begin());

    auto it = remove_if(ans.begin(), ans.end(), comp);
    ans.resize(it - ans.begin());

    for (auto x : ans)
        cout << x << " ";

    return 0;
}
