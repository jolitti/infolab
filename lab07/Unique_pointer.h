#ifndef UNIQUE_POINTER_H
#define UNIQUE_POINTER_H



//namespace upt
//{
    template <typename T>
    class unique_ptr
    {
    private:
        T* ptr;

    public:
        unique_ptr(T* obj);
        T* operator->() const;
        T operator *() const;
        T* release();

        static unique_ptr make_unique();
        ~unique_ptr();
    };
   
    #include "Unique_pointer.hpp"
//}
#endif