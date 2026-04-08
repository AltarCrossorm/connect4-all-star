#pragma once

constexpr short BOARD_HEIGHT = 6;
constexpr short BOARD_LENGH = 7;

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

        cellState** getBoard(void);
        bool insert(short column, cellState player);
        bool isColNonFull(short column);
        cellState whoWins(void);
};
