#include "raylib.h"
#include "GameStateMachine.hpp"
#include <iostream>

int main()
{
#pragma region Variables
	StateMachine game;
#pragma endregion
#pragma region Game Loop
	game.Init();
	while (WindowShouldClose() || game.GetNextState() != -1)
	{
		game.Update();
	}
	game.Close();
}