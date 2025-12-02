#include <iostream>
#include <string>
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
	
	displayBoard(gameboard);

	std::cout << "\nHere is the gameboard for your selections use (a1) (b2) (c3) etc. \n";
	bool running = true;
	while (running)
	{
		std::cout << "Player 1 select where you would like to place an (O)\n";
		player1Turn(gameboard);
		displayBoard(gameboard);
		std::cout << "Player 2 select where you would like to place an (X) \n";
		player2Turn(gameboard);
		displayBoard(gameboard);
	}
}