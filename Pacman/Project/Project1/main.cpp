#include "raylib.h"
#include "GameManager.hpp"
#include <iostream>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
#pragma region Variables
    Sound soundArray[10];
    float screenWidth = 224;
    float screenHeight = 256;
#pragma endregion
#pragma region Awake
    InitAudioDevice();
#pragma endregion
#pragma region Start
    SetTargetFPS(60);
#pragma endregion
#pragma region Loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
#pragma region Input

#pragma endregion

#pragma region Early Update

#pragma endregion

#pragma region Update

#pragma endregion

#pragma region Late Update

#pragma endregion
    }

#pragma endregion
#pragma region Render

#pragma endregion




    
    
    //InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    

    //soundArray[0] = LoadSound("resources/raylib_audio_resources/sound.wav");

    //Music music = LoadMusicStream("resources/raylib_audio_resources/country.mp3");

    //music.looping = true;
    //float pitch = 0.5f;

    //PlayMusicStream(music);
    

                   // Set our game to run at 60 frames-per-second
    ////--------------------------------------------------------------------------------------

    //// Main game loop

    //while (!WindowShouldClose())    // Detect window close button or ESC key
    //{
    //    // Update
    //    //----------------------------------------------------------------------------------
    //    // TODO: Update your variables here
    //    if (IsKeyDown(KEY_RIGHT)) x += speed_x;
    //    if (IsKeyDown(KEY_LEFT)) x -= speed_x;
    //    if (IsKeyDown(KEY_DOWN)) y += speed_y;
    //    if (IsKeyDown(KEY_UP)) y -= speed_y;

    //    if (IsKeyPressed(KEY_SPACE))
    //        PlaySound(soundArray[0]);
    //    //----------------------------------------------------------------------------------
    //    // Draw
    //    //----------------------------------------------------------------------------------
    //    BeginDrawing(); //Prepares next drawing

    //    ClearBackground(RAYWHITE);

    //    EndDrawing(); //Ends drawing + updates inputs
    //    //----------------------------------------------------------------------------------
    //}

    //// De-Initialization
    ////--------------------------------------------------------------------------------------
    //CloseAudioDevice();
    //CloseWindow();        // Close window and OpenGL context
    ////--------------------------------------------------------------------------------------

    //return 0;
}