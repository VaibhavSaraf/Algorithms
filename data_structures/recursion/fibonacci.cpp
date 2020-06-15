#include<iostream>
#define ll long long
using namespace std;
ll fib(ll n)
{
    if(n<0)
    {
        cout<<"invalid input"<<endl;
    }
    else if(n==1 || n==2)
    {
        return (n-1);
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }    
}

int main()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cout<<fib(i)<<" ";
    return 0;
}
