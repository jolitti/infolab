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

bool Document::open(string path)
{
    thisPath = path;
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

void Document::add_line(string s)
{
    file.close();
    ofstream tempFile;
    tempFile.open(thisPath, fstream::app);
    lines.push_back(s);
    tempFile << s << endl;
    tempFile.close();
    file.open(thisPath);
}

ostream& operator << (ostream& os, const Document& d)
{
    for (string line:d.lines)
    {
        os << line << endl;
    }
    return os;
}