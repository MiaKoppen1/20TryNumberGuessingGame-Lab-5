//include at least one Do-While Loop & at least one Switch Statement.

/*
3rd semester, 1st year
Due: November 10th
Lab #5
number-guessing game where users get 20 tries. If user wins, a random message is output to the
screen and vice versa. Stats are also output.
If the user wants to play again, a random message is output and the game starts over.
if the user quits, the program ends.
*/

#include <ctime> 
#include <cstdlib> 
#include "lab5.h" //to include the header file
#include <iostream>
#include <string>
#include <sstream> //to include string stream.

using namespace std;

int main()
{
	NumGame numbergame; //numbergame object of class NumGame created.

	srand(time(0)); // Seed 

	string GAMEOVER = "GAME OVER";

	numbergame.welcomeMessage(); //outputs the welcome message
	numbergame.firstGuess(); //asks user for the first guess
	numbergame.playGame(); //starts the game

	string goAgain;
	cout << endl;
	cout << "do you want to have another go?" << endl;
	cout << "\033[1;32myes\033[0m "; //outputs yes in green
	cout << "or ";
	cout << "\033[1;31mno?\033[0m"; //outputs no in red
	cout << " "; cin >> goAgain; //asks the user to input yes or no

	if (goAgain == "yes") //if the user wants to play again
	{
		numbergame.playAgain(); //gamee starts over and random message is output to the screen
		cout << endl;
		main(); //go back to the beginning
	}
	else //if the user says no to playing again
	{
		cout << endl;
		cout << "\033[1;31mGAME OVER \033[0m" << endl; //says game over 
	}

	return 0;
}

