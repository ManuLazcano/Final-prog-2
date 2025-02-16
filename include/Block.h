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

    private:
        int cellSize;
        int rotationState;
        std::vector<Color> colors;
};

#endif // BLOCK_H
