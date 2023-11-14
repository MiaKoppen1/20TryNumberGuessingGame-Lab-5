#include "lab5.h"
#include <iostream>
#include <string>
#include <sstream>


void NumGame::welcomeMessage()
	{
	cout << "Welcome to the Number Guessing Game!" << endl; cout << endl;
	}

void NumGame::firstGuess()
	{
	int maxTries = 20;
	int randomNumber = rand() % 100 + 0; // 0 to 100
	int loss = 0;
	bool winGame = false;
	int guess;

	for (int tries = 0; tries < maxTries; ++tries) 
		{
		cout << "type in your guess: ";
		cin >> guess;
		cout << endl;

		if (guess != randomNumber) //if the guess is not equal to the random number
			{
			cout << "You guessed incorrectly, ";
			cout << "guess again" << endl;
			loss++;
			}
		else //if the number is correct
			{
			cout << "the answer was: " << randomNumber << endl;
			cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
			win++;
			winGame = true;
			break;
			}
		}

	}

void NumGame::playGame()
	{
	int maxTries = 20; //initialize maxTries
	int win = 0; //initiate win
	int loss = 0; //initiate loss
	int randomNumber = rand() % 100 + 0; // 0 to 100 
	bool winGame = false; //initiate winGame
	int guess; //declare guess
	int tries = 0; // Initialize tries
	int iwinGame = rand() % 10 + 1;
	int iloseGame = rand() % 10 + 1;
	int iplayAgain = rand() % 10 + 1;
		
	while(tries < maxTries) //while the number of attempts is less than 20
	{
		cout << "type in your guess: "; cin >> guess; cout << endl; //prompts the user to type in their guess

		if (guess != randomNumber)//if the guess is not equal to the random number
		{
			cout << "You guessed incorrectly, ";
			cout << "guess again" << endl;
			loss++;
		}

		else //if the number is correct, and the user won
		{
			winGame = true;
			switch (iwinGame) //if the user won the game, outputs 1 of 10 messages
			{
			case 1: cout << "CONGRATS! YOU WIN!" << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			case 2: cout << "you won! Wow! You're really good at this game!" << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			case 3: cout << "you won! great job! " << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			case 4: cout << "Looks like you got it right" << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			case 5:cout << "looks like you got a win" << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			case 6: cout << "hey you got it, that's great." << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			case 7: cout << "oh no! you won" << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			case 8: cout << "you beat me! rematch?" << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			case 9: cout << "wow, you won! did you cheat?" << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			case 10: cout << "well, I guess you won" << endl;
				cout << "the answer was: " << randomNumber << endl;
				cout << "you guessed the number in: " << (tries + 1) << "tries!" << endl;
				win++;
				break;
			}
		}
		tries++;
		}

	if (tries == maxTries)
		{
		cout << "last guess: ";
		cin >> guess;
		}
	if (!winGame) //if the user did not win the game
		{
		cout << endl; //put a space before the next line

		if (guess != randomNumber)
		switch (iloseGame) //display one of 10 messages if the user loses the game
		{
		case 1: cout << "CONGRATS! YOU LOOSE!" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
		case 2: cout << "you lost! wow! you really suck at this!" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
		case 3: cout << "YOU SUCK!" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
		case 4: cout << "LOL! YOU LOST :)" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
		case 5: cout << "mannnn :(" << " " << "you lost" << " " << "i was counting on you" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
		case 6: cout << "dang! you lost. " << " " << "maybe next time" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
		case 7: cout << "you lost! did you understand the game correctly? LOL" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
		case 8: cout << "LOL" << " " << "my dog could've won this game, stupid!" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
		case 9: cout << "of course you lost! lol" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
		case 10: cout << "whoops! better luck next time" << endl;
			cout << endl;
			cout << "the number was: " << randomNumber << "!" << endl; //the game is over, and outputs the number
			cout << endl;
			cout << "\033[1;31mGAME OVER\033[0m" << endl;
			cout << "total wins: "; cout << win; cout << "  ";
			cout << "total losses: "; cout << loss;
			break;
			}
		}
		}

void NumGame::playAgain() //if the user wants to play again, this function is called
	{
	cout << endl;
	int iplayAgain = rand() % 10 + 1;

	switch (iplayAgain) //outputs 1 of the 10 messages if the user wants to play again
	{
	case 1: cout << "alright! let's play again" << endl;
		break;
	case 2: cout << "yay!" << endl;
		break;
	case 3: cout << "this is so much fun!" << endl;
		break;
	case 4: cout << "starting a new game..." << endl;
		break;
	case 5: cout << "new game loading..." << endl;
		break;
	case 6: cout << "let's see if you win this time!" << endl;
		break;
	case 7: cout << "alright..." << endl;
		break;
	case 8: cout << "ok... game starting now" << endl;
		break;
	case 9: cout << "starting a new game now!" << endl;
		break;
	case 10: cout << "great!" << endl;
		break;
	}
	}


