//
// Created by Malik Falana on 12/24/22.
//
#pragma once
#ifndef C___STACK_H
#define C___STACK_H

#include "../Array/Array.h"


template <typename T>
class Stack
{
    public:
        typedef T type; /// Type definition of the type.
        Stack (void); /// Default constructor.
        Stack (const Stack &s); /// Copy constructor.
        ~Stack (void); /// Destructor.
        const Stack & operator = (const Stack &rhs); /// Assignment operator
        void push (T element); /// Push a new \a element onto the stack. The element is inserted before all the other elements in the list.
        void pop (void); /// Remove the top-most element from the stack.
        T top (void) const; /// Get the top-most element on the stack. If there are no element on the stack, then the stack_is_empty exception is thrown.
        bool is_empty (void) const; /// Tests whether the stack is empty
        size_t size (void) const; /// Returns the number of elements in the stack aka the size
        void clear (void); /// Remove all elements from the stack.

    private:
        Array<T> stack_;
        size_t size_; /// Size of stack
};

#include "Stack.cpp"

#endif //C___STACK_H
