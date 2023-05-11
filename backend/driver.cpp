//
// Created by Malik Falana on 12/30/22.
//
//#pragma once
#include "Mahjong.h"
//#include "Player.h"
//#include "Tile.h"
#include "Exception/empty_exception.h"

int main()
{
    std::cout << "First Check" << std::endl;
    Mahjong *newGame = new Mahjong();
//    Tile tile(Suit::CHARACTERS,1);
//    Player player("Player One", Suit::BAMBOO);
//    Player computer("Computer", Suit::CHARACTERS);
//    Player currentPlayer(player);
//    Mahjong *newGame = new Mahjong(player, computer, currentPlayer);
    std::cout << newGame->getPlayer().getName() << std::endl;

    newGame->runGame();
    //newGame->endGame();
    return 0;
}

//#include "Mahjong.cpp"
//#include "Player.cpp"
//#include "Tile.cpp"