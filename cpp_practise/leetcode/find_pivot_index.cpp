#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);



int solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int summ = accumulate(v.begin(),v.end(),0);

    int last_sum = 0;

    for(int i=0;i<v.size();i++)
    {
        if(last_sum == summ - v[i] - last_sum)
            return i;
        last_sum += v[i];
    }
    return -1;
}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
    return 0;
}