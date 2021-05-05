#pragma once
class search
{
public:
	int linearsearch(int arr[] ,int n ,int element);
	int binarysearch_recusive(int arr[], int l, int r , int element);
	int binarysearch_itrative(int arr[], int l, int r , int element);
	search(void);
	~search(void);
};

