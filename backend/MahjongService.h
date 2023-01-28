#pragma once

#include <iostream>
#include <restbed>
#include "Mahjong.h"

class MahjongService
{
    public:
        MahjongService(); //Default constructor
        ~MahjongService(); //destructor
        void get_player(const shared_ptr<Session> session); /// player: A GET request to this resource will return the current player in JSON format.
        void make_move(const shared_ptr<Session> session);  /// move: A PUT request to this resource will simulate the "making a move" in the game and update the game state
        void getPlayer1(const shared_ptr<Session> session);
        void getPlayer2(const shared_ptr<Session> session);
        Mahjong game;

};

// In this example, the web server is running in the same process as the game code.