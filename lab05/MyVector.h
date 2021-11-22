#ifndef MYVECTOR_H
#define MYVECTOR_H

template<typename T>

class MyVector
{
private:
    int size;
    int arrayLength;
    T* elements;

    void double_array();

public:
    MyVector(int initialBuffer = 1);
    //T& operator[](int pos);
    //T operator[] const (int pos);

    //T& at(int pos);
    //T at(int pos) const;

    void push_back(T& newElem);
    T& pop_back();

    //int reserve(int newBuffLength); 


};
#include "MyVector.hpp"

#endif