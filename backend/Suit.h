//
// Created by Malik Falana on 12/27/22.
//
#pragma once
#ifndef C___SUIT_H
#define C___SUIT_H

#include <iostream>
#include <string>

// enum class Suit
// {
//     BAMBOO,
//     CHARACTERS,
//     CIRCLES,
//     BLANK
// };

namespace SuitClass
{

    const std::string BAMBOO = "BAMBOO";
    const std::string CHARACTERS = "CHARACTERS";
    const std::string CIRCLES = "CIRCLES";
    const std::string BLANK = "BLANK";

    class Suit
    {
        public:
            Suit(); /// Default constructor
            Suit(std::string name); /// Initializing constructor
            ~Suit(); /// Destructor
            std::string getName(); /// Returns name of suit
        private:
            std::string name;
    };
}

#include "Suit.inl"

#endif //C___SUIT_H
