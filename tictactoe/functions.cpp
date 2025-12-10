#include"functions.h"
#include <vector>
#include <iostream>
#include <array>
#include <string>


//std::set<std::pair<int, int>> playedPositions; //bad boy (no global vars)


void displayBoard(char gameboard[4][4])
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			std::cout << gameboard[i][j] << " ";
		}
		std::cout << "\n";
	}
}

void playerTurn(char gameboard[4][4], int player, std::vector<std::string> &playedPositions)
{
	bool turn = true;
	std::string input{};
	char symbol{};
	
	
	if (player == 1)
	{
		symbol = 'O';
	}
	else if (player == 2)
	{
		symbol = 'X';
	}
	while (turn)
	{
		std::getline(std::cin, input);
		if (std::find(playedPositions.begin(), playedPositions.end(), input) != playedPositions.end())
		{
			std::cout << "That position has already been taken. Please try again\n";
		}
		else if (input == "a1")
		{
			gameboard[1][1] = symbol;
			turn = false;
		}

		else if (input == "a2")
		{
			gameboard[2][1] = symbol;
			turn = false;
		}
		else if (input == "a3")
		{
			gameboard[3][1] = symbol;
			turn = false;
		}
		else if (input == "b1")
		{
			gameboard[1][2] = symbol;
			turn = false;
		}
		else if (input == "b2")
		{
			gameboard[2][2] = symbol;
			turn = false;
		}
		else if (input == "b3")
		{
			gameboard[3][2] = symbol;
			turn = false;
		}
		else if (input == "c1")
		{
			gameboard[1][3] = symbol;
			turn = false;
		}
		else if (input == "c2")
		{
			gameboard[2][3] = symbol;
			turn = false;
		}
		else if (input == "c3")
		{
			gameboard[3][3] = symbol;
			turn = false;
		}
		else
		{
			std::cout << "That is not a valid input... try again\n";
		}

		
	}
	playedPositions.push_back(input);
}

bool checkForWin(char gameboard[4][4], int player)
{
	if (((gameboard[1][1] == gameboard[2][2] && gameboard[1][1] == gameboard[3][3] && gameboard[1][1] != ' ') || 
		(gameboard[1][1] == gameboard[1][2] && gameboard[1][1] == gameboard[1][3] && gameboard[1][1] != ' ')
		|| (gameboard[1][1] == gameboard[2][1] && gameboard[1][1] == gameboard[3][1] && gameboard[1][1] != ' ') ||
		(gameboard[3][1] == gameboard[2][2] && gameboard[3][1] == gameboard[1][3] && gameboard[3][1] != ' ')
		|| (gameboard[2][1] == gameboard[2][2] && gameboard[2][1] == gameboard[2][3] && gameboard[2][1] != ' ') || 
		(gameboard[3][1] == gameboard[3][2] && gameboard[3][1] == gameboard[3][3] && gameboard[3][1] != ' ')
		|| (gameboard[1][2] == gameboard[2][2] && gameboard[3][2] == gameboard[1][2] && gameboard[1][2] != ' ') ||
		(gameboard[1][3] == gameboard[2][3] && gameboard[1][3] == gameboard[3][3] && gameboard[1][3] != ' '))
		)
	{
		
		std::cout << "Player " << player << " wins! \n";
		return true;
	
	}
	else if (gameboard[1][1] != ' ' && gameboard[1][2] != ' ' && gameboard[1][3] != ' ' && gameboard[2][1] != ' ' && gameboard[2][2] != ' ' && gameboard[2][3] != ' '
		&& gameboard[3][1] != ' ' && gameboard[3][2] != ' ' && gameboard[3][3] != ' ')
	{
		std::cout << "All spaces are taken this is a cats game\n";
		return true;
	}
	else
	{
		return false;
	}
}