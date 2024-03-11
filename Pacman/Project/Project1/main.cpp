#include "raylib.h"
#include <iostream>

Sound soundArray[10];

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    //Screen Settings
    int screenWidth = 224;
    int screenHeight = 256;
    

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    Texture2D pacmanSpriteSheet = LoadTexture("../Assets/Pacmanspritesheet.png");
    InitAudioDevice();

    soundArray[0] = LoadSound("resources/raylib_audio_resources/sound.wav");

    Music music = LoadMusicStream("resources/raylib_audio_resources/country.mp3");

    music.looping = true;
    float pitch = 0.5f;

    PlayMusicStream(music);
    

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    static double x = 120, y = 35;
    static double speed_x = 2, speed_y = 2;

    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        if (IsKeyDown(KEY_RIGHT)) x += speed_x;
        if (IsKeyDown(KEY_LEFT)) x -= speed_x;
        if (IsKeyDown(KEY_DOWN)) y += speed_y;
        if (IsKeyDown(KEY_UP)) y -= speed_y;

        if (IsKeyPressed(KEY_SPACE))
            PlaySound(soundArray[0]);
        //----------------------------------------------------------------------------------
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing(); //Prepares next drawing

        ClearBackground(RAYWHITE);

        EndDrawing(); //Ends drawing + updates inputs
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseAudioDevice();
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
// raylib example source code