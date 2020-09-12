#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

class Base
{
public:
    void fun(int x)
    {
        cout << "Base\n";
    }
    void fun(int x, int y)
    {
        cout << "Base2\n";
    }
    void foo()
    {
        cout << "just for run\n";
    }
};
class Derived : public Base
{
public:
    // using Base::fun;
    void fun(char c)
    {
        cout << "Derived\n";
        // cout<<c<<"\n";
    }
};

int main()
{
    OJ;
    Derived d;
    d.foo();
    d.fun('a');
    // d.fun(1);
    d.Base::fun(1);

    // d.fun(1,1); gives error but if we use "using Base::fun;" then gives no error

    return 0;
}

// output will be
// Derived
// Derived
// this is because the function in the base class get hide
// now using scope resolution (::) operator we can solve this problem
// that is using Base::fun; now the output is
// Derived
// Base
