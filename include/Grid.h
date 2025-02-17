#ifndef GRID_H
#define GRID_H

#include <vector>
#include <raylib.h>

class Grid
{
    public:
        int grid[20][10];

        Grid();
        void initialize();
        void print();
        void draw();
        bool isCellOutside(int row, int column);
        bool isCellEmpty(int row, int column);
        int clearFullRows();

    private:
        int numRows;
        int numCols;
        int cellSize;
        std::vector<Color> colors;

        bool isRowFull(int row);
        void clearRow(int row);
        void moveRowDown(int row, int numRows);
};

#endif // GRID_H
