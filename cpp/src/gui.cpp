#include "gui.hpp"
#include <iostream>

GUI::GUI(Board *board)
: gameBoard(board)
{}


void GUI::render(void)
{
        switch(this->state)
        {
        case GameState::MENU:
                std::cout << "Welcome to Connect4 C++ !" << std::endl;
                break;
        case GameState::GAME:
                break;
        default:
                this->clear();
                std::cout << "lmao this is bugged" << std::endl;
                break;
        }
}

void GUI::clear(void)
{
        std::system("clear");
}