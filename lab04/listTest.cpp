#include "Link.h"
#include "myList.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	myList l = myList();
	l.push_back("a");
	l.push_back("b");
	l.push_back("c");
	
	l.print_all();
}