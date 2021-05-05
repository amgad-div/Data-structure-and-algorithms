#pragma once
#include<iostream>
using namespace std;
const int max_size=100;
class stackarray
{
private:
	int top;
	int item[max_size];
public:
	stackarray(void);
	void push(int element);
	void pop();
	int isempty();
	int isfull();
	void gettop();
	void print();
	int search(int element);
	void copy();
	void sort();
	void clear();

	~stackarray(void);
};

