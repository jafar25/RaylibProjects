#include "raylib.h"
#include <iostream>

int windowWidth{350}, windowHeight{200};

bool num{true};

int main()
{
    InitWindow(windowWidth, windowHeight, "Game Window");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
}