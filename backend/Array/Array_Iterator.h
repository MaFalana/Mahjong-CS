//
// Created by Malik Falana on 12/29/22.
//

#ifndef C___ARRAY_ITERATOR_H
#define C___ARRAY_ITERATOR_H

#include "Array.h"

template <typename T>
class Array_Iterator
{
    public:
        Array_Iterator(Array<T> &data); /// Initializing constructor
        ~Array_Iterator(void); /// Destructor
        bool is_done(void);
        void advance(void); /// Increments by 1
        T& operator * (void); /// Assignment operator
        T* operator -> (void); /// Assignment operator

    private:
        Array<T> &data_; /// Points to array
        size_t cur_; /// Current size of array
};

#include "Array_Iterator.cpp"

#endif //C___ARRAY_ITERATOR_H
