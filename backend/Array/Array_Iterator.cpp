//
// Created by Malik Falana on 12/29/22.
//

#include "Array_Iterator.h"

template <typename T>
Array_Iterator<T>::Array_Iterator(Array<T> &data):data_(data),cur_(0)
{

}

template <typename T>
Array_Iterator<T>::~Array_Iterator() {}

template <typename T>
void Array_Iterator<T>::advance()
{
    ++ cur_;
}

template <typename T>
bool Array_Iterator<T>::is_done()
{
    return cur_ >= data_.size();
}

template <typename T>
T &Array_Iterator<T>::operator*()
{
    return data_[cur_];
}

template <typename T>
T *Array_Iterator<T>::operator->()
{
    return data_[cur_];
}