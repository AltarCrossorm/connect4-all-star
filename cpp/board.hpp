#pragma once

enum class cellState
{
        NONE,
        P1,
        P2,
}

class Board
{
        cellstate cells[7][6];

public:
        Board(void);

        bool insert(short column, cellstate player);

        bool isColAvailable(short column);

        cellState whoWins(void);
}
