#include <string>

#ifndef LINK_H
#define LINK_H
class Link{
private:
	std::string value;
	Link* prev;
	Link* succ;
	friend class myList;
public:
	explicit Link(std::string v,Link* p=nullptr,Link* s = nullptr);
	
	std::string toString();
};

#endif