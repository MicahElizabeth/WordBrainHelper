#pragma once

class Cell
{
private:
	char letter;
	bool isFull;

public: //could add move operator and move constructor
	~Cell(){}

	Cell()
	{
		letter = '\0';
		isFull = false;
	}

	Cell(const Cell &other)
	{
		if (this != &other)
		{
			letter = other.letter;
			isFull = other.isFull;
		}
	}

	Cell(char otherletter, bool otherisFull)
	{
		letter = otherletter;
		isFull = otherisFull;
	}

	Cell(char otherletter)
	{
		letter = otherletter;
		if (otherletter != '\0')
		{
			isFull = true;
		}
	}

	Cell & operator= (Cell rhs)
	{
		if (this != &rhs)
		{
			letter = rhs.letter;
			isFull = rhs.isFull;
		}

		return *this;
	}

	char getLetter()
	{
		return letter;
	}

	bool getStatus()
	{
		return isFull;
	}

	// if the letter is '\0' must set
	// staus to false, if not must set 
	// staus to true
	void setLetter(char newLetter)
	{
		letter = newLetter;
	}

	void setStatus(bool newStatus)
	{
		isFull = newStatus;
	}
};