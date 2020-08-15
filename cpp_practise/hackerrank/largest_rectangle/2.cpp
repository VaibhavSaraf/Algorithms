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
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    stack <int> s;
    // cout<<s.top()<<"\n";

    int area;
    int max_area = 0;
    int tp;

    int i = 0;
    while (i<n)
    {
        if(s.empty() || v[i]>=v[s.top()])
            s.push(i++);
        
        else
        {
            tp = s.top();
            s.pop();
            area = v[tp]*(s.empty() ? i : i - s.top() - 1);
            // deb(tp);
            // deb(i);
            // deb(area);
            max_area = max(area,max_area);
        }
    }
    while (!s.empty())
    {
        tp = s.top();
        // deb(tp);
        s.pop();
        area = v[tp] * (s.empty() ? i : i - s.top() - 1);
        // deb(i);
        // deb(area);
        max_area = max(area,max_area);
    }
    cout<<max_area<<endl;
}
int main()
{
    // OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}