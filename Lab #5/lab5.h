#ifndef NUM_GAME
#define NUM_GAME

using namespace std;

class NumGame 
{
public:
	void welcomeMessage();
	void firstGuess();
	void playGame();
	void playAgain();

	int guess;
	int maxTries = 20;
	int tries = 0; //initializing the tries
	int win = 0;
	int loss = 0;
	bool winGame;
	bool loseGame;

private:

};
#endif //!NUMGAME