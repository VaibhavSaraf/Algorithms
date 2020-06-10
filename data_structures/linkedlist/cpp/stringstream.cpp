#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector <int> parseInt(string str)
{
    vector <int> arr;
    stringstream ss(str);
    int tmp;
    char ch;
    while(ss >> tmp)
    {
        arr.push_back(tmp);
        ss >> ch;
    }
    return arr;
}



int main()
{
    string str;
    cin>>str;
    vector<int> integers = parseInt(str);
    for(int i=0;i<integers.size();i++)
    {
        cout << integers[i] << "\n";
    }

    
    return 0;
}