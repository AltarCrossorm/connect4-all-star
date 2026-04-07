#pragma once
#include "board.hpp"


class GUI
{
private:
        Board *gameBoard = nullptr;

public:
        GUI(Board *board);

        void render(void);
};
