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
int maxDistToClosest(vector<int> &a)
{
    int maxi = 0;
    int count = 0;
    int i = 0;
    while(i<a.size())
    {
        if(a[i]==1)
        {
            count = 0;
            while()
        }
    }

}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> seats(n);
        for(int i=0;i<n;i++) cin>>seats[i];
        cout<<maxDistToClosest(seats);
        cout<<"\n";
    }
    return 0;
}