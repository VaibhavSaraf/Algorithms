#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

class Base
{
    mutable int x;
    int y;

public:
    Base(){}
    Base(int a, int b):x{a},y{b}{}
    void setX(int a) {x=a;}
    // int getX() const {y = 10; return x;} // will gives error
    int getX() const {x = 99; return x;} // but this not because of mutable
};


// when we use const for any member function then members 
// inside the functions are read only.
// but if we use mutable to that data variable then we can changed it. 

int main()
{
    OJ;
    Base b;
    b.setX(10);
    cout<<b.getX()<<"\n";
    return 0;
}