#include"functions.h"

#include <iostream>
#include <array>
#include <string>


std::set<std::pair<int, int>> playedPositions; //bad boy (no global vars)


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

void player1Turn(char gameboard[4][4])
{
	bool turn = true;
	std::string input{};
	std::getline(std::cin, input);
	while (turn)
	{
		if (input == "a1")
		{
			if (playedPositions.find({ 1, 1 }) == playedPositions.end())
			{
				gameboard[1][1] = 'O';
				playedPositions.insert({ 1, 1 });
				turn = false;
			}

			else
			{
				std::cout << "That spot is already taken\n";
				std::getline(std::cin, input);
			}
		}

		else if (input == "a2")
		{
			gameboard[2][1] = 'O';
			turn = false;
		}
		else if (input == "a3")
		{
			gameboard[3][1] = 'O';
			turn = false;
		}
		else if (input == "b1")
		{
			gameboard[1][2] = 'O';
			turn = false;
		}
		else if (input == "b2")
		{
			gameboard[2][2] = 'O';
			turn = false;
		}
		else if (input == "b3")
		{
			gameboard[3][2] = 'O';
			turn = false;
		}
		else if (input == "c1")
		{
			gameboard[1][3] = 'O';
			turn = false;
		}
		else if (input == "c2")
		{
			gameboard[2][3] = 'O';
			turn = false;
		}
		else if (input == "c3")
		{
			gameboard[3][3] = 'O';
			turn = false;
		}
		else
		{
			std::cout << "That is not a valid input... try again\n";
		}


	}
}

void player2Turn(char gameboard[4][4])
{
	bool turn = true;
	std::string input{};
	std::getline(std::cin, input);
	while (turn)
	{
		if (input == "a1")
		{
			if (playedPositions.find({ 1, 1 }) == playedPositions.end())
			{
				gameboard[1][1] = 'O';
				playedPositions.insert({ 1, 1 });
				turn = false;
			}

			else
			{
				std::cout << "That spot is already taken\n";
				std::getline(std::cin, input);
			}
		}
		else if (input == "a2")
		{
			gameboard[2][1] = 'X';
			turn = false;
		}
		else if (input == "a3")
		{
			gameboard[3][1] = 'X';
			turn = false;
		}
		else if (input == "b1")
		{
			gameboard[1][2] = 'X';
			turn = false;
		}
		else if (input == "b2")
		{
			gameboard[2][2] = 'X';
			turn = false;
		}
		else if (input == "b3")
		{
			gameboard[3][2] = 'X';
			turn = false;
		}
		else if (input == "c1")
		{
			gameboard[1][3] = 'X';
			turn = false;
		}
		else if (input == "c2")
		{
			gameboard[2][3] = 'X';
			turn = false;
		}
		else if (input == "c3")
		{
			gameboard[3][3] = 'X';
			turn = false;
		}
		else
		{
			std::cout << "That is not a valid input... try again\n";
		}
	}
}