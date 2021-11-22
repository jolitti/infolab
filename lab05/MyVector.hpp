#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

#include "MyVector.h"
#include <stdexcept>

template <typename T>
MyVector<T>::MyVector(int initialBuffer)
        :size {0}, arrayLength{initialBuffer},elements{new T[initialBuffer]}
{

}

template <typename T>
void MyVector<T>::double_array()
{
        T* newElements = new T[2*arrayLength];
        for (int i = 0; i<size; i++)
        {
                newElements[i]=elements[i];
        }
        delete[] elements;
        elements = newElements;
        newElements = nullptr;
        arrayLength *= 2;
}

template <typename T>
void MyVector<T>::push_back(T& newElem)
{
        elements[size] = newElem;
        size++;
        if (size>=arrayLength) double_array();
}

template <typename T>
T& MyVector<T>::pop_back()
{
        if (size<=0) throw std::out_of_range("Vector is empty");
        size--;
        return elements[size];
}



#endif