class StateMachine
{
	enum State
	{
		Intro,
		NotCoinGameplay,
		InsertingCoins,
		Game,
	};
private:
	State currentState;
public:
	void Init();
	void Update();
};