// A conversion constructor is a single-parameter constructor that is declared
// without the function specifier explicit . The compiler uses conversion
// constructors to convert objects from the type of the first parameter to the
// type of the conversion constructor's class.

#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define print(x) cout << #x << " " << x << endl

class myClass
{
    int x, y;

public:
    myClass(int i)
    {
        x = y = i;
    }
    void display()
    {
        print(x);
        print(y);
    }
};

int main()
{
    // OJ;
    myClass m(20);
    m.display();
    m = 33;
    m.display();
    return 0;
}
