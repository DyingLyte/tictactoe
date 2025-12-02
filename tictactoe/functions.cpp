#include"functions.h"

#include <iostream>
#include <array>
#include <string>
#include <map>




void displayBoard(const std::vector<std::vector<char>>& gameboard)
{
	//gameboard[0][0] = 's'; //ain't gonna happen, bro!

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			std::cout << gameboard[i][j] << " ";
		}
		std::cout << "\n";
	}
}

std::pair<int, int> convertStringInputToRowAndColumn(const std::string& input)
{
	std::map<std::string, std::pair<int, int>> stringsToRowsAndColumns =
	{
		{"a1", {1,1}},
		{"a2", {2,1}},
		{"a3", {3, 1}},

		// Column 2 (b)
		{"b1", {1, 2}}, // Row 1, Column 2
		{"b2", {2, 2}}, // Row 2, Column 2
		{"b3", {3, 2}}, // Row 3, Column 2

		// Column 3 (c)
		{"c1", {1, 3}}, // Row 1, Column 3
		{"c2", {2, 3}}, // Row 2, Column 3
		{"c3", {3, 3}}  // Row 3, Column 3
	};

	if (stringsToRowsAndColumns.find(input) == stringsToRowsAndColumns.end())
	{
		std::cout << "The input " << input << "is not an allowed position\n";
		__debugbreak(); 
	}

	return stringsToRowsAndColumns[input];
}

void playerTurn(std::vector<std::vector<char>>& gameboard, const std::string& pid)
{
	bool turn = true;
	std::string input{};
	std::getline(std::cin, input);
	while (turn)
	{
		auto pair = convertStringInputToRowAndColumn(input); 



		if (pid == "P1")
		{
			gameboard[pair.first][pair.second] = 'X'; 
		}

		else if (pid == "P2")
		{
			gameboard[pair.first][pair.second] = 'O';
		}
	}
}