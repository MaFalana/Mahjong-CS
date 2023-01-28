//
// Created by Malik Falana on 12/24/22.
//

#include "Array.h"

template <typename T>
Array<T>::Array():cur_(0),max_(0)
{

}

template <typename T>
Array<T>::Array(size_t length):Base_Array<T>(length),cur_(length),max_(length)
{

}

template <typename T>
Array<T>::Array(size_t length, T fill):Base_Array<T>(length, fill),cur_(length),max_(length)
{

}

template <typename T>
Array<T>::~Array()
{
    //delete[] data_;
}

template <typename T>
Array<T>::Array(const Array<T> &src)
{
    *this = src;
}

template <typename T>
size_t Array<T>::size() const
{
    return cur_;
}

template <typename T>
size_t Array<T>::max_size() const
{
    return max_;
}

template <typename T>
void Array<T>::resize(size_t new_size)
{
    if (new_size == cur_) {
        return;
    }

    if (new_size > max_)
    {
        Array *temp_arr = new Array<T>(new_size);
        for (size_t i = 0; i < max_; i++)
        {
            (*temp_arr)[i] = (*this)[i];
        }
        *this = *temp_arr;
        //delete temp_arr;
        max_ = new_size;
    }
    if (max_ >= new_size) {
        cur_= new_size;
    }
}

template <typename T>
const Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
    if (this != &rhs)
    {
        Base_Array<T>::operator=(rhs);
        //this->data_ = rhs.data_;
        this->cur_ = rhs.cur_;
        this->max_ = rhs.max_;
    }
    return *this;
}