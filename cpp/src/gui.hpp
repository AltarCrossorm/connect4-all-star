#pragma once
#include "board.hpp"

enum class GameState 
{
        MENU,
        GAME,
};


class GUI
{
private:
        Board *gameBoard = nullptr;
        GameState state = GameState::MENU;

public:
        GUI(Board *board);

        void render(void);
        void clear(void);
        
        void drawBoard(void);
        void drawMenu(void);
};
