//
// Created by Malik Falana on 12/24/22.
//
#pragma once
#ifndef C___BASE_ARRAY_H
#define C___BASE_ARRAY_H

#include <cstring>          // for size_t definition
#include <iostream>         // for cout.
#include <stdexcept>

template <typename T>
class Base_Array
{
    public:
        typedef T type;
        Base_Array (void); /// Default constructor.
        Base_Array (size_t length); /// Initializing constructor.
        Base_Array (size_t length, T fill); /// Initializing constructor.
        Base_Array (const Base_Array &arr);  /// Copy constructor.
        ~Base_Array (void); /// Destructor.
        const Base_Array & operator = (const Base_Array &rhs); /// Assignment operation.
        size_t size (void) const; /// Retrieves current size of the array.
        size_t max_size (void) const; /// Retrieves max size of the array.
        T & operator [] (size_t index); /// Retrieves element at specified index.
        const T & operator [] (size_t index) const; /// Retrieves element at specified index (not modifiable).
        T get (size_t index) const; /// Gets the T at the specified index.
        void set (size_t index, T value);  /// Sets a specified element at the specified index.
        int find (T element) const; /// Returns index of the specified element in the array.
        int find (T element, size_t start) const; /// Returns index of the specified element in the array.
        bool operator == (const Base_Array &rhs) const; /// Tests the array for equality.
        bool operator != (const Base_Array &rhs) const;  /// Tests the array for inequality.
        void fill (T element); /// Fill the contents of the array.

    private:
        T* data_; /// Pointer to the actual data.
        size_t cur_; /// Current size of the array
};

#include "Base_Array.cpp" // include the source file since template class

#endif //C___BASE_ARRAY_H
