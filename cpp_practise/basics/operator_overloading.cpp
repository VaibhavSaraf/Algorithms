#include <bits/stdc++.h>
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;

// class point
// {
//     int x, y;

// public:
//     point(int x = 0, int y = 0) : x{x}, y{y} {}

//     point operator+ (const point &t)
//     {
//         point res;
//         res.x = x + t.x;
//         res.y = y + t.y;
//         return res;
//     }
//     void print()
//     {
//         cout<<"x: "<<x<<" y: "<<y<<"\n";
//     }

//     point operator-(const point &t)
//     {
//         point res;
//         res.x = x - t.x;
//         res.y = y - t.y;
//         return res;
//     }
//     point operator - () //unary operator
//     {
//         // point res;
//         // res.x = -x;
//         // res.y = -y;
//         // return res;
//         return point(-x,-y);
//     }
// };

// void fun()
// {
//     point p1(1,2), p2(2,3);
//     point p3 = p1 + p2; // gives error because operator is not overloaded.
//     point p4 = -p2;
//     p4.print();
//     point p5 = p1-p4;
//     p5.print();
// }

// operator overloading of subscript '[]' operator

// class point
// {
//     int arr[2];

// public:
//     point(int x = 0, int y = 0)
//     {
//         arr[0] = x;
//         arr[1] = y;
//     }

//     void print()
//     {
//         cout << "x: " << arr[0] << " y: " << arr[1] << "\n";
//     }

//     int &operator[](int pos)
//     {
//         if (pos == 0)
//             return arr[0];
//         else if (pos == 1)
//             return arr[1];
//         else
//         {
//             cout << "Out of bound\n";
//             exit(0);
//         }
//     }
// };
// void fun1()
// {
//     point p1(1, 2), p2(2, 3);
//     p1[0] = 22;
//     p1.print();
//     p1[22] = 25; // for out of bound error;
// }

// << and >> operator overloading

class Test
{
    int x;

public:
    Test(int x) : x{x} {}
    Test(){}
    friend istream& operator >> (istream &input, Test &obj);
    friend ostream& operator << (ostream &output, Test &obj);
};

// as cin and cout are the objects of istream and ostream class therefore we can not overload
// this << and  >> inside the Test class. so we have to make operator overloading function friend function of Test class

istream& operator >> (istream &input, Test &obj)
{
    input >> obj.x;
    return input;
}
// we take it as refrence because we don't want copy of that obj, if we declare it, it will create copy.


ostream& operator << (ostream &output, Test &obj)
{
    output << obj.x;
    return output;
}

void fun2()
{
    Test t;
    cin>>t;
    cout<<t;
}


int main()
{
    OJ;

    // fun();
    // fun1(); // operator '[]' overloading
    fun2(); // operator << && >> overloading

    return 0;
}