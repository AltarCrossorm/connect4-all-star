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
                this->drawBoard();
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

void GUI::drawBoard(void)
{
        for(int i = 0 ; i < BOARD_HEIGHT ; i++ )
        {
                std::cout << "|";
                for(int j = 0 ; j < BOARD_LENGH ; j++ )
                        switch(this->gameBoard->getBoard()[j][i])
                        {
                        case cellState::P1:
                                std::cout << " X ";
                                break;
                        case cellState::P2:
                                std::cout << " O ";
                                break;
                        case cellState::NONE:
                                std::cout << "   ";
                                break;
                        default:
                                std::cout << " ? ";
                                break;
                        }
                std::cout << "|" << std::endl;
        }
        std::cout << "+";
        for(int i = 0 ; i < BOARD_LENGH ; i++ )
                std::cout << "---";
        std::cout << "+";
}

void GUI::drawMenu(void)
{

}