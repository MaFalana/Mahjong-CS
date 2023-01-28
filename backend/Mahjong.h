//
// Created by Malik Falana on 12/27/22.
//
#pragma once
#ifndef C___MAHJONG_H
#define C___MAHJONG_H

#include "Stack/Stack.h"
#include "Queue/Queue.h"
#include "Game.h"
#include "Tile.h"

class Mahjong : public Game<Mahjong>
{
    public:
        Mahjong(); /// Default Constructor
        Mahjong(Player p, Player c, Player curr); /// Initializing Constructor
        ~Mahjong(); /// Destructor
        void runGame() override;
        void endGame() override;
        void makeMove();
        void setPlayer(); /// Sets or "switches" the current Player
        Player getPlayer(); /// Returns the current Player
        SuitClass::Suit checkTile(); /// Returns suit of dequeued tile
        //void attach(Observer o);
        //void detach(Observer o);
        void notify(); /// Notifies of a change in gameplay, such as player changed, move made, etc.
        Stack<Tile> freeTiles;
        Player computer;
        Player player;
        Player currentPlayer;


    private:


        //Observer observer;
};


#endif //C___MAHJONG_H
