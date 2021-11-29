#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <list>
#include <fstream>
#include <iostream>
using namespace std;

class Document
{
    private:
    list<string> lines;
    fstream file;

    public:
    Document();
    ~Document();
    bool open(const string& path);
    void close();
    void add_line(const string& s);
    unsigned int size() const;
    friend ostream& operator << (ostream& os, const Document& d);
};

#endif