#include <iostream>
#include <string>
#include "functions.h"

int main()
{
	std::vector<std::vector<char>> gameboard(4, std::vector<char>(4));

	gameboard[1][0] = '1'; //row headers
	gameboard[2][0] = '2';
	gameboard[3][0] = '3';

	gameboard[0][1] = 'a'; //column headers (or vice versa)
	gameboard[0][2] = 'b';
	gameboard[0][3] = 'c';


	std::cout << "\nHere is the gameboard for your selections use (a1) (b2) (c3) etc. \n";

	displayBoard(gameboard);

	bool isGameOver = true;
	std::string p1 = "P1";
	std::string p2 = "P2";

	
	while (isGameOver)
	{
		std::cout << "Player 1 select where you would like to place an (O)\n";

		playerTurn(gameboard, p1);
		displayBoard(gameboard);
		
		std::cout << "Player 2 select where you would like to place an (X) \n";
		playerTurn(gameboard, p2)	;
		displayBoard(gameboard);
		//isGameOver = checkIfGameIsOver(); 
	}
}