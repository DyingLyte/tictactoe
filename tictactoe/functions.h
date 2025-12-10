#pragma once
#include <vector>
#include <string>
//#include<pair>
#include<set> 




void displayBoard(char gameboard[4][4]);
void playerTurn(char gameboard[4][4], int player, std::vector<std::string> &playedPositions);
bool checkForWin(char gameboard[4][4], int player);