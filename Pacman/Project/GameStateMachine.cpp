#include <iostream>
#include "raylib.h"	
#include "GameStateMachine.hpp"

#pragma region Constructor
StateMachine::StateMachine()
{
	currentState = -1;
	nextState = 0;
}
#pragma endregion
#pragma region Internal Functions

void StateMachine::Start()
{
	switch (currentState)
	{
	case 0:					//Portrait Animation
		std::cout << "Starting Portrait" << std::endl;
		break;
	case 1:					//Video Demostration
		std::cout << "Starting Video Demostration" << std::endl;
		break;
	case 2:					//Inserting Coin
		std::cout << "Starting Inserting Coin" << std::endl;
		break;
	case 3:					//Game
		std::cout << "Starting Game" << std::endl;
		break;
	case 4:					//Level Clear Animation
		std::cout << "Starting Level Clear Animation" << std::endl;
		break;
	case 5:					//Game Over
		std::cout << "Starting Game Over" << std::endl;
		break;
	}
}


void StateMachine::Input()
{
	switch (currentState)
	{
	case 0:					//Portrait Animation
		
		break;
	case 1:					//Video Demostration
		
		break;
	case 2:					//Inserting Coin
		
		break;
	case 3:					//Game
		
		break;
	case 4:					//Level Clear Animation
		
		break;
	case 5:					//Game Over
		
		break;
	}
	//std::cout << "Fuera" << std::endl;
	if (IsKeyPressed(KEY_ESCAPE)) nextState = -1;
	if (IsKeyPressed(KEY_KP_0)) nextState = 0;
	if (IsKeyPressed(KEY_KP_1)) nextState = 1;
	if (IsKeyPressed(KEY_KP_2)) nextState = 2;
	if (IsKeyPressed(KEY_KP_3)) nextState = 3;
	if (IsKeyPressed(KEY_KP_4)) nextState = 4;
	if (IsKeyPressed(KEY_KP_5)) nextState = 5;
}


void StateMachine::Logic()
{
	switch (currentState)
	{
	case 0:					//Portrait Animation
		break;
	case 1:					//Video Demostration
		break;
	case 2:					//Inserting Coin
		break;
	case 3:					//Game
		break;
	case 4:					//Level Clear Animation
		break;
	case 5:					//Game Over
		break;
	}
}


void StateMachine::Render()
{
	switch (currentState)
	{
	case 0:					//Portrait Animation
		break;
	case 1:					//Video Demostration
		break;
	case 2:					//Inserting Coin
		break;
	case 3:					//Game
		break;
	case 4:					//Level Clear Animation
		break;
	case 5:					//Game Over
		break;
	}
}

void StateMachine::End()
{
	
	switch (currentState)
	{
	case 0:					//Portrait Animation
		std::cout << "Ending Portrait Animation" << std::endl;
		break;
	case 1:					//Video Demostration
		std::cout << "Ending Video Demostration" << std::endl;
		break;
	case 2:					//Inserting Coin
		std::cout << "Ending Inserting Coin" << std::endl;
		break;
	case 3:					//Game
		std::cout << "Ending Game" << std::endl;
		break;
	case 4:					//Level Clear Animation
		std::cout << "Ending Level Clear Animation" << std::endl;
		break;
	case 5:					//Game Over
		std::cout << "Ending Game Over" << std::endl;
		break;
	default:
		break;
	}
	currentState = nextState;
}
#pragma endregion
#pragma region Public Functions
void StateMachine::Init()
{
	SetTargetFPS(60);
	InitWindow(224, 288, "Pacman");
}


void StateMachine::Update()
{
	Start();
	while (IsSameState())
	{
		Input();
		Logic();
		ClearBackground(BLACK);
		BeginDrawing();
		Render();
		EndDrawing();
	}
	End();
}


void StateMachine::Close()
{

}

bool StateMachine::CompareState(const int state_)
{
	if (nextState == state_) return true;
	return false;
}

bool StateMachine::IsSameState()
{
	if (currentState == nextState) return true;
	return false;
}


int StateMachine::GetState()
{
	return currentState;
}

int StateMachine::GetNextState()
{
	return nextState;
}

void StateMachine::SetState(const int state_)
{
	nextState = state_;
}
#pragma endregion