#include "game.hpp"

Game::Game(void)
:board(new Board()),gui(new GUI(this->board))
{}

void Game::startGameLoop(void)
{
        this->gui->clear();
        this->gui->render();
}

