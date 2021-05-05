#include "sorting.h"
#include<iostream>
using namespace std;


sorting::sorting(void)
{
	cout<<"Selection sort";
}
void sorting::selectionsort(int arr[], int size)
{
	int minindix;
	for(int i=0; i<size-1; i++)
	{
		minindix=i;
		for(int j=i+1; j<size; j++)
		{
			if(arr[minindix]>arr[j])
			{
				minindix=j;
			}
		}
		swap(arr[minindix],arr[i]);
	}
}
void sorting::bubblesort(int arr[], int size)	
{
	bool flag=true;
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				flag=false;
			}
		}
		if(flag)
			break;
	}
}
void sorting::insertionsort(int arr[], int size)
{
	int j,key;
	for(int i=1; i<size; i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void sorting::merge(int arr[], int l ,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int*L=new int[n1],*R=new int[n2];

	for(i=0; i<n1; i++)
		L[i]=arr[l+1];
	for(j=0; j<n2; j++)
		R[j]=arr[n1+1+j];
	i=j=0,k=l;
	while(i<=n1 && j<=n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++,k++;
		}
		else
		{
			arr[k]=R[j];
			j++,k++;
		}
	}
	while(i<n1)
	{
		arr[k]=L[i]; 
		i++,k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++,k++;
	}

}
void sorting::mergesort(int arr[], int l , int r)
{
	if(l<r)
	{
		int m=l+(r-1)+1;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int sorting::partition(int arr[], int l, int h)
{
	int i=l , j=j , pivot=i;
	while(true)
	{
		while(arr[pivot]<=arr[j] && pivot!=j )
		{
			j--;
		}
		if(pivot==j)
		{
			break;
		}
		else if(arr[pivot]>arr[j])
		{
			swap(arr[pivot],arr[j]);
			pivot=j;
		}

		while(arr[pivot]<=arr[i] && pivot!=i)
		{
			i--;
		}
		if(pivot==i)
		{
			break;
		}
		else if(arr[pivot]>arr[i])
		{
			swap(arr[pivot],arr[i]);
			pivot=i;
		}
	}
	return pivot;
}

void sorting::quicksort(int arr[], int l ,int h)
{
	if(l<h)
	{
		int piv=partition(arr,l,h);
		quicksort(arr,l,piv-1);
		quicksort(arr,piv+1,h);
	}
}



sorting::~sorting(void)
{
}
