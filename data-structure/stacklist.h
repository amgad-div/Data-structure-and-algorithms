#pragma once
#include<iostream>
using namespace std;
class stacklist
{
private:
	struct node
	{
		int item;
		node*next;
		
	};
	node*top;
	int length;
public:
	void push(int element);
	void pop();
	int isempty();
	void print();
	void clear();
	void gettop();
	void search();
	void size();
	stacklist(void);
	~stacklist(void);
};

