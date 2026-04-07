#pragma once
#include "board.hpp"
#include "gui.hpp"
#include <string>

class Game
{
private:
        Board *board = nullptr;
        GUI *gui = nullptr;
        cellState playerTurn;

public:
        Game(void);
        void startGameLoop(void);
        short inputColumn(void);
        bool isValidInput(std::string input);
};
