#include <iostream>
#include <string>
#include <vector>
#include "functions.h"

int main()
{
	char gameboard[4][4];
	gameboard[1][0] = '1';
	gameboard[2][0] = '2';
	gameboard[3][0] = '3';
	gameboard[0][1] = 'a';
	gameboard[0][2] = 'b';
	gameboard[0][3] = 'c';
	for (int i = 1; i <= 3; ++i)
	{
		for (int j = 1; j <= 3; ++j)
		{
			gameboard[i][j] = ' ';
		}
	}
	
	displayBoard(gameboard);
	std::vector<std::string> playedPositions{};
	std::cout << "\nHere is the gameboard for your selections use (a1) (b2) (c3) etc... \n";
	bool running = true;
	while (running)
	{
		std::cout << "Player 1 select where you would like to place an (O)\n";
		playerTurn(gameboard, 1, playedPositions);
		displayBoard(gameboard);
		
		if (checkForWin(gameboard, 1))
		{
			return 0;
		}
		
		std::cout << "Player 2 select where you would like to place an (X) \n";
		playerTurn(gameboard, 2, playedPositions);
		displayBoard(gameboard);
		if (checkForWin(gameboard, 2))
		{
			return 0;
		}
	}
}