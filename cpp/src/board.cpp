#include "board.hpp"

Board::Board(void)
{
    this->cells = new cellState*[BOARD_LENGH];
    for(int i = 0 ; i < BOARD_LENGH ; i++ )
    {
        this->cells[i] = new cellState[BOARD_HEIGHT];
    }

    for(int i = 0 ; i < BOARD_LENGH ; i++ )
        for(int j = 0 ; j < BOARD_HEIGHT ; j++ )
            this->cells[i][j] = cellState::NONE;
}

Board::~Board(void)
{
    
    for(int i = 0 ; i < BOARD_LENGH ; i++ )
    {
        delete this->cells[i];
    }
    delete this->cells;
    this->cells = nullptr;
}

cellState** Board::getBoard(void)
{
    return this->cells;
}


bool Board::insert(short column, cellState player)
{
    if(isColNonFull(column))
    {
        for(int i = 0 ; i < BOARD_HEIGHT ; i++ )
        {
            if(i == BOARD_HEIGHT - 1 || this->cells[column][i+1] != cellState::NONE)
            {
                this->cells[column][i] = player;
                return true;
            }
        }
    }
    return false;
}

bool Board::isColNonFull(short column)
{
    return this->cells[column][0] != cellState::NONE ? true : false;
}

cellState Board::whoWins(void)
{

}

