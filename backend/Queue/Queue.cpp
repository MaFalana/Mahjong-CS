//
// Created by Malik Falana on 12/24/22.
//

#include "Queue.h"

template <typename T>
Queue<T>::Queue():queue_(Array<T>(10)),size_(0),head_(0),tail_(0)
{

}

template <typename T>
Queue<T>::Queue(const Queue &q)
{
    *this = q;
}

template <typename T>
Queue<T>::~Queue()
{

}

template <typename T>
const Queue<T>& Queue<T>::operator = (const Queue<T> &rhs)
{
    if (this != &rhs)
    {
        this->queue_ = rhs.queue_;
        this->size_ = rhs.size_;
        this->head_ = rhs.head_;
        this->tail_ = rhs.tail_;
    }
    return *this;
}

template <typename T>
void Queue<T>::enqueue(T element)
{
    if (size_ <= queue_.size())
    {
        queue_.resize(size_ + 1); // Resizes array to make room for new element
    }
    queue_[tail_] = element;
    tail_ += 1;
    ++size_;
}

template <typename T>
T Queue<T>::dequeue()
{
    if (is_empty())
    {
        //throw empty_exception("Queue is empty.");
        throw std::out_of_range("Queue is empty");
    }
    T element = queue_[head_]; // head is assigned to a template variable
    head_ += 1; // Updates queue to next element in line
    --size_; // size is adjusted to reflect the change
    return element; // element is returned
}

template <typename T>
T Queue<T>::peek()
{
    if (is_empty())
    {
        //throw empty_exception("Queue is empty.");
        throw std::out_of_range("Queue is empty");
    }
    return queue_[head_];
}

template <typename T>
bool Queue<T>::is_empty()
{
    return size_ == 0;
}

template <typename T>
size_t Queue<T>::size()
{
    return size_;
}


template <typename T>
void Queue<T>::clear()
{
    queue_.resize(0);
    head_ = 0;
    tail_ = 0;
}