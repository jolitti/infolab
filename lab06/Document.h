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
    string thisPath;

    public:
    Document();
    ~Document();
    bool open(string path);
    void close();
    void add_line(string s);
    void read_line(istream& is);
    unsigned int size() const;
    friend ostream& operator << (ostream& os, const Document& d);
};

#endif