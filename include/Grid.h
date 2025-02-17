#ifndef GRID_H
#define GRID_H

#include <vector>
#include <raylib.h>

class Grid
{
    public:
        int grid[20][10];

        Grid();
        void print();
        void draw();
        bool isCellOutside(int row, int column);

    protected:

    private:
        int numRows;
        int numCols;
        int cellSize;
        std::vector<Color> colors;

        void initialize();
};

#endif // GRID_H
