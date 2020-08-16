#include <bits/stdc++.h>
using namespace std;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

void sol()
{
	int n; cin>>n;
	vector <int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];

	for(auto i : v)	cout<<i<<" ";
	cout<<endl;
	// Sort array or vector ascending
	sort(v.begin(),v.end());
	for(auto i : v)	cout<<i<<" ";
	cout<<endl;
	// Sort array or vector descending;
	// we can do any one of them;
	sort(v.begin(),v.end(),greater<int>());
	// sort(v.rbegin(),v.rend());
	for(auto i : v)	cout<<i<<" ";
	cout<<endl;
	// maximum element and minimum element
	cout<<*max_element(v.begin(),v.end())<<endl;
	cout<<*min_element(v.begin(),v.end())<<endl;

	// summation of array
	cout<<accumulate(v.begin(),v.end(),0)<<endl;

	// find(first_iterator, last_iterator, x) – Points to last address of vector((name_of_vector).end()) if element is not present in vector.

	find(v.begin(),v.end(),11) != v.end() ? cout<<"found\n" : cout<<"not found\n";
	cout<<"Occurance of 11: "<<count(v.begin(),v.end(),11)<<endl;

	//lower_bound(first_iterator, last_iterator, x)
	/*returns an iterator pointing to the first element in the range [first,last) 
	which has a value not less than ‘x’.*/
	//upper_bound(first_iterator, last_iterator, x)
	/*returns an iterator pointing to the first element in the range [first,last) 
	which has a value greater than ‘x’.*/
	//binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.

	/* Sort the array to make sure that lower_bound() and upper_bound() work*/	
	sort(v.begin(),v.end());
	// Returns the first occurrence of 20
	auto low = lower_bound(v.begin(),v.end(),20);
	// Returns the last occurrence of 20
	auto up = upper_bound(v.begin(),v.end(),20);

	cout << "The lower bound is at position: ";
	cout << low-v.begin() << endl;
	cout << "The upper bound is at position: ";
	cout << up-v.begin() << endl;
	/* 
	* arr.erase(position to be deleted) – This erases selected element in vector and
	shifts and resizes the vector elements accordingly.
	* arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate
	occurrences in sorted vector in a single line.*/

	// Delete second element from vector
	v.erase(v.begin()+1);

	// Deletes the duplicate occurrences

	v.erase(unique(v.begin(),v.end()),v.end());
	for(auto i : v)	cout<<i<<" ";
	cout<<endl;


	/* 
	* next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
	* prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.
	*/
	// for(int i=0;i<n;i++) cin>>v[i]; // reads input again

	cout<<"Initial vector"<<"\n";
	for(auto i : v)	cout<<i<<" ";
	cout<<endl;
	
	// modifies vector to its next permutation order
	next_permutation(v.begin(), v.end());
	// next_permutation(v.begin(), v.end());
	// next_permutation(v.begin(), v.end());
	cout << "Vector after performing next permutation:\n";
	for(auto i : v)	cout<<i<<" ";

	prev_permutation(v.begin(), v.end());
	// prev_permutation(v.begin(), v.end());
	cout << "Vector after performing previous permutation:\n";
	for(auto i : v)	cout<<i<<" ";

	/* distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index.*/
	cout << "Distance between first to max element: ";
	cout << distance(v.begin(),max_element(v.begin(),v.end()))<<endl;

}





int main()
{
	OJ;
	sol();
 	cout<<"hello world\n";

	return 0;
}