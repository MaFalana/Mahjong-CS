//
// Created by Malik Falana on 12/27/22.
//

#include "Player.h"

Player::Player():suit_(),tiles_(9),name_("Player One"),generatedTiles_(1)
{
    generate();
    shuffle();
    distribute();
}

Player::Player(std::string name, SuitClass::Suit suit, size_t tiles):suit_(suit),tiles_(tiles),name_(name),generatedTiles_(1)
{
    generate();
    shuffle();
    distribute();
}


Player::~Player() {}

SuitClass::Suit Player::getSuit()
{
    return suit_;
}

const Array<Queue<Tile> >& Player::getTiles() const
{
    return tiles_;
}

Tile Player::getTile(size_t i)
{
    return tiles_[i].peek();
}

std::string Player::getName()
{
    return name_;
}

void Player::generate()
{
    for(size_t i = 0; i < 4; ++i)
    {
        for(size_t j = 1; j < 10; ++j) //Fill deck with tiles from two suits
        {
            Tile set1(suit_,j);
            generatedTiles_[0].enqueue(set1);
        }
    }
}

void Player::shuffle() 
{
    //i should use some kind of sort like bubble or quick
}

void Player::distribute()
{
    for(size_t i = 0; i < 9; ++i)
    {
        for(size_t h = 0; h < 4; ++h) //Fills a row with 4 tiles
        {
            Tile element = generatedTiles_[0].dequeue();
            tiles_[i].enqueue(element);
        }
    }
}