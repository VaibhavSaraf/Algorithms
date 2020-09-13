#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

union xyz
{
    double a;
    int b;
    short c;
    char d;
    bool e;
};

union square
{
    int width;
    int height;
};

int area(int a)
{
    square x;
    x.height = a;
    return x.height * x.width; // not declare width but it automatically assign height value
}

void print_size()
{
    cout << "double " << sizeof(double) << "\n";
    cout << "int " << sizeof(int) << "\n";
    cout << "short " << sizeof(short) << "\n";
    cout << "char " << sizeof(char) << "\n";
    cout << "bool " << sizeof(bool) << "\n";
    cout << "bool " << sizeof(bool) << "\n";
}

union myunion
{
    char bytes[4];
    unsigned int value;
};

int main()
{
    OJ;
    // xyz a;
    // print_size();
    // cout << sizeof(a) << endl;
    // cout<<"area of square 10 "<<area(10)<<"\n";

    myunion un;
    un.value = 0;
    un.value = 65;
    un.value = 257;
    cout << (int)un.bytes[0] << endl; // 0 to 256
    cout << (int)un.bytes[1] << endl; // 257 to 512
    cout << (int)un.bytes[2] << endl; // 513 to 1024
    cout << (int)un.bytes[3] << endl; // 1025 to 2048

    return 0;
}