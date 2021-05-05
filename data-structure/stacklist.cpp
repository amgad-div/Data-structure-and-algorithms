#include "stacklist.h"


stacklist::stacklist(void)
{
	top=NULL;
	length=0;
}
int stacklist::isempty()
{
	return top==NULL;
}
void stacklist::push(int element)
{
	node*newitem= new node;
	newitem->item=element;
	newitem->next=top;
	top=newitem;
	length++;
}
void stacklist::pop()
{
	if(isempty())
	{
		cout<<"stack is empty \n";
	}
	else
	{
		node*temp=top;
		top=top->next;
		temp->next=NULL;
		delete temp;
	}
	length--;
}
void stacklist::gettop()
{
	cout<<top->item;
}
void stacklist::clear()
{
	while(top!=NULL)
	{
		pop();
	}

}
void stacklist::print()
{
	node*cur=top;
	while(cur!=NULL)
	{
		cout<<cur->item;
		cur=cur->next;
	}
}
void stacklist::size()
{
	cout<<length;
}

stacklist::~stacklist(void)
{
}
