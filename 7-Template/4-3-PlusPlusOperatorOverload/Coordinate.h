#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
using namespace std;

class Coordinate
{
	friend Coordinate &operator-(Coordinate &c);

public:
	Coordinate(int x, int y);
	Coordinate &operator++();//«∞÷√++
	Coordinate operator++(int);//∫Û÷√++

	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;

};

#endif