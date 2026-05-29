#include "../Program/stdafx.h"
#include "Position.h"

Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
	
	
}

const Position & Position::operator+(const Position & other)
{
	Position Position(x + other.x, y + other.y);
	return Position;
}

const Position& Position::operator-(const Position& other)
{
	 Position Position(x - other.x, y - other.y);
	 return Position;
}

const Position& Position::operator*(const Position& other)
{
	Position Position(x * other.x, y * other.y);
	return Position;
}
const Position& Position::operator/(const Position& other)
{
	Position Position(x / other.x, y / other.y);
	return Position;
}

const Position& Position::operator++()
{
	this->x++;
	this->y++;
	
	return *this;
}

const Position& Position::operator--()
{
	this->x--;
	this->y--;

	return *this;
}

const Position& Position::operator++(int)
{
	Position clone(this->x, this->y);

	this->x++;
	this->y++;

	return clone;
}

const Position& Position::operator--(int)
{
	Position clone(this->x, this->y);
	this->x--;
	this->y--;
	
	return clone;
}

