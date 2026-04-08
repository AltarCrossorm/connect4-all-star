#include "board.hpp"

Board::Board(void)
{
    this->cells = new cellState*[BOARD_LENGH];
    for(int i = 0 ; i < BOARD_LENGH ; i++ )
    {
        this->cells[i] = new cellState[BOARD_HEIGHT];
    }

    for(int i=0; i<7;i++)
        for(int j=0;j<6;j++)
            cells[i][j] = cellState::NONE;
}