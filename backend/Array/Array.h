//
// Created by Malik Falana on 12/24/22.
//
#pragma once
#ifndef C___ARRAY_H
#define C___ARRAY_H

#include "Base_Array.h"
#include "../Exception/empty_exception.h"

template<typename T>
class Array: public Base_Array<T>
{
    public:
        Array(void);
        Array(size_t length);
        Array(size_t length, T fill);
        Array(const Array<T> &src);
        ~Array(void);
        const Array<T>& operator = (const Array<T> &rhs);
        void resize(size_t new_size);
        size_t size(void) const;
        size_t max_size(void) const;

    private:
        Base_Array<T> data_;
        size_t cur_;
        size_t max_;
};

#include "Array.cpp"

#endif //C___ARRAY_H
