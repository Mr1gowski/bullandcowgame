#pragma once
#include <iostream>
#include <string>
#include "main.h"


void Welcome()
{
	// introduce the game
	constexpr int numberofletter = 5;
	std::cout << "Welcome to bulls and cows"
		 <<",have a fun\n";
	std::cout << "Can you guess the " 
		 << numberofletter 
		 << " letter isogram i am thinking of?";
}


std::string GetGuessandPrint()
{
	//asking about guess from the player
	std::cout << "\nEnter a guess: ";
	std::string Guess = "";
	getline(std::cin, Guess);

	return Guess;
}

void Playgame()
{
	// lop whitch asking about solution 5 times
	constexpr int TURNS_NUMBER = 5;
	
	for (int i = 0; i<TURNS_NUMBER; i++)
	{
		std::string Guess=GetGuessandPrint(); 
		std::cout << "Your guess was: " << Guess << std::endl;
	}
		
}


bool Asktoplayagain()
{
	std::cout << "Do you want play again? ";
	char answ;
	std::cin >> answ;
	return answ == 'y' || (answ == 'Y');

}
