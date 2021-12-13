#ifndef UNIQUE_POINTER_HPP
#define UNIQUE_POINTER_HPP

//using upt::unique_ptr;
//namespace upt
//{

template <typename T>
unique_ptr<T>::unique_ptr(T* obj):ptr {obj} {}

template <typename T>
T* unique_ptr<T>::operator->() const {return ptr;}

template <typename T>
T unique_ptr<T>::operator*() const {return *ptr;}

template <typename T>
T* unique_ptr<T>::release() 
{
    T* old_ptr = ptr;
    ptr = nullptr;
    return old_ptr;
}

template <typename T>
unique_ptr<T> unique_ptr<T>::make_unique() {return unique_ptr<T>(new T);}

template <typename T>
unique_ptr<T>::~unique_ptr() 
    {
        delete ptr;
        ptr = nullptr;
    }
//}

#endif