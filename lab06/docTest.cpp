#include <iostream>
#include <list>
#include "Document.h"
using namespace std;

int main()
{
    Document d;
    d.open("sample.txt");

    cout << d;
    cout << d.size() << endl;
    d.add_line("Besugo 2000");
    cout << d;

    d.close();
}