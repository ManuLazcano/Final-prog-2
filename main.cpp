#include <raylib.h>
#include <string>
#include <iostream>

#include "Game.h"
#include "colors.h"

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
    const int gameWidth = 500;
    const int gameHeight = 620;
    const std::string gameName = "Sandtrix";

    InitWindow(gameWidth, gameHeight, gameName.c_str());
    SetTargetFPS(60);

    Game game = Game();
    const double milliseconds = 0.2;
    // Variables relacionadas con la UI
    Font defaultFont = GetFontDefault();
    double fontSize = 24;
    double spacing = 2;
    Vector2 positionScoreText = {365, 15};
    Vector2 positionNextText = {370, 175};
    Vector2 positionGameOverText = {330, 450};
    Rectangle positionRectangleScore = {320, 55, 170, 60};
    Rectangle positionRectangleNextBlock = {320, 215, 170, 180};
    double roundness = 0.3;
    double segments = 6;

    while(!WindowShouldClose()) {
        game.handleInput();
        if(eventTriggered(milliseconds)) {
            game.moveBlockDown();
        }

        BeginDrawing();

        ClearBackground(darkBlue);
        DrawTextEx(defaultFont, "Score", positionScoreText, fontSize, spacing, WHITE);
        DrawTextEx(defaultFont, "Next", positionNextText, fontSize, spacing, WHITE);
        if(game.gameOver) {
            DrawTextEx(defaultFont, "GAME OVER", positionGameOverText, fontSize, spacing, WHITE);
        }
        DrawRectangleRounded(positionRectangleScore, roundness, segments, lightBlue);

        char scoreText[10];
        sprintf(scoreText, "%d", game.score);
        Vector2 textSize = MeasureTextEx(defaultFont, scoreText, fontSize, spacing);
        DrawTextEx(defaultFont, scoreText, {320 + (170 - textSize.x)/2, 65}, fontSize, spacing, WHITE);

        DrawRectangleRounded(positionRectangleNextBlock, roundness, segments, lightBlue);

        game.draw();

        EndDrawing();
    }

    CloseWindow();
}
