#pragma once
#include "board.hpp"
#include <string>

class Game
{
private:
        Board *board = nullptr;
        GUI *gui = nullptr;
        cellState playerTurn;

public:
        Game(void);
        short inputColumn(void);
        bool isValidInput(string input)
        
}
