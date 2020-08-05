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

    int t = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int c = 0;
        vector <int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int mina,minb;
        mina = *min_element(a.begin(),a.end());
        minb = *min_element(b.begin(),b.end());
        int mm = (mina<minb) ? mina : minb;

        for(int i=0;i<n;i++)
        {
            if(a[i]==)
        }


    }
    return 0;
}