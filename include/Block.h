#ifndef BLOCK_H
#define BLOCK_H

#include <vector>
#include <map>

#include "Position.h"
#include "colors.h"

/**
* 'id': C�mo se representa la figura en el grid
* 'cells': Cada �ndice representa un estado de rotaci�n en el que puede estar la figura
*/

class Block
{
    public:
        int id;
        std::map<int, std::vector<Position>> cells;

        Block();
        void draw();
        void move(int rows, int columns);
        std::vector<Position> getCellPositions();
        void rotate();
        void undoRotation();

    private:
        int cellSize;
        int rotationState;
        std::vector<Color> colors;
        int rowOffset;
        int columnOffset;
};

#endif // BLOCK_H
