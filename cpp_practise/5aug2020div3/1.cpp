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

int main()
{
    fast
        // OJ
        int t = 1;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        vector <int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        bool f;
        int i=0, j=1;
        sort(v.begin(),v.end());
        while (i<n && j<n)
        {
            if (i != j && abs(v[j]-v[i])<=1)
            {
                f = true;
            }
            else
            {
                f = false;
                break;
            }
            i++;
            j++;
        }
        if (f||v.size()==1)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}