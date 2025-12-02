#pragma once

//#include<pair>
#include<set> 
#include<string> 
#include <vector>


void displayBoard(const std::vector<std::vector<char>>&gameboard);
void playerTurn(std::vector<std::vector<char>>& gameboard, const std::string& pid);


std::pair<int, int> convertStringInputToRowAndColumn(const std::string& input);