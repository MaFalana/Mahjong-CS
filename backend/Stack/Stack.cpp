//
// Created by Malik Falana on 12/24/22.
//

#include "Stack.h"


template <typename T>
Stack<T>::Stack():stack_(Array<T>()), size_(0)
{

}

template <typename T>
Stack<T>::Stack(const Stack<T> &s)
{
    *this = s;
}

template <typename T>
Stack<T>::~Stack()
{

}

template <typename T>
const Stack<T> &Stack<T>::operator=(const Stack<T> &rhs)
{
    if (this != rhs)
    {
        this->stack_size = rhs.stack_size_;
    }
    return *this;
}

template <typename T>
void Stack<T>::push(T element)
{
    if (size_ <= stack_.size())
    {
        stack_.resize(size_ + 1); // Resizes array to make room for new element
    }
    stack_[size_] = element;
    ++size_;
}

template <typename T>
void Stack <T>::pop(void)
{
    if (is_empty())
    {
        //throw empty_exception();
        throw std::out_of_range("Stack is empty");
    }
    --size_;
}

template <typename T>
T Stack<T>::top() const
{
    if (is_empty()) //check if empty
    {
        //throw empty_exception("Stack is empty.");
        throw std::out_of_range("Stack is empty");
    }
    return stack_[0];
}

template <typename T>
bool Stack<T>::is_empty() const
{
    return size_ == 0;
}

template <typename T>
size_t Stack<T>::size() const
{
    return size_;
}

template <typename T>
void Stack <T>::clear (void)
{
    stack_.resize(0);
    size_ = 0;
}