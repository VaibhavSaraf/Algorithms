#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

// assignment operator overloading


class Test
{
    int *x; // created pointer of integer

public:
    // Test() {}
    Test(int val = 0) : x{new int (val)} {}
    
    void setX(int a) { *x = a; }
    void print()
    {
        cout<<"OUTPUT: "<<*x<<"\n";
    }
    ~Test() { delete x; }

    Test& operator = (const Test &rhs)
    {
        if(this != &rhs)
            *x = *rhs.x;
        return *this;
    }

};

int main()
{
    OJ;
    Test t1(10);
    Test t2;
    t2 = t1;
    t1.setX(20);
    t1.print(); // here 20
    t2.print(); // here also 20 but this should be 10 so how is this happened? it is before operator overloading
    return 0;
}