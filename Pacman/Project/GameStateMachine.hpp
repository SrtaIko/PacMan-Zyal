class StateMachine
{
private:
	int currentState;
	void Input();
	void Logic();
	void Render();
public:
	bool CompareState(const char *state_);
	int GetState();
	void SetState();
	StateMachine();
	void Init();
	void Update();
	~StateMachine() {}
};