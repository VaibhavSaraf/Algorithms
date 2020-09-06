#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
class A
{
    public:
    int a;
    A()
    {
        cout<<"default\n";
    }
    A(int a=10)
    {
        this->a = a;
        cout<<"123\n";
    }
    A(string a);

};
A::A(string a)
{
    cout<<a<<"\n";
}
void fun(int a = 10)
{
    cout<<"fun\n";
}

void fun()
{
    cout<<"fun1\n";
}

int main()
{
    // A a; // gives error
    // A a(); // but this not *** why? 
    // A a = A("hhaa"); // o/p default
    // and what is output of this program ?
    return 0;
}