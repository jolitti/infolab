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
void MyVector<T>::resize_array(int newLen)
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
void MyVector<T>::double_array() {resize_array(2*arrayLength);}

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

template <typename T>
int MyVector<T>::reserve(int newBufferLength)
{
        if (newBufferLength<=arrayLength) return arrayLength;
        
        resize_array(newBufferLength);
        return newBufferLength;
}

template <typename T>
MyVector<T>::~MyVector()
{
        delete[] elements;
}



#endif