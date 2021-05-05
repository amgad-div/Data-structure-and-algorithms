#include "stackarray.h"


stackarray::stackarray(void)
{
	top=-1;
}
int stackarray::isempty()
{
	return top==-1;
}
int stackarray::isfull()
{
	return top==max_size;
}
void stackarray::push(int element)
{
	if(isfull())
	{
		cout<<"Stack is full \n";
	}
	else
	{
		top++;
		item[top]=element;
	}
}
void stackarray::pop()
{
	if(isempty())
	{
		cout<<"Stack is empty\n";
	}
	else
	{
		top--;
	}
}
void stackarray::gettop()
{
	cout<<item[top];
}
void stackarray::print()
{
	cout<<"{";
	for(int i=top; i>=0; i--)
	{
		cout<<item[i]<<" ";
	}
	cout<<"}";
}
int stackarray::search(int element)
{
for(int i=0; i<=top+1; i++)
	{
		if(item[i]==element)
		return i;
	}
return -1;
}
/*void stackarray::sort()
{
     for(int i=0; i<=top+1; i++)
	{
		for(int j=0; j<=top+1; i++)
		if(item[j]>item[j+1])
			swap(item[j],item[j]);
		 
	 }
}*/
void stackarray::clear()
{
	top=-1;
}


stackarray::~stackarray(void)
{
}
