#include "Unique_pointer.h"
#include <iostream>

using namespace std;
//using upt::unique_ptr;

int main()
{
    int i = 1;
    unique_ptr<int> a {new int (5)};
    cout<<*a<<endl;
}