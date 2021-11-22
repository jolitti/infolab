#include "MyVector.h"
#include <iostream>
using namespace std;

int main()
{
    MyVector<int> v;
    int a = 1;
    v.push_back(a);
    v.push_back(a);
    cout<<v.pop_back()<<endl;
    cout<<v.pop_back()<<endl;
    cout<<v.pop_back()<<endl;
}