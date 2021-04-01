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

ll ways = 0;
bool col[16], diag1[16], diag2[16], reserved[16][16];

void Search(ll r)
{
    if (r == 8)
    {
        ways++;
        return;
    }
    for (int c = 0; c < 8; c++)
    {
        if (col[c] || diag1[c + r] || diag2[r - c + 7] || reserved[r][c])
            continue;
        col[c] = diag1[r + c] = diag2[r - c + 7] = true;
        Search(r + 1);
        col[c] = diag1[r + c] = diag2[r - c + 7] = false;
    }
}
int main()
{
    // OJ;
    for (int i = 0; i < 16; i++)
    {
        col[i] = diag1[i] = diag2[i] = false;
    }
    string x;
    for (int j = 0; j < 8; j++)
    {
        cin >> x;
        for (int k = 0; k < 8; k++)
        {
            reserved[j][k] = x[k] != '.';
        }
    }
    Search(0);
    cout << ways;
    return 0;
}