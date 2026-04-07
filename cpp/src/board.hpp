#pragma once

enum class cellState
{
        NONE,
        P1,
        P2,
};

class Board
{
        cellState **cells = nullptr;

public:
        Board(void);
        ~Board(void);

        bool insert(short column, cellState player);

        bool isColAvailable(short column);

        cellState whoWins(void);
};
