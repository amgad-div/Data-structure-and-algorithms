#pragma once
#include<iostream>
using namespace std;
class linkedlist
{
private:
	struct node
	{
		int item;
		node*next;
	};
	node*first,*tail; int length;

public:
	void push(int element);
	void pop();
	void print();
	int isempty();
	int isfull();
	void search(int element);
	void clear();
    int getfirst();
	int gettail();
	//void 
	linkedlist(void);
	~linkedlist(void);
};

