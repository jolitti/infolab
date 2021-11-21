#include "myList.h"
#include "Link.h"
#include <iostream>
#include <string>
using namespace std;

myList::myList():length{0},first{nullptr},last{nullptr}{}

bool myList::is_empty() const {return length<=0;}
void myList::print_all() const
{
	if (is_empty())
	{
		cout<<"List is empty"<<endl;
		return;
	}
	Link* p = first;
	while (p!=nullptr)
	{
		cout<<p->toString()<<endl;
		p=p->succ;
	}
}

Link* myList::push_back(string s)
{
	Link newLink = Link(s);
	Link* oldLast = last;
	last = &newLink;
	last->succ = nullptr;
	if (is_empty()) 
		{
			first=last;
			last->prev=nullptr;
		}
	else last->prev=oldLast;
	
	length++;
	return last;
}