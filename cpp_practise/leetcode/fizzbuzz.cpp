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
vector<string> solve()
{
    int n;
    cin >> n;
    vector<string> ans;
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
            ans.push_back("FizzBuzz");
        else if (i % 3 == 0)
            ans.push_back("Fizz");
        else if (i % 5 == 0 )
            ans.push_back("Buzz");
        else
        {
            ans.push_back(to_string(i));
        }
            
    }
    return ans;
}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        vector<string> ans;
        ans = solve();
        for(auto x : ans)
        {
            cout<<x<<"\n";
        }
    }
    return 0;
}