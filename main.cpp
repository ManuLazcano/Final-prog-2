#include <raylib.h>
#include <string>
#include "Grid.h"

int main()
{
    const int gameWidth = 300;
    const int gameHeight = 600;
    const std::string gameName = "Sandtrix";
    Color darkBlue = { 44, 44, 127, 255};

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][9] = 7;
    grid.print();

    InitWindow(gameWidth, gameHeight, gameName.c_str());
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.draw();

        EndDrawing();
    }

    CloseWindow();
}
