//
// Created by Malik Falana on 12/24/22.
//

#include "Tile.h"

Tile::Tile(): suit(SuitClass::BAMBOO), rank(1), state(0) //tiles should be face down when generated
{

}

Tile::Tile(SuitClass::Suit suit, int rank)
{
    this->suit = suit;
    this->rank = rank;
}

Tile::Tile(const Tile &t): suit(t.suit), rank(t.rank), state(t.state)
{

}

Tile::~Tile()
{

}

Tile& Tile::operator=(const Tile &rhs)
{
    suit = rhs.suit;
    rank = rhs.rank;
    state = rhs.state;
    return *this;
}

SuitClass::Suit Tile::getSuit()
{
    return suit;
}


int Tile::getRank()
{
    return rank;
}

bool Tile::is_faceUp() const
{
    return state == 1; //check for whether tile is face-up
}

void Tile::flip()
{
    state = !state; //toggles state of tile
}