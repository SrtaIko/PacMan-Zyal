#pragma once

enum class GameState { MAIN_MENU, PLAYING, SETTINGS, CREDITS };

class Game {


private:
    GameState state;
    int gameState;
    Level* level;
    Texture2D img_menu;


};