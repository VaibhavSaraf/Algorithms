#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
void print(int n)
{
    if (n > 0)
    {
        print(n - 1);

        cout << n << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}