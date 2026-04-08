#include "game.hpp"
#include <iostream>

Game::Game(void)
:board(new Board()),gui(new GUI(this->board))
{}

void Game::startGameLoop(void)
{
        this->gui->clear();
        this->gui->render();
}

short Game::inputColumn(void)
{
        std::string ret;
        int retI;
        std::cin >> ret;
        try {
                retI = stoi(ret);
        }
        catch(std::invalid_argument const& ex)
        {
                return -1;
        }
        catch(std::out_of_range const& ex)
        {
                return -1;
        }

        return retI;
}

bool Game::isValidInput(short input)
{
        if (input < 1 || input > 7)
                return false;
        
        return this->board->isColNonFull(input);
}
