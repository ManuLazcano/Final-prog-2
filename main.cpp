#include <raylib.h>
#include <string>

int main()
{
    const int gameWidth = 300;
    const int gameHeight = 600;
    const std::string gameName = "Sandtrix";
    Color darkBlue = { 44, 44, 127, 255};

    InitWindow(gameWidth, gameHeight, gameName.c_str());
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(darkBlue);

        EndDrawing();
    }

    CloseWindow();
}
