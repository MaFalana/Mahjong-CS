//
// Created by Malik Falana on 12/24/22.
//

#include "Base_Array.h"

template <typename T>
Base_Array <T>::Base_Array(void):cur_(0),data_(new T[0])
{

}

template <typename T>
Base_Array<T>::Base_Array(size_t length):cur_(length),data_(new T[length])
{

}

template <typename T>
Base_Array<T>::Base_Array(size_t length, T fill):cur_(length),data_(new T[length])
{
    this->fill(fill); // fill the array with the char passed in.
}

template <typename T>
Base_Array<T>::Base_Array(const Base_Array& array):cur_(array.size_),data_(new T[array.size_])
{
    // copy data of the passed in array.
    for (size_t i = 0; i < cur_; i++)
    {
        data_[i] = array[i];
    }
}

template <typename T>
Base_Array<T>::~Base_Array(void)
{
    delete[] data_;
    data_ = nullptr;
}

template <typename T>
const Base_Array<T>& Base_Array<T>::operator = (const Base_Array<T> & rhs)
{
    if (this != &rhs)
    {
        cur_ = rhs.cur_;
        data_ = new T[cur_];
        for (size_t i = 0; i < cur_; i++)
        {
            data_[i] = rhs[i];
        }
    }
    return *this;
}

template <typename T>
size_t Base_Array <T>::size (void) const
{
    return this->cur_size_;
}

template <typename T>
T& Base_Array<T>::operator [] (size_t index)
{
    if (index >= cur_|| index < 0)
    {
        throw std::out_of_range("index is invalid. Index is out of range.");
    }
    return data_[index]; //a value with the same type as the template is returned
}

template <typename T>
const T& Base_Array<T>::operator [] (size_t index) const
{
    if (index >= cur_ || index < 0)
    {
        throw std::out_of_range("index is invalid. Index is out of range.");
    }
    return data_[index]; //a value with the same type as the template is returned

    //T(index);
}

template <typename T>
T Base_Array<T>::get(size_t index) const
{
    if (index >= cur_ || index < 0)
    {
        throw std::out_of_range("Index is out of range.");
    }

    return data_[index];
}

template <typename T>
void Base_Array<T>::set(size_t index, T value)
{
    if (index >= cur_ || index < 0)
    {
        throw std::out_of_range("Index is out of range.");
    }

    data_[index] = value;
}

template <typename T>
int Base_Array<T>::find(T value) const
{

//    if (index >= size_ || index < 0)
//    {
//        throw std::out_of_range("Index is out of range.");
//    }

    for (size_t i = 0; i < cur_; i++)
    {
        if (data_[i] == value)
        {
            return i;
        }
    }

    return -1; /// value not found.
}

template <typename T>
int Base_Array<T>::find(T value, size_t start) const
{

    if (start >= cur_ || start < 0)
    {
        throw std::out_of_range("Index is out of range.");
    }

    for (size_t i = start; i < cur_; i++)
    {
        if (data_[i] == value)
        {
            return i;
        }
    }

    return -1; /// value not found.
}

template <typename T>
bool Base_Array<T>::operator == (const Base_Array<T>& rhs) const
{
    if (this == &rhs)
    {
        return true;
    }

    if (cur_ != rhs.size_) // if the array current sizes do not match
    {
        return false;
    }

    for (size_t i = 0; i < cur_; i++) // if the data points do not match accordingly
    {
        if (data_[i] != rhs[i])
        {
            return false;
        }
    }
    return true;
}

template <typename T>
bool Base_Array<T>::operator != (const Base_Array<T> &rhs) const
{
    return !(*this == rhs);
}

template <typename T>
void Base_Array<T>::fill(T element)
{
    for (size_t i = 0; i < cur_; i++)
    {
        data_[i] = element;
    }
}
