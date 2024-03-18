#include "GameStateMachine.hpp"

StateMachine::StateMachine()
{
	currentState = 0;
}

void StateMachine::Init()
{

}

bool StateMachine::CompareState(const char* state_)
{

}

int StateMachine::GetState()
{

}

void StateMachine::SetState()
{

}

void StateMachine::Update()
{
#pragma region Input
	Input();
#pragma endregion

#pragma region Logical
	Logic();
#pragma endregion

#pragma region Render
	Render();
#pragma endregion
}

void StateMachine::Input()
{

}

void StateMachine::Logic()
{

}

void StateMachine::Render()
{

}