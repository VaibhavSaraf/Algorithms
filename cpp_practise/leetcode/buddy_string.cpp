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
bool buddyStrings(string A, string B)
{
    map<char, int> ma, mb;
    if (A.length() != B.length())
        return false;
    int c = 0;
    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] != B[i])
            c++;
        else
            continue;
        ma[A[i]]++;
        mb[B[i]]++;
    }

    if (c == 2)
        return true;
    else if (c == 0)
    {
        for (auto x : ma)
            if (x.second > 1)
                return true;
            else
                return false;
    }
    else
        return false;
    // return false;
}
int main()
{
    OJ;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<buddyStrings(a,b)<<"\n";
    }
    return 0;
}