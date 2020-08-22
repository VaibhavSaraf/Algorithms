/*Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".

Constraints:
1 <= T <= 100
3 <= N <= 105
1 <= A[i] <= 106

Example:
Input:
2
4
1 5 3 2
3
3 2 7
Output:
2
-1

Explanation:
Testcase 1: There are 2 triplets: 1 + 2 = 3 and 3 +2 = 5
**/

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define Time srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll i, j, k;
    for (int i = n - 1; i >= 0; i--)
    {
        j = 0;
        k = i - 1;
        while (j < k)
        {
            if (v[i] == v[j] + v[k])
            {
                c++;
                j++;
                k--;
            }
            else if (v[i] < v[j] + v[k])
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    if (!c)
    {
        cout << "-1\n";
        return;
    }
    cout << c << endl;
}
int main()
{
    OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
