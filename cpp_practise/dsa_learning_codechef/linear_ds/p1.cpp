#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int ans;
        for (int i = 1; i <= n; i++)
        {
            if (sum < n)
            {
                sum = sum + i;
                ans = i;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
}