#include<iostream>
#include<string>
#include<Bits.h>
#include<limits>
#include<OleAuto.h>
#include<array>
#include"sorting.h"
#include "stackarray.h"
#include"stacklist.h"
using namespace std;
int main()
{
	/*stacklist s;
	s.push(10);
	s.push(30);
	s.push(60);
	s.push(50);
	cout<<endl;
	//s.clear();
	s.print();
	cout<<endl;
	s.size();
	s.gettop*/
	sorting s;int a[10]={9,1,50,100,30,10};
	int r; cin>>r;
	s.mergesort(a,0,5);
	for(int i=0; i<r; i++)
	{cout<<a[i];
	}
}