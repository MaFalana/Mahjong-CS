//
// Created by Malik Falana on 12/29/22.
//

#ifndef C___EMPTY_EXCEPTION_H
#define C___EMPTY_EXCEPTION_H

#include <stdexcept>
#include <exception>

class empty_exception : public std::exception
{
    public:
        empty_exception (void); /// Default constructor.
        empty_exception (const char * msg); ///Initializing constructor.

};


#endif //C___EMPTY_EXCEPTION_H
