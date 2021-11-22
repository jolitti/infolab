#include "MyVector.h"
#include <iostream>
using namespace std;

int main()
{
    MyVector<string> v;
    string a = "Ciao";
    string b = "mondo";
    v.push_back(b);
    v.push_back(a);
    cout<<v.pop_back()<<endl;
    cout<<v.pop_back()<<endl;
    //cout<<v.pop_back()<<endl;
}