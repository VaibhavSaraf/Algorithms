#include <iostream>
using namespace std;

int *fun()
{
    // int arr[3] = {1, 2, 3}; // gives error
    // static int arr[3] = {1, 2, 3}; // this not
    int * arr  = new int [3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    return arr;
}

int main()
{
    int *arr = fun();
    cout << arr[0] << "\n";
    return 0;
}
