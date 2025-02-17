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
        bool gameOver;
        int score;
        Music backgroundMusic;

        Game();
        ~Game();
        Block getRandomBlock();
        std::vector<Block> getAllBlocks();
        void draw();
        void handleInput();

        void moveBlockDown();

    private:
        Grid grid;
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
        Sound clearSound;
        Sound gameoverSound;

        void moveBlockLeft();
        void moveBlockRight();
        bool isBlockOutside();
        void rotateBlock();
        void lockBlock();
        bool blockFits();
        void reset();
        void updateScore(int linesCleared, int moveDownPoints);
};

#endif // GAME_H
