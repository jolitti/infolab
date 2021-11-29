#include "Document.h"

Document::Document()
{
    lines = list<string>();
}
Document::~Document()
{
    lines.clear();
    file.close();
}

bool Document::open(const string& path)
{
    file.open(path);
    if (file.is_open()) 
    {
        string line;
        while (getline(file,line))
        {
            lines.push_back(line);
        }
        return true;
    }
    else return false;
}

void Document::close()
{
    lines.clear();
    file.close();
}

unsigned int Document::size() const
{
    return lines.size();
}

ostream& operator << (ostream& os, const Document& d)
{
    for (string line:d.lines)
    {
        os << line << endl;
    }
    return os;
}