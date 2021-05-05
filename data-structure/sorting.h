#pragma once
class sorting
{
public:
	void selectionsort(int arr[],int size);
	void bubblesort(int arr[], int size);
	void insertionsort(int arr[],int size);
	void merge(int arr[],int l,int m, int r);
	void mergesort(int arr[], int l , int r);
	int partition(int arr[], int ibeign, int jend );
	void quicksort(int arr[], int l ,int h);
	void heapify(int arr[],int n,int i);
	void buildHeap(int arr[],int n);
	void heapSort(int arr[], int n);

	sorting(void);
	~sorting(void);
};

