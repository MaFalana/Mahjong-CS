//
// Created by Malik Falana on 12/31/22.
//
#pragma once
#ifndef C___GAME_H
#define C___GAME_H

#include "Player.h"

template <typename T>
class Game
{
    public:
        typedef T type; /// Type definition of the type.
        Game(); /// Default Constructor
        ~Game(); /// Destructor
        virtual void runGame(void) = 0;
        virtual void endGame(void) = 0;

    protected:
        Player computer;
        Player player;
        Player currentPlayer;

};

//#include "Game.cpp"

#endif //C___GAME_H
