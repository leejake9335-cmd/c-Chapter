#include "stdafx.h"
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

