#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<stoi(s);
    char *token = strtok(s);
}