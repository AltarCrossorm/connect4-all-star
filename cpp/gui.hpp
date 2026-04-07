#pragma once

enum class cellState
{
        NONE,
        P1,
        P2,
}

class GUI
{
private:
        cellState board[7][6] = nullptr;

public:
        GUI(void);
        void render(void);
        
}