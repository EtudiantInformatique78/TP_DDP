#pragma once
#include <deque>
#include <iostream>

class Point
{

};

class Board
{
private:
	std::deque<std::deque<int>> board;

public:
	Board() {
		for(int i =1 ; i <= 5; i++)
		{
			
			std::deque<int> deck;
			for(int j=1; j <= 6; j++)
			{
				deck.push_back(i*j);
			}
			board.push_back(deck);
			
		}
	};
	virtual ~Board() {};


	void printBoard()
	{
		std::deque<std::deque<int>>::iterator it1;
		std::deque<int>::iterator it2;

		std::cout << "----------------------------------" << std::endl;

		for(it1 = board.begin(); it1 != board.end(); it1++)
		{
			for(it2 = (*it1).begin(); it2 != (*it1).end() ; it2++ )
			{
				std::cout << " | " << (*it2) << " | ";
			}
			std::cout << std::endl;
		}

		std::cout << "----------------------------------" << std::endl;
	}
};