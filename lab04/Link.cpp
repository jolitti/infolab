#include "Link.h"
#include <string>
using namespace std;

Link::Link(string v,Link* p,Link* s)
	: value {v},prev{p},succ{s} {}
	
string Link::toString()
{
	return value/*+", prev="+prev.str(),"next="+next.str()*/;
}