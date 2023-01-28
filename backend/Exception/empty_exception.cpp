//
// Created by Malik Falana on 12/29/22.
//

#include "empty_exception.h"


empty_exception::empty_exception(void):std::exception() { }

empty_exception::empty_exception(const char *msg):std::exception(msg) { }