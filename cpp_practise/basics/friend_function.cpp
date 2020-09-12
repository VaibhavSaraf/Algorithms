#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

class Base
{
    int x;

public:
    // void set(int a)
    // {
    //     x = a;
    // }
    // int get()
    // {
    //     return x;
    // }
    Base() {}
    Base(int a) { x = a; }
    // friend void seti(Base&,int);
    // friend int get(Base&);
    friend class getset;
};
// void seti(Base &obj, int a)
// {
//     obj.x = a;
// }
// int get(Base &obj)
// {
//     return obj.x;
// }

class getset
{
public:
    void setX(Base &obj,int a)
    {
        obj.x = a;
    }
    int getX(Base &obj)
    {
        return obj.x;
    }
};

int main()
{
    OJ;
    Base b(99);
    // cout << get(b) << "\n";  //friend function
    // seti(b, 1003);
    // cout << get(b) << "\n";
    getset gs;
    cout<<gs.getX(b)<<"\n"; // friend class
    gs.setX(b,25);
    cout<<gs.getX(b)<<"\n";

    return 0;
}