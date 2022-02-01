#include "raylib.h"
#include <iostream>

int windowWidth{800}, windowHeight{450};
int circle_x{200}, circle_y{200};
int axe_x{300}, axe_y{0};

int axeDeltaY{10};

int main()
{
    InitWindow(windowWidth, windowHeight, "Game Window");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic begins

        DrawRectangle(axe_x, axe_y, 50, 50, RED);
        DrawCircle(circle_x, circle_y, 25, BLUE);
        
        // move the axe
        axe_y += axeDeltaY;
        if (axe_y > 450 || axe_y < 0)
        {
            axeDeltaY = -axeDeltaY;
        }

        if (IsKeyDown(KEY_D) && circle_x < windowWidth)
        {
            circle_x += 1;
        }
        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 1;
        }
        EndDrawing();
    }
}