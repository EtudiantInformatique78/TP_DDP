#pragma once
#include <deque>

Class Point
{

}

class Board
{
private:
	std::deque<std::deque<int>> board;

public:
	Board() {};
	virtual ~Board() {};

	void printBoard()
};