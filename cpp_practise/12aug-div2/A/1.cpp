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

ll r, g, b, w;
bool fun()
{
    ll o = 0;
    if(r%2)
        o++;
    if(g%2)
        o++;
    if(b%2)
        o++;
    if(w%2)
        o++;

    if(o<=1)
        return true;
    else
        return false;
}

void solve()
{
    
    cin >> r >> g >> b >> w;

    if(fun())
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        if(r>0 && g>0  && b>0)
        {
            r--;g--;b--;
            w=w+3;
        }
        if(fun())
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }   
    }
}
int main()
{
    // OJ;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}