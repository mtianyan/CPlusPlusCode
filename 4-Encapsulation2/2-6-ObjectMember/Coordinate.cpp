#include <iostream>
#include "Coordinate.h"
using namespace std;

Coordinate::Coordinate()
{
	cout << "Coordinate" << endl;

}
Coordinate::~Coordinate()
{
	cout << "~Coordinate" << endl;
}

int Coordinate::getX() {
	return m_iX;
}
void Coordinate::setX(int x) {
	m_iX = x;
}
int Coordinate::getY() {
	return m_iY;
}
void Coordinate::setY(int y) {
	m_iY = y;
}
