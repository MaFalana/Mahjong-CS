//
// Created by Malik Falana on 12/27/22.
//
#pragma once
#ifndef C___PLAYER_H
#define C___PLAYER_H

#include "Queue/Queue.h"
#include "Tile.h"

class Player
{
    public:
        Player(); /// Default constructor.
        Player(std::string name, SuitClass::Suit suit, size_t tiles); /// Initializing constructor.
        ~Player(); /// Destructor.
        SuitClass::Suit getSuit();
        const Array<Queue<Tile> >& getTiles(void) const;
        Tile getTile(size_t i);
        void generate(); /// Populates an array with 36 tiles
        void distribute(); /// Distributes tiles to designated queues
        void shuffle();
        std::string getName();
        Array<Queue<Tile> >tiles_;

    private:
        SuitClass::Suit suit_;
        std::string name_;
        Array<Queue<Tile> > generatedTiles_;

};


#endif //C___PLAYER_H
