// #include <bits/stdc++.h>
#include <iostream>
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

void printArray(int *arr, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void swap(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

void bubblesort(int arr[],int n)
{
	bool flag = 0;
	int c = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				flag = 1;
			}
			c++;
		}
		if(!flag)
		{
			break;
		}
		flag = 0;
	}
	deb(c);
	printArray(arr,n);
}

void selectionSort(int arr[], int n)
{
	int min_i = INT32_MAX;
	int minn = INT32_MAX;
	for(int i=0;i<n-1;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
			
		}
		swap(arr[i],minn);
	}
	printArray(arr,n);
}

void solve()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	// bubblesort(arr,n);
	selectionSort(arr,n);
}

int main()
{
	OJ;
	int tt = 1;
	// cin>>tt;
	while(tt--)
	{
		solve();
	}
	return 0;	
}