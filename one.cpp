#include <bits/stdc++.h> 
using namespace std; 
int arr[] = { 1,0,0,0,1,2,2,1,0 }; 
int n = sizeof(arr) / sizeof(arr[0]); 


int main() 
{
	int first=0,mid=0,last=n-1;
	while(mid<=last)
	{
		if(arr[mid]==0)
		{
			swap(arr[first],arr[mid]);
			first++;
			mid++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else if(arr[mid]==2)
		{
			swap(arr[mid],arr[last]);
			last--;
		}
	}

	for(int i:arr)
	{
		cout<<i<<" ";
	}
} 