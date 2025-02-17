#ifndef GAME_H
#define GAME_H

#include <vector>
#include <random>

#include "Grid.h"
#include "Block.h"
#include "IBlock.h"
#include "JBlock.h"
#include "LBlock.h"
#include "OBlock.h"
#include "SBlock.h"
#include "TBlock.h"
#include "ZBlock.h"

class Game
{
    public:
        Grid grid;
        bool gameOver;

        Game();
        Block getRandomBlock();
        std::vector<Block> getAllBlocks();
        void draw();
        void handleInput();
        void moveBlockLeft();
        void moveBlockRight();
        void moveBlockDown();

    private:
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;

        bool isBlockOutside();
        void rotateBlock();
        void lockBlock();
        bool blockFits();
        void reset();
};

#endif // GAME_H
