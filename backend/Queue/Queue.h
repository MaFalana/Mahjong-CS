//
// Created by Malik Falana on 12/24/22.
//
#pragma once
#ifndef C___QUEUE_H
#define C___QUEUE_H

#include "../Array/Array.h"

template <typename T>
class Queue /// Should offer basic exception handling
{
    public:
        typedef T type; /// Type definition of the type.
        Queue(); /// Default constructor
        Queue(const Queue &q); /// Copy constructor
        ~Queue(); /// Destructor
        const Queue & operator = (const Queue &rhs); ///Assignment operator
        void enqueue(T element); /// Adds element to the end of the list
        T dequeue(); /// Removes the element at the front of the list
        T peek(); /// Added the peek to look at the front element before dequeue, does not remove element
        bool is_empty(); /// test if queue is empty, throws exception error if otherwise
        size_t size(); /// returns number of elements in the queue
        void clear(); /// removes all elements in the queue

    private:
        Array<T> queue_;
        size_t size_; /// Size of Queue
        size_t head_; /// Remove from head
        size_t tail_; /// Add things here

};

#include "Queue.cpp"

#endif //C___QUEUE_H
