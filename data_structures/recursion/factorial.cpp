#include <iostream>
#define ll long long
using namespace std;
ll factorial(ll n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    ll n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}