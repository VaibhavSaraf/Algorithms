#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

class Int
{
    int x;

public:
    Int(int a) : x{a}
    {
        cout << "conversion constructor\n";
    }
    operator string()
    {
        return to_string(x);
    }
    void display()
    {
        cout << "x: " << x << endl;
    }
};

int main()
{
    OJ;
    Int i(10);
    i.display();
    i = 99;
    i.display();
    string s = i;
    cout<<typeid(s).name()<<"  "<<s<<"\n";
    return 0;
}