#include "Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}
Coordinate &Coordinate::operator-()
{
	m_iX = -m_iX;
	this->m_iY = -this->m_iY;

	return *this;
}