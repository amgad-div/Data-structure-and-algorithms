#include "linkedlist.h"


linkedlist::linkedlist(void)
{
	first=tail=NULL;
	length=0;
}
int linkedlist::isempty()
{
	return length==0;
}
void linkedlist::push(int element)
{
	
	if(first==NULL)
	{
		first->item=element;
		first->next=NULL;
		tail=first;
	}
}


linkedlist::~linkedlist(void)
{
}
