#pragma once
#include <vector>
#include "Cell.h"
#include <iostream>
using namespace std;

class Cell;

class Board
{
private: 
	Cell puzzle[7][7];
	int size;
	int numWords;
	vector<int> numLetters;
	vector<vector<string>> solutions;

public:
	~Board(){}

	Board()
	{
		size = 0;
		numWords = 0;
	}

	Board(const Board &other)
	{
		if (this != &other)
		{
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					puzzle[i][j] = other.puzzle[i][j];
				}
			}

			size = other.size;
			numWords = other.numWords;
			numLetters = other.numLetters;
			solutions = other.solutions;
		}
	}

	Board & operator= (Board rhs)
	{
		if (this != &rhs)
		{
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					puzzle[i][j] = rhs.puzzle[i][j];
				}
			}

			size = rhs.size;
			numWords = rhs.numWords;
			numLetters = rhs.numLetters;
			solutions = rhs.solutions;
		}
	}

	Cell getCell(int i, int j)
	{
		return puzzle[i][j];
	}

	int getSize()
	{
		return size;
	}

	int getNumWords()
	{
		return numWords;
	}

	vector<int> getNumLetters()
	{
		return numLetters;
	}

	vector<vector<string>> getSolutions()
	{
		return solutions;
	}

	void setCell(int i, int j, const Cell contents)
	{
		puzzle[i][j] = contents;
	}

	void setSize(int newsize)
	{
		size = newsize;
	}

	void setNumWords(int newNum)
	{
		numWords = newNum;
	}

	void setNumLetters(vector<int> newdata)
	{
		numLetters = newdata;
	}

	void addNumLetters(int newdata)
	{
		numLetters.push_back(newdata);
	}

	void setSolutions(vector<vector<string>> newdata)
	{
		solutions = newdata;
	}

	void addSolution(vector<string> newData)
	{
		solutions.push_back(newData);
	}




	void findSolutions()//pass in the "dictionary"
	{
		//option 1
		// while not all solutions exhausted
			//while the solution does not have the correct number of words
				//while word is not in the dictionary
					//given the number of letters in this word, make a possible "word"
					// check the dictionary
				//store in solutions, update a copy of the puzzle, and move to next word

		//option 2
			//find and return a word given the length and board and dictionary
			// ask user if it worked, 
				//if it did have them update the board
				// other wise find another word
			// if no word can be found (probably will only happen on words after the first)
				//ask the user to reset the board and find a different path to take to make the word
				// then move on

		// a cool feature would be to be able to show the user the path we are taking through the word
		// even if its just putting numbers into the holes for them to see the steps.
		
	}
};