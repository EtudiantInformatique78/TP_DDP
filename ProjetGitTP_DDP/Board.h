#pragma once
#include <iostream>
#include <deque>

class Point
{
private:
	int coordX;
	int coordY;
	std::string name;

public:
	//constructor
	Point(int _coordX, int _coordY, std::string _name)
	{
		coordX = _coordX;
		coordY = _coordY;
		name = _name;
	}

	//destructor
	~Point()
	{
		std::cout << "point destroyed" << std::endl;
	}
};

class Board
{
private:
	std::deque<std::deque<int>> board;

public:
	Board() {};
	virtual ~Board() {};

	void printBoard();
};