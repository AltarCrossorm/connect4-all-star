#include "board.hpp"

Board::Board(void)
{
    cells = new cellState*[7];
    for(int i=0; i<7;i++)
    {
        cells[i] = new cellState[6];
    }

    for(int i=0; i<7;i++)
        for(int j=0;j<6;j++)
            cells[i][j] = cellState::NONE;
}