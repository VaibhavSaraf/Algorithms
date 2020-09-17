#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

double DollarToRupeeExchangeRate()
{
    return 73.61;
}
class Rupee
{
    double r;

public:
    Rupee(double x = 0) : r{x} {}
    void print() { cout << "r: " << r << "₹.\n"; }
    // operator Dollar()
    // {
    //     return Dollar(r/DollarToRupeeExchangeRate());
    // }
};


class Dollar
{
    double d;

public:
    Dollar(double x = 0) : d{x} {}
    void print() { cout << "d: " << d << "$.\n"; }
    operator Rupee ()
    {
        return Rupee(d*DollarToRupeeExchangeRate());
    }
};


int main()
{
    OJ;
    Dollar d(100);
    Rupee r;
    r = d;
    r.print();
    d.print();
    return 0;
}