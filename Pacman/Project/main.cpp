#include "raylib.h"
#include "GameStateMachine.hpp"

void main()
{
#pragma region Variables
	StateMachine game;
#pragma endregion

	SetTargetFPS(60);
	game.Init();
	while (game.CompareState(0) && !IsKeyPressed(KEY_ESCAPE))
	{
		game.Update();
	}
}