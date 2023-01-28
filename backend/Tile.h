//
// Created by Malik Falana on 12/24/22.
//
#pragma once

#ifndef C___TILE_H
#define C___TILE_H

#include <iostream>
#include "Suit.h"

class Tile
{
    public:
        Tile(); /// Default constructor
        Tile(SuitClass::Suit suit, int rank); /// Initializing constructor
        Tile(const Tile &t); /// Copy constructor
        ~Tile(); /// Destructor
        Tile& operator = (const Tile &rhs); /// Will allow blank  tile to be placed anywhere
        SuitClass::Suit getSuit();
        int getRank();
        bool is_faceUp() const;
        void flip(); //flips the tile

    private:
        SuitClass::Suit suit;
        int rank;
        bool state;
};


#endif //C___TILE_H
