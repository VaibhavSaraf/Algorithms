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

int main()
{
    OJ;
    fast;
    ll n, a, b;
    cin >> n;
    if (n == 1)
        cout << 20 << "\n";
    if (n == 2)
        cout << 36 << "\n";
    if (n == 3)
        cout << 51 << "\n";
    a = (n / 4)*44;
    b = n % 4;
    if(n>=4){
        if(b==0)
    }
    
    

    return 0;
}