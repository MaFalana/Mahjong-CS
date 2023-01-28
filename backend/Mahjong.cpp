//
// Created by Malik Falana on 12/27/22.
//

#include "Mahjong.h"

Mahjong::Mahjong():player("Player One", SuitClass::CIRCLES,9), computer("Player Two", SuitClass::CHARACTERS,9), currentPlayer(player)
{

}

Mahjong::Mahjong(Player p, Player c, Player curr): player(p), computer(c), currentPlayer(curr)
{

}

Mahjong::~Mahjong() {}

void Mahjong::runGame()
{
    std::cout << "Mahjohng Game begins" << std::endl;
    if (freeTiles.is_empty())
    {
        Tile blankTile(SuitClass::CIRCLES,1);
        freeTiles.push(blankTile);
    }

   // while(!freeTiles.is_empty())
    //{
        makeMove();
        std::cout << "makeMove Success" << std::endl;
        checkTile();
        setPlayer();
    //}
    //endGame();

}

void Mahjong::endGame()
{
    std::cout << "Mahjohng Game ends" << std::endl;
    freeTiles.clear();
}


void Mahjong::makeMove() //Work on selection may need a separate function
{
    Tile blankTile = freeTiles.top();
    size_t i = blankTile.getRank() - 1;
    freeTiles.pop(); //Tile is popped to make space
    Tile element = currentPlayer.tiles_[i].dequeue(); // Element in queue is dequeued and assigned to a variable
    freeTiles.push(element); // Dequeued element is pushed onto the stack
    freeTiles.top().flip(); //tile is now face-up
    notify(); // Notify the observer of the change in game state
}

SuitClass::Suit Mahjong::checkTile()
{
    if(freeTiles.is_empty())
    {
        //throw empty_exception("Stack is empty");
        throw std::out_of_range("Stack is empty");
    }
    Tile element = freeTiles.top();

    if (element.is_faceUp())
    {
        std::cout << "This tile is face-up" << std::endl;
    }
    else
    {
        std::cout << "This tile is face-down" << std::endl;
    }
    
    return element.getSuit();
}

void Mahjong::setPlayer()
{
    checkTile().getName() == currentPlayer.getSuit().getName() ? currentPlayer = computer : currentPlayer = player; // If stacked title is not a from the same suit as current player, switch players
    std::cout << "The current player is now " << currentPlayer.getName() << std::endl;
    notify(); // Notify the observer of the change in game state
}

Player Mahjong::getPlayer()
{
    std::cout << "The current player is now " << currentPlayer.getName() << std::endl;
    return currentPlayer;
}

//template <typename T>
//void Game<T>::attach(int o) {}
//
//template <typename T>
//void Game<T>::detach(int o) {}

void Mahjong::notify()
{
    std::cout << "Notification placeholder" << std::endl;
}