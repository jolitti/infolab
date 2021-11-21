#include "Link.h"
#include <string>
using namespace std;

#ifndef MYLIST_H
#define MYLIST_H

class myList
{
private:
	Link* first;
	Link* last;
	int length;
public:
	myList();
	Link* insert(Link* p, string s);
	Link* add(Link* p, string s);
	Link* erase(Link* l);
	Link* find(const string& s);
	Link* advance(Link* l, int n);
	void print_all() const;
	
	Link* push_back(string s);
	Link* push_front(string s);
	Link* back();
	Link* front();
	Link* pop_back();
	Link* pop_front();
	
	bool is_empty() const;
};

#endif