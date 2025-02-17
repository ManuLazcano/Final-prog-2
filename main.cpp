#include <raylib.h>
#include <string>

#include "Game.h"

int main()
{
    const int gameWidth = 300;
    const int gameHeight = 600;
    const std::string gameName = "Sandtrix";
    Color darkBlue = { 44, 44, 127, 255};
    Game game = Game();

    InitWindow(gameWidth, gameHeight, gameName.c_str());
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        game.handleInput();
        BeginDrawing();
        ClearBackground(darkBlue);
        game.draw();
        EndDrawing();
    }

    CloseWindow();
}
