#include <iostream>
using namespace std;
int main()
{
    int var = 10;
    int *p = NULL;
    p = &var;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    int **q = &p;
    cout << **q << endl;
    return 0;
}