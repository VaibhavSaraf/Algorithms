#include <iostream>
#include <bits/stdc++.h>
#define deb(x) cout << #x << "=" << x << " "
using namespace std;
vector<int> slicing(vector<int>& arr, int X, int Y) 
{ 
  
    // Starting and Ending iterators 
    auto start = arr.begin() + X; 
    auto end = arr.begin() + Y + 1; 
  
    // To store the sliced vector 
    vector<int> result(Y - X + 1); 
  
    // Copy vector using copy function() 
    copy(start, end, result.begin()); 
  
    // Return the final sliced vector 
    return result; 
}
vector<int> fun()
{
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int best = 0, sum = 0;
    int x, l = 0; //l is lenght; x is start point
    for (int i = 0; i < n; i++)
    {
        if (v[i] > sum + v[i])
        {
            x = i;
        }
        sum = max(v[i], sum + v[i]);
        if (best >= sum)
        {
            l++;
        }
        best = max(best, sum);
    }
    
    vector <int> result;
    result = slicing(v,x,x+l);
    return result;
}
int main()
{
    // vector <int> v = fun();
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    int p[5];
    cout<<p<<" "<<p[9]<<"\n"  ;
    return 0;
}