// Efficient C++ program to find sum pair products 
// in an array. 
#include <iostream> 
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define mod 1000000007
#include <vector>
using namespace std; 
// required function 
long long findProductSum(vector<long long> &A, long long n) 
{ 
	// calculating array sum (a1 + a2 ... + an) 
	long long array_sum = 0; 
	for (long long i = 0; i < n; i++) 
		array_sum = array_sum + A[i]; 

	// calcualting square of array sum 
	// (a1 + a2 + ... + an)^2 
	long long array_sum_square = array_sum * array_sum; 

	// calcualting a1^2 + a2^2 + ... + an^2 
	long long individual_square_sum = 0; 
	for (long long i = 0; i < n; i++) 
		individual_square_sum += A[i]*A[i]; 

	// required sum is (array_sum_square - 
	// individual_square_sum) / 2 
	return ((array_sum_square - individual_square_sum))%mod/2; 
} 

// Driver code 
int main() 
{
    // OJ;
    fast;
	long long n;
    cin>>n;
    vector <long long> v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
	cout << findProductSum(v, n) << "\n"; 
	return 0; 
} 
