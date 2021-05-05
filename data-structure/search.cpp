#include "search.h"


search::search(void)
{
}

// liner search  method
int linearSearch(int arr[], int n, int element)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == element)
			return i;
	}
	return-1;
}

//binary search itraative method

int search::binarysearch_itrative(int arr[], int l, int r, int element)
{
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(arr[mid]==element)
			return mid;
		if(arr[mid]>element)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return -1;
	
}

// binary search recusive method
int binarysearch_recusive(int arr[], int l, int r, int element)
{
	if (r >= l) 
	{
		int mid = (l + r) / 2;

		if (arr[mid] == element)
			return mid;

		if (arr[mid] > element)
			return binarysearch_recusive(arr, l, mid - 1, element);

		return binarysearch_recusive(arr, mid + 1, r, element);
	}
	return -1;
}

search::~search(void)
{
}
