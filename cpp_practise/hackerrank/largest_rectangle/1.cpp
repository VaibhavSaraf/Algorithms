#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define Time srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/* Brute Force approch */
void solve()
{
    vector <int> v;
    while(true)
    {
        int x; cin>>x;
        if(x<0)
        {
            break;
        }
        else
        {
            v.push_back(x);
        }
    }
    int n = v.size();
    int area = 0, max_area = 0;
    for(int i=0;i<n;i++)
    {
        int min_h = INT16_MAX;
        for(int j=i;j<n;j++)
        {
            min_h = min(min_h,v[j]);
            area = (j-i+1)*min_h;
            max_area = max(max_area,area);
        }
    }
    cout<<max_area<<endl;
}



void solve2()
{
    vector <int> v;
    while(true)
    {
        int x; cin>>x;
        if(x<0)
        {
            break;
        }
        else
        {
            v.push_back(x);
        }
    }
    stack <int> s;
    int tp; // store top of stack
    int area = 0;
    int max_area = 0;
    int i = 0;
    while(i < v.size())
    {
        if(s.empty() || v[s.top()]<=v[i])
            s.push(i++);
        
        else
        {
            tp = s.top();
            s.pop();
            area = v[tp] * (s.empty() ? i : i-s.top()-1);
            max_area = max(max_area,area);
        }
        while (s.empty() == false)
        {
            tp = s.top();
            s.pop();
            area = v[tp] * (s.empty() ? i : i - s.top() - 1);
            max_area = max(max_area,area);
        }
    }
    cout<<max_area<<endl;
}

int main()
{
    OJ;fast;
    Time;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // solve();
        solve2();
    }
    return 0;
}