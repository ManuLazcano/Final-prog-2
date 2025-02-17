#include <raylib.h>
#include <string>

#include "Game.h"

double lastUpdateTime = 0;

bool eventTriggered(double interval) {
    double currentTime = GetTime();

    if(currentTime - lastUpdateTime >= interval) {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main()
{
    const int gameWidth = 300;
    const int gameHeight = 600;
    const std::string gameName = "Sandtrix";
    Color darkBlue = { 44, 44, 127, 255};

    Game game = Game();
    const double milliseconds = 0.2;

    InitWindow(gameWidth, gameHeight, gameName.c_str());
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        game.handleInput();

        if(eventTriggered(milliseconds)) {
            game.moveBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkBlue);
        game.draw();
        EndDrawing();
    }

    CloseWindow();
}
