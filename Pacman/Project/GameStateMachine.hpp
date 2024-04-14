class StateMachine
{
private:
	int currentState;
	int nextState;
	void Start();
	void Input();
	void Logic();
	void Render();
	void End();
public:
	bool CompareState(const int state_);
	bool IsSameState();
	int GetState();
	int GetNextState();
	void SetState(int state_);
	StateMachine();
	void Init();
	void Update();
	void Close();
	~StateMachine() {}
};