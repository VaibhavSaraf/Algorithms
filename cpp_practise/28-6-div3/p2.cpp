#include <iostream>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;

int solve(int n)
{
    int count = 0;
    if (n == 1)
        return 0;
    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n = n / 6;
            count++;
        }
        else if(n%2==0)
        {
            count=-1;
            break;
        }
        else
        {
            n = n * 2;
            count++;
        }
    }
    return count;
}

int main()
{
    fast int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        cout << solve(n)<<endl;
    }

    return 0;
}